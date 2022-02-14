
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apply_state {int ws_ignore_action; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct apply_state *VAR_2,
       const char *VAR_3)
{
 if (!VAR_3 || !FUNC_2(VAR_3, "no") ||
     !FUNC_2(VAR_3, "false") || !FUNC_2(VAR_3, "never") ||
     !FUNC_2(VAR_3, "none")) {
  VAR_2->ws_ignore_action = VAR_1;
  return 0;
 }
 if (!FUNC_2(VAR_3, "change")) {
  VAR_2->ws_ignore_action = VAR_0;
  return 0;
 }
 return FUNC_1(FUNC_0("unrecognized whitespace ignore option '%s'"), VAR_3);
}
