
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apply_state {void* ws_error_action; scalar_t__ squelch_whitespace_errors; } ;


 int FUNC_0 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int ,char const*) ;
 void* VAR_2 ;
 int FUNC_2 (char const*,char*) ;
 void* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct apply_state *VAR_4, const char *VAR_5)
{
 if (!VAR_5) {
  VAR_4->ws_error_action = VAR_3;
  return 0;
 }
 if (!FUNC_2(VAR_5, "warn")) {
  VAR_4->ws_error_action = VAR_3;
  return 0;
 }
 if (!FUNC_2(VAR_5, "nowarn")) {
  VAR_4->ws_error_action = VAR_2;
  return 0;
 }
 if (!FUNC_2(VAR_5, "error")) {
  VAR_4->ws_error_action = VAR_1;
  return 0;
 }
 if (!FUNC_2(VAR_5, "error-all")) {
  VAR_4->ws_error_action = VAR_1;
  VAR_4->squelch_whitespace_errors = 0;
  return 0;
 }
 if (!FUNC_2(VAR_5, "strip") || !FUNC_2(VAR_5, "fix")) {
  VAR_4->ws_error_action = VAR_0;
  return 0;
 }




 return FUNC_1(FUNC_0("unrecognized whitespace option '%s'"), VAR_5);
}
