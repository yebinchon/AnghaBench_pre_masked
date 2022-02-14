
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_opt {struct grep_expr* pattern_expression; } ;
struct grep_expr {int dummy; } ;
typedef int ssize_t ;
typedef enum grep_context { ____Placeholder_grep_context } grep_context ;


 int FUNC_0 (struct grep_opt*,struct grep_expr*,char*,char*,int,int *,int *,int) ;

__attribute__((used)) static int FUNC_1(struct grep_opt *VAR_0, char *VAR_1, char *VAR_2,
        enum grep_context VAR_3, ssize_t *VAR_4,
        ssize_t *VAR_5, int VAR_6)
{
 struct grep_expr *VAR_7 = VAR_0->pattern_expression;
 return FUNC_0(VAR_0, VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
