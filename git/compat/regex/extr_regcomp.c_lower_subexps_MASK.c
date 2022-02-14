
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int regex_t ;
typedef int reg_errcode_t ;
struct TYPE_6__ {TYPE_4__* right; TYPE_4__* left; } ;
typedef TYPE_2__ bin_tree_t ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_2__* parent; TYPE_1__ token; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int *,int *,TYPE_4__*) ;

__attribute__((used)) static reg_errcode_t
FUNC_1 (void *VAR_2, bin_tree_t *VAR_3)
{
  regex_t *VAR_4 = (regex_t *) VAR_2;
  reg_errcode_t VAR_5 = VAR_0;

  if (VAR_3->left && VAR_3->left->token.type == VAR_1)
    {
      VAR_3->left = FUNC_0 (&VAR_5, VAR_4, VAR_3->left);
      if (VAR_3->left)
 VAR_3->left->parent = VAR_3;
    }
  if (VAR_3->right && VAR_3->right->token.type == VAR_1)
    {
      VAR_3->right = FUNC_0 (&VAR_5, VAR_4, VAR_3->right);
      if (VAR_3->right)
 VAR_3->right->parent = VAR_3;
    }

  return VAR_5;
}
