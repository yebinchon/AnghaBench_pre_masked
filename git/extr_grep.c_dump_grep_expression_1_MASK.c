
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct grep_expr* right; struct grep_expr* left; } ;
struct TYPE_4__ {TYPE_1__ binary; struct grep_expr* unary; int atom; } ;
struct grep_expr {int node; TYPE_2__ u; } ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct grep_expr *VAR_1, int VAR_2)
{
 FUNC_2(VAR_2);
 switch (VAR_1->node) {
 case 128:
  FUNC_1(VAR_0, "true\n");
  break;
 case 131:
  FUNC_0(VAR_1->u.atom);
  break;
 case 130:
  FUNC_1(VAR_0, "(not\n");
  FUNC_3(VAR_1->u.unary, VAR_2+1);
  FUNC_2(VAR_2);
  FUNC_1(VAR_0, ")\n");
  break;
 case 132:
  FUNC_1(VAR_0, "(and\n");
  FUNC_3(VAR_1->u.binary.left, VAR_2+1);
  FUNC_3(VAR_1->u.binary.right, VAR_2+1);
  FUNC_2(VAR_2);
  FUNC_1(VAR_0, ")\n");
  break;
 case 129:
  FUNC_1(VAR_0, "(or\n");
  FUNC_3(VAR_1->u.binary.left, VAR_2+1);
  FUNC_3(VAR_1->u.binary.right, VAR_2+1);
  FUNC_2(VAR_2);
  FUNC_1(VAR_0, ")\n");
  break;
 }
}
