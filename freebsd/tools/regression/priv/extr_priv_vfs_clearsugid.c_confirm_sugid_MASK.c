
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct stat*) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_2, int VAR_3, int VAR_4)
{
 struct stat VAR_5;

 if (FUNC_0(VAR_1, &VAR_5) < 0) {
  FUNC_1("%s stat(%s)", VAR_2, VAR_1);
  return;
 }
 if (VAR_3) {
  if (!(VAR_5.st_mode & VAR_0))
   FUNC_2("%s(root, %s): !SUID", VAR_2, VAR_4 ?
       "jail" : "!jail");
 } else {
  if (VAR_5.st_mode & VAR_0)
   FUNC_2("%s(!root, %s): SUID", VAR_2, VAR_4 ?
       "jail" : "!jail");
 }
}
