
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int dummy; } ;
struct fstab {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 char** VAR_1 ;
 int FUNC_1 (struct quotafile*) ;
 char* FUNC_2 (struct quotafile*) ;
 scalar_t__ FUNC_3 (struct quotafile*) ;
 scalar_t__ FUNC_4 (struct quotafile*) ;
 struct quotafile* FUNC_5 (struct fstab*,int,int ) ;
 char* FUNC_6 (struct quotafile*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_8(struct fstab *VAR_3, int VAR_4, int VAR_5)
{
 struct quotafile *VAR_6;

 if ((VAR_6 = FUNC_5(VAR_3, VAR_5, VAR_0)) == ((void*)0))
  return (0);
 if (VAR_4) {
  if (FUNC_3(VAR_6) != 0) {
   FUNC_7("%s", FUNC_2(VAR_6));
   return (1);
  }
  if (VAR_2)
   FUNC_0("%s: quotas turned off\n", FUNC_2(VAR_6));
  FUNC_1(VAR_6);
  return(0);
 }
 if (FUNC_4(VAR_6) != 0) {
  FUNC_7("using %s on %s", FUNC_6(VAR_6), FUNC_2(VAR_6));
  return (1);
 }
 if (VAR_2)
  FUNC_0("%s: %s quotas turned on with data file %s\n",
      FUNC_2(VAR_6), VAR_1[VAR_5], FUNC_6(VAR_6));
 FUNC_1(VAR_6);
 return(0);
}
