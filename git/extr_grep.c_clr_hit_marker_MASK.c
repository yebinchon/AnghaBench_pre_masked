
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct grep_expr* right; TYPE_1__* left; } ;
struct TYPE_6__ {TYPE_2__ binary; } ;
struct grep_expr {scalar_t__ node; TYPE_3__ u; scalar_t__ hit; } ;
struct TYPE_4__ {scalar_t__ hit; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct grep_expr *VAR_1)
{



 while (1) {
  VAR_1->hit = 0;
  if (VAR_1->node != VAR_0)
   return;
  VAR_1->u.binary.left->hit = 0;
  VAR_1 = VAR_1->u.binary.right;
 }
}
