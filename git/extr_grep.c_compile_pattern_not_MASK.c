
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grep_pat {int token; struct grep_pat* next; } ;
struct TYPE_2__ {struct grep_expr* unary; } ;
struct grep_expr {TYPE_1__ u; int node; } ;


 int VAR_0 ;

 struct grep_expr* FUNC_0 (struct grep_pat**) ;
 int FUNC_1 (char*) ;
 struct grep_expr* FUNC_2 (int,int) ;

__attribute__((used)) static struct grep_expr *FUNC_3(struct grep_pat **VAR_1)
{
 struct grep_pat *VAR_2;
 struct grep_expr *VAR_3;

 VAR_2 = *VAR_1;
 if (!VAR_2)
  return ((void*)0);
 switch (VAR_2->token) {
 case 128:
  if (!VAR_2->next)
   FUNC_1("--not not followed by pattern expression");
  *VAR_1 = VAR_2->next;
  VAR_3 = FUNC_2(1, sizeof (struct grep_expr));
  VAR_3->node = VAR_0;
  VAR_3->u.unary = FUNC_3(VAR_1);
  if (!VAR_3->u.unary)
   FUNC_1("--not followed by non pattern expression");
  return VAR_3;
 default:
  return FUNC_0(VAR_1);
 }
}
