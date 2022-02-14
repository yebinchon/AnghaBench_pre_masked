
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (char*,char*,char const*,...) ;
 char** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(int VAR_2, u_long VAR_3, const char *VAR_4, const char *VAR_5)
{

 FUNC_0("Disk quotas for %s %s (%cid %lu): %s\n", VAR_0[VAR_2],
     VAR_4, *VAR_0[VAR_2], VAR_3, VAR_5);
 if (!VAR_1 && VAR_5[0] == '\0') {
  FUNC_0("%-15s %7s %8s %7s %7s %6s %7s %6s%8s\n"
   , "Filesystem"
   , "usage"
   , "quota"
   , "limit"
   , "grace"
   , "files"
   , "quota"
   , "limit"
   , "grace"
  );
 }
}
