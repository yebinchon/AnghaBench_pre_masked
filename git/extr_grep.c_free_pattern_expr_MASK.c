
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct grep_expr* right; struct grep_expr* left; } ;
struct TYPE_4__ {TYPE_1__ binary; struct grep_expr* unary; } ;
struct grep_expr {int node; TYPE_2__ u; } ;







 int FUNC_0 (struct grep_expr*) ;

__attribute__((used)) static void FUNC_1(struct grep_expr *VAR_0)
{
 switch (VAR_0->node) {
 case 128:
 case 131:
  break;
 case 130:
  FUNC_1(VAR_0->u.unary);
  break;
 case 132:
 case 129:
  FUNC_1(VAR_0->u.binary.left);
  FUNC_1(VAR_0->u.binary.right);
  break;
 }
 FUNC_0(VAR_0);
}
