
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grep_pat {int token; struct grep_pat* next; } ;
struct TYPE_2__ {struct grep_pat* atom; } ;
struct grep_expr {TYPE_1__ u; int node; } ;


 int VAR_0 ;
 int VAR_1 ;




 struct grep_expr* FUNC_0 (struct grep_pat**) ;
 int FUNC_1 (char*) ;
 struct grep_expr* FUNC_2 (int,int) ;

__attribute__((used)) static struct grep_expr *FUNC_3(struct grep_pat **VAR_2)
{
 struct grep_pat *VAR_3;
 struct grep_expr *VAR_4;

 VAR_3 = *VAR_2;
 if (!VAR_3)
  return ((void*)0);
 switch (VAR_3->token) {
 case 130:
 case 128:
 case 129:
  VAR_4 = FUNC_2(1, sizeof (struct grep_expr));
  VAR_4->node = VAR_1;
  VAR_4->u.atom = VAR_3;
  *VAR_2 = VAR_3->next;
  return VAR_4;
 case 131:
  *VAR_2 = VAR_3->next;
  VAR_4 = FUNC_0(VAR_2);
  if (!*VAR_2 || (*VAR_2)->token != VAR_0)
   FUNC_1("unmatched parenthesis");
  *VAR_2 = (*VAR_2)->next;
  return VAR_4;
 default:
  return ((void*)0);
 }
}
