
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t picoIndex_t ;
struct TYPE_9__ {size_t* data; } ;
struct TYPE_10__ {TYPE_2__* data; } ;
struct TYPE_7__ {TYPE_3__ indices; TYPE_4__ tree; int lessData; scalar_t__ (* lessFunc ) (int ,size_t,size_t) ;} ;
typedef TYPE_1__ UniqueIndices ;
struct TYPE_8__ {scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_2__ BinaryTreeNode ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_3 (int ,size_t,size_t) ;
 scalar_t__ FUNC_4 (int ,size_t,size_t) ;

picoIndex_t FUNC_5(UniqueIndices* VAR_0, picoIndex_t VAR_1) {
 picoIndex_t VAR_2 = 0;

 for (;; )
 {
  if (VAR_0->lessFunc(VAR_0->lessData, VAR_1, VAR_0->indices.data[VAR_2])) {
   BinaryTreeNode* VAR_3 = VAR_0->tree.data + VAR_2;
   if (VAR_3->left != 0) {
    VAR_2 = VAR_3->left;
    continue;
   }
   else
   {
    VAR_3->left = (picoIndex_t)FUNC_1(&VAR_0->tree);
    FUNC_0(&VAR_0->tree);
    FUNC_2(&VAR_0->indices, VAR_1);
    return VAR_3->left;
   }
  }
  if (VAR_0->lessFunc(VAR_0->lessData, VAR_0->indices.data[VAR_2], VAR_1)) {
   BinaryTreeNode* VAR_4 = VAR_0->tree.data + VAR_2;
   if (VAR_4->right != 0) {
    VAR_2 = VAR_4->right;
    continue;
   }
   else
   {
    VAR_4->right = (picoIndex_t)FUNC_1(&VAR_0->tree);
    FUNC_0(&VAR_0->tree);
    FUNC_2(&VAR_0->indices, VAR_1);
    return VAR_4->right;
   }
  }

  return VAR_2;
 }
}
