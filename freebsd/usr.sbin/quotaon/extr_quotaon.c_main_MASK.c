
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fstab {char const* fs_vfstype; char const* fs_type; int fs_spec; int fs_file; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 struct fstab* FUNC_3 () ;
 int FUNC_4 (int,char**,char*) ;
 char* FUNC_5 () ;
 scalar_t__ VAR_4 ;
 long FUNC_6 (int ,char**,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (struct fstab*,int,int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 () ;
 int VAR_7 ;
 int FUNC_11 (char*,char*) ;

int
FUNC_12(int VAR_8, char **VAR_9)
{
 struct fstab *VAR_10;
 const char *VAR_11;
 long VAR_12, VAR_13 = 0;
 int VAR_14, VAR_15, VAR_16 = 0, VAR_17 = 0;

 VAR_11 = FUNC_5();
 if (FUNC_9(VAR_11, "quotaoff") == 0)
  VAR_16++;
 else if (FUNC_9(VAR_11, "quotaon") != 0)
  FUNC_1(1, "name must be quotaon or quotaoff");
 while ((VAR_14 = FUNC_4(VAR_8, VAR_9, "avug")) != -1) {
  switch(VAR_14) {
  case 'a':
   VAR_3++;
   break;
  case 'g':
   VAR_4++;
   break;
  case 'u':
   VAR_6++;
   break;
  case 'v':
   VAR_7++;
   break;
  default:
   FUNC_10();
  }
 }
 VAR_8 -= VAR_5;
 VAR_9 += VAR_5;
 if (VAR_8 <= 0 && !VAR_3)
  FUNC_10();
 if (!VAR_4 && !VAR_6) {
  VAR_4++;
  VAR_6++;
 }
 FUNC_8();
 while ((VAR_10 = FUNC_3()) != ((void*)0)) {
  if (FUNC_9(VAR_10->fs_vfstype, "ufs") ||
      FUNC_9(VAR_10->fs_type, VAR_0))
   continue;
  if (VAR_3) {
   if (VAR_4)
    VAR_17 += FUNC_7(VAR_10, VAR_16, VAR_1);
   if (VAR_6)
    VAR_17 += FUNC_7(VAR_10, VAR_16, VAR_2);
   continue;
  }
  if ((VAR_12 = FUNC_6(VAR_10->fs_file, VAR_9, VAR_8)) >= 0 ||
      (VAR_12 = FUNC_6(VAR_10->fs_spec, VAR_9, VAR_8)) >= 0) {
   VAR_13 |= 1 << VAR_12;
   if (VAR_4)
    VAR_17 += FUNC_7(VAR_10, VAR_16, VAR_1);
   if (VAR_6)
    VAR_17 += FUNC_7(VAR_10, VAR_16, VAR_2);
  }
 }
 FUNC_0();
 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
  if ((VAR_13 & (1 << VAR_15)) == 0)
   FUNC_11("%s not found in fstab", VAR_9[VAR_15]);
 FUNC_2(VAR_17);
}
