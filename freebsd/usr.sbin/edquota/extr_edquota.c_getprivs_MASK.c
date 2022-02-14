
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotause {struct quotause* next; int dqblk; int fsname; struct quotafile* qf; } ;
struct quotafile {int dummy; } ;
struct fstab {char* fs_spec; char* fs_file; char* fs_vfstype; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct quotause*) ;
 struct fstab* FUNC_4 () ;
 struct quotafile* FUNC_5 (struct fstab*,int,int) ;
 int FUNC_6 (struct quotafile*,int *,long) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;

struct quotause *
FUNC_12(long VAR_4, int VAR_5, char *VAR_6)
{
 struct quotafile *VAR_7;
 struct fstab *VAR_8;
 struct quotause *VAR_9, *VAR_10;
 struct quotause *VAR_11;

 FUNC_7();
 VAR_11 = VAR_10 = ((void*)0);
 while ((VAR_8 = FUNC_4())) {
  if (VAR_6 && *VAR_6 && FUNC_8(VAR_6, VAR_8->fs_spec) &&
      FUNC_8(VAR_6, VAR_8->fs_file))
   continue;
  if (FUNC_8(VAR_8->fs_vfstype, "ufs"))
   continue;
  if ((VAR_7 = FUNC_5(VAR_8, VAR_5, VAR_1|VAR_2)) == ((void*)0)) {
   if (VAR_3 != VAR_0)
    FUNC_10("cannot open quotas on %s", VAR_8->fs_file);
   continue;
  }
  if ((VAR_9 = (struct quotause *)FUNC_0(1, sizeof(*VAR_9))) == ((void*)0))
   FUNC_2(2, "out of memory");
  VAR_9->qf = VAR_7;
  FUNC_9(VAR_9->fsname, VAR_8->fs_file, sizeof(VAR_9->fsname));
  if (FUNC_6(VAR_7, &VAR_9->dqblk, VAR_4) == -1) {
   FUNC_10("cannot read quotas on %s", VAR_8->fs_file);
   FUNC_3(VAR_9);
   continue;
  }
  if (VAR_11 == ((void*)0))
   VAR_11 = VAR_9;
  else
   VAR_10->next = VAR_9;
  VAR_10 = VAR_9;
  VAR_9->next = 0;
 }
 if (VAR_11 == ((void*)0)) {
  FUNC_11("No quotas on %s", VAR_6 ? VAR_6 : "any filesystems");
 }
 FUNC_1();
 return (VAR_11);
}
