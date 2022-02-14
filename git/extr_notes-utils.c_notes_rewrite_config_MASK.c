
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notes_rewrite_cfg {char* cmd; int refs; int refs_from_env; int combine; int mode_from_env; int enabled; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (int ,char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct notes_rewrite_cfg *VAR_3 = VAR_2;
 if (FUNC_5(VAR_0, "notes.rewrite.") && !FUNC_6(VAR_0+14, VAR_3->cmd)) {
  VAR_3->enabled = FUNC_3(VAR_0, VAR_1);
  return 0;
 } else if (!VAR_3->mode_from_env && !FUNC_6(VAR_0, "notes.rewritemode")) {
  if (!VAR_1)
   return FUNC_1(VAR_0);
  VAR_3->combine = FUNC_4(VAR_1);
  if (!VAR_3->combine) {
   FUNC_2(FUNC_0("Bad notes.rewriteMode value: '%s'"), VAR_1);
   return 1;
  }
  return 0;
 } else if (!VAR_3->refs_from_env && !FUNC_6(VAR_0, "notes.rewriteref")) {


  if (FUNC_5(VAR_1, "refs/notes/"))
   FUNC_7(VAR_3->refs, VAR_1);
  else
   FUNC_8(FUNC_0("Refusing to rewrite notes in %s"
    " (outside of refs/notes/)"), VAR_1);
  return 0;
 }

 return 0;
}
