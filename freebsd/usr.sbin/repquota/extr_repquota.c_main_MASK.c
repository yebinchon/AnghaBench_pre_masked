
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct passwd {int pw_name; scalar_t__ pw_uid; } ;
struct group {int gr_name; scalar_t__ gr_gid; } ;
struct fstab {int fs_spec; int fs_file; int fs_vfstype; } ;


 int GRPQUOTA ;
 int USRQUOTA ;
 int addid (int ,int ,int ) ;
 scalar_t__ aflag ;
 int endfsent () ;
 int endgrent () ;
 int endpwent () ;
 int exit (int) ;
 struct fstab* getfsent () ;
 struct group* getgrent () ;
 int getopt (int,char**,char*) ;
 struct passwd* getpwent () ;
 int hflag ;
 int nflag ;
 long oneof (int ,char**,int) ;
 scalar_t__ optind ;
 scalar_t__ repquota (struct fstab*,int ) ;
 int setfsent () ;
 int setgrent () ;
 int setpwent () ;
 scalar_t__ strcmp (int ,char*) ;
 int usage () ;
 int vflag ;
 int warnx (char*,char*) ;

int
main(int argc, char *argv[])
{
 struct fstab *fs;
 struct passwd *pw;
 struct group *gr;
 int ch, gflag = 0, uflag = 0, errs = 0;
 long i, argnum, done = 0;

 while ((ch = getopt(argc, argv, "aghnuv")) != -1) {
  switch(ch) {
  case 'a':
   aflag++;
   break;
  case 'g':
   gflag++;
   break;
  case 'h':
   hflag++;
   break;
  case 'n':
   nflag++;
   break;
  case 'u':
   uflag++;
   break;
  case 'v':
   vflag++;
   break;
  default:
   usage();
  }
 }
 argc -= optind;
 argv += optind;
 if (argc == 0 && !aflag)
  usage();
 if (!gflag && !uflag) {
  if (aflag)
   gflag++;
  uflag++;
 }
 if (gflag && !nflag) {
  setgrent();
  while ((gr = getgrent()) != 0)
   (void) addid((u_long)gr->gr_gid, GRPQUOTA, gr->gr_name);
  endgrent();
 }
 if (uflag && !nflag) {
  setpwent();
  while ((pw = getpwent()) != 0)
   (void) addid((u_long)pw->pw_uid, USRQUOTA, pw->pw_name);
  endpwent();
 }
 setfsent();
 while ((fs = getfsent()) != ((void*)0)) {
  if (strcmp(fs->fs_vfstype, "ufs"))
   continue;
  if (aflag) {
   if (gflag)
    errs += repquota(fs, GRPQUOTA);
   if (uflag)
    errs += repquota(fs, USRQUOTA);
   continue;
  }
  if ((argnum = oneof(fs->fs_file, argv, argc)) >= 0 ||
      (argnum = oneof(fs->fs_spec, argv, argc)) >= 0) {
   done |= 1 << argnum;
   if (gflag)
    errs += repquota(fs, GRPQUOTA);
   if (uflag)
    errs += repquota(fs, USRQUOTA);
  }
 }
 endfsent();
 for (i = 0; i < argc; i++)
  if ((done & (1 << i)) == 0)
   warnx("%s not found in fstab", argv[i]);
 exit(errs);
}
