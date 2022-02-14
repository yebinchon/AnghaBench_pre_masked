
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {int cmd; int argc; char** argv; } ;
typedef enum subcmd { ____Placeholder_subcmd } subcmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(struct opts *VAR_4, int VAR_5, char *VAR_6[])
{
 char *VAR_7 = (VAR_5 < 2) ? "push" : VAR_6[1];
 enum subcmd VAR_8;

 if (!FUNC_0(VAR_7, "apply")) {
  VAR_8 = VAR_0;
 } else if (!FUNC_0(VAR_7, "list")) {
  VAR_8 = VAR_1;
 } else if (!FUNC_0(VAR_7, "pop")) {
  VAR_8 = VAR_2;
 } else if (!FUNC_0(VAR_7, "push")) {
  VAR_8 = VAR_3;
 } else {
  FUNC_1("invalid command %s", VAR_7);
  return;
 }

 VAR_4->cmd = VAR_8;
 VAR_4->argc = (VAR_5 < 2) ? VAR_5 - 1 : VAR_5 - 2;
 VAR_4->argv = VAR_6;
}
