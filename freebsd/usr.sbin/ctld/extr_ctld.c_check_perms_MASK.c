
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_3)
{
 struct stat VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 if (VAR_5 != 0) {
  FUNC_0("stat");
  return;
 }
 if (VAR_4.st_mode & VAR_1) {
  FUNC_1("%s is world-writable", VAR_3);
 } else if (VAR_4.st_mode & VAR_0) {
  FUNC_1("%s is world-readable", VAR_3);
 } else if (VAR_4.st_mode & VAR_2) {




  FUNC_1("%s is world-executable", VAR_3);
 }




}
