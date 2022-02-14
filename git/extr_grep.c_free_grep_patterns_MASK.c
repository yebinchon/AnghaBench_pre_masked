
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_pat {int token; struct grep_pat* pattern; int regexp; int pcre2_pattern; int pcre1_regexp; struct grep_pat* next; } ;
struct grep_opt {int pattern_expression; int extended; struct grep_pat* pattern_list; } ;





 int FUNC_0 (struct grep_pat*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct grep_pat*) ;
 int FUNC_3 (struct grep_pat*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct grep_opt *VAR_0)
{
 struct grep_pat *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->pattern_list; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  switch (VAR_1->token) {
  case 130:
  case 128:
  case 129:
   if (VAR_1->pcre1_regexp)
    FUNC_2(VAR_1);
   else if (VAR_1->pcre2_pattern)
    FUNC_3(VAR_1);
   else
    FUNC_4(&VAR_1->regexp);
   FUNC_0(VAR_1->pattern);
   break;
  default:
   break;
  }
  FUNC_0(VAR_1);
 }

 if (!VAR_0->extended)
  return;
 FUNC_1(VAR_0->pattern_expression);
}
