
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {int cmd; int argc; char** argv; } ;
typedef enum subcmd { ____Placeholder_subcmd } subcmd ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(
 struct opts *VAR_5, int VAR_6, char **VAR_7)
{
 char *VAR_8 = VAR_7[1];
 enum subcmd VAR_9 = 0;

 if (VAR_6 < 2)
  FUNC_1("no command specified", ((void*)0));

 if (!FUNC_0(VAR_8, "add")) {
  VAR_9 = VAR_0;
 } else if (!FUNC_0(VAR_8, "remove")) {
  VAR_9 = VAR_1;
 } else if (!FUNC_0(VAR_8, "rename")) {
  VAR_9 = VAR_2;
 } else if (!FUNC_0(VAR_8, "set-url")) {
  VAR_9 = VAR_3;
 } else if (!FUNC_0(VAR_8, "show")) {
  VAR_9 = VAR_4;
 } else {
  FUNC_1("command is not valid", VAR_8);
 }
 VAR_5->cmd = VAR_9;

 VAR_5->argc = VAR_6 - 2;
 VAR_5->argv = VAR_7 + 2;
}
