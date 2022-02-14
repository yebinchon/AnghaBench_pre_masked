
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct grep_pat {scalar_t__ token; struct grep_pat* next; } ;
struct TYPE_3__ {struct grep_expr* right; struct grep_expr* left; } ;
struct TYPE_4__ {TYPE_1__ binary; } ;
struct grep_expr {TYPE_2__ u; int node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct grep_expr* FUNC_0 (struct grep_pat**) ;
 int FUNC_1 (char*) ;
 struct grep_expr* FUNC_2 (int,int) ;

__attribute__((used)) static struct grep_expr *FUNC_3(struct grep_pat **VAR_2)
{
 struct grep_pat *VAR_3;
 struct grep_expr *VAR_4, *VAR_5, *VAR_6;

 VAR_4 = FUNC_0(VAR_2);
 VAR_3 = *VAR_2;
 if (VAR_3 && VAR_3->token == VAR_0) {
  if (!VAR_3->next)
   FUNC_1("--and not followed by pattern expression");
  *VAR_2 = VAR_3->next;
  VAR_5 = FUNC_3(VAR_2);
  if (!VAR_5)
   FUNC_1("--and not followed by pattern expression");
  VAR_6 = FUNC_2(1, sizeof (struct grep_expr));
  VAR_6->node = VAR_1;
  VAR_6->u.binary.left = VAR_4;
  VAR_6->u.binary.right = VAR_5;
  return VAR_6;
 }
 return VAR_4;
}
