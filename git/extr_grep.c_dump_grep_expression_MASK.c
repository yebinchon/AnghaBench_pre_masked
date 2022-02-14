
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_opt {scalar_t__ all_match; struct grep_expr* pattern_expression; } ;
struct grep_expr {int dummy; } ;


 int FUNC_0 (struct grep_expr*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct grep_opt *VAR_1)
{
 struct grep_expr *VAR_2 = VAR_1->pattern_expression;

 if (VAR_1->all_match)
  FUNC_2(VAR_0, "[all-match]\n");
 FUNC_0(VAR_2, 0);
 FUNC_1(((void*)0));
}
