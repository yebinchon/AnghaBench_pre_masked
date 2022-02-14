
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_pat {int token; int pattern; struct grep_pat* next; } ;
struct grep_opt {int extended; int all_match; struct grep_expr* pattern_expression; struct grep_pat* pattern_list; int debug; } ;
struct grep_expr {int dummy; } ;





 struct grep_expr* FUNC_0 (struct grep_pat**) ;
 int FUNC_1 (struct grep_pat*,struct grep_opt*) ;
 int FUNC_2 (char*,int ) ;
 struct grep_expr* FUNC_3 (struct grep_expr*,struct grep_expr*) ;
 struct grep_expr* FUNC_4 (struct grep_expr*,struct grep_expr*) ;
 struct grep_expr* FUNC_5 (struct grep_opt*) ;

__attribute__((used)) static void FUNC_6(struct grep_opt *VAR_0)
{
 struct grep_pat *VAR_1;
 struct grep_expr *VAR_2 = FUNC_5(VAR_0);

 for (VAR_1 = VAR_0->pattern_list; VAR_1; VAR_1 = VAR_1->next) {
  switch (VAR_1->token) {
  case 130:
  case 128:
  case 129:
   FUNC_1(VAR_1, VAR_0);
   break;
  default:
   VAR_0->extended = 1;
   break;
  }
 }

 if (VAR_0->all_match || VAR_2)
  VAR_0->extended = 1;
 else if (!VAR_0->extended && !VAR_0->debug)
  return;

 VAR_1 = VAR_0->pattern_list;
 if (VAR_1)
  VAR_0->pattern_expression = FUNC_0(&VAR_1);
 if (VAR_1)
  FUNC_2("incomplete pattern expression: %s", VAR_1->pattern);

 if (!VAR_2)
  return;

 if (!VAR_0->pattern_expression)
  VAR_0->pattern_expression = VAR_2;
 else if (VAR_0->all_match)
  VAR_0->pattern_expression = FUNC_4(VAR_2,
        VAR_0->pattern_expression);
 else
  VAR_0->pattern_expression = FUNC_3(VAR_0->pattern_expression,
             VAR_2);
 VAR_0->all_match = 1;
}
