
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct grep_expr* right; struct grep_expr* left; } ;
struct TYPE_4__ {TYPE_1__ binary; } ;
struct grep_expr {TYPE_2__ u; int node; } ;


 int VAR_0 ;
 struct grep_expr* FUNC_0 (int,int) ;

__attribute__((used)) static struct grep_expr *FUNC_1(struct grep_expr *VAR_1, struct grep_expr *VAR_2)
{
 struct grep_expr *VAR_3 = FUNC_0(1, sizeof(*VAR_3));
 VAR_3->node = VAR_0;
 VAR_3->u.binary.left = VAR_1;
 VAR_3->u.binary.right = VAR_2;
 return VAR_3;
}
