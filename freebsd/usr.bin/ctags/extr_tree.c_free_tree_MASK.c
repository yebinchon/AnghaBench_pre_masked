
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* left; struct TYPE_4__* right; } ;
typedef TYPE_1__ NODE ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(NODE *VAR_0)
{
 NODE *VAR_1;
 while (VAR_0) {
  if (VAR_0->right)
   FUNC_1(VAR_0->right);
  VAR_1 = VAR_0->left;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
