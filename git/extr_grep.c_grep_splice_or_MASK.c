
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct grep_expr* right; } ;
struct TYPE_3__ {TYPE_2__ binary; } ;
struct grep_expr {scalar_t__ node; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static struct grep_expr *FUNC_1(struct grep_expr *VAR_2, struct grep_expr *VAR_3)
{
 struct grep_expr *VAR_4 = VAR_2;

 while (VAR_2) {
  FUNC_0(VAR_2->node == VAR_0);
  if (VAR_2->u.binary.right &&
      VAR_2->u.binary.right->node == VAR_1) {
   VAR_2->u.binary.right = VAR_3;
   break;
  }
  VAR_2 = VAR_2->u.binary.right;
 }
 return VAR_4;
}
