
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ reg_errcode_t ;
struct TYPE_5__ {struct TYPE_5__* right; struct TYPE_5__* parent; struct TYPE_5__* left; } ;
typedef TYPE_1__ bin_tree_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static reg_errcode_t
FUNC_1 (bin_tree_t *VAR_1, reg_errcode_t (VAR_2 (void *, bin_tree_t *)),
    void *VAR_3)
{
  bin_tree_t *VAR_4, *VAR_5;

  for (VAR_4 = VAR_1; ; )
    {


      while (VAR_4->left || VAR_4->right)
 if (VAR_4->left)
   VAR_4 = VAR_4->left;
 else
   VAR_4 = VAR_4->right;

      do
 {
   reg_errcode_t VAR_6 = VAR_2 (VAR_3, VAR_4);
   if (FUNC_0 (VAR_6 != VAR_0, 0))
     return VAR_6;
   if (VAR_4->parent == ((void*)0))
     return VAR_0;
   VAR_5 = VAR_4;
   VAR_4 = VAR_4->parent;
 }

      while (VAR_4->right == VAR_5 || VAR_4->right == ((void*)0));
      VAR_4 = VAR_4->right;
    }
}
