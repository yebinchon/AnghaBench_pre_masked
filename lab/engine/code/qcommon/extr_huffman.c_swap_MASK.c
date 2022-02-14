
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* parent; struct TYPE_6__* right; struct TYPE_6__* left; } ;
typedef TYPE_1__ node_t ;
struct TYPE_7__ {TYPE_1__* tree; } ;
typedef TYPE_2__ huff_t ;



__attribute__((used)) static void FUNC_0 (huff_t* VAR_0, node_t *VAR_1, node_t *VAR_2) {
 node_t *VAR_3, *VAR_4;

 VAR_3 = VAR_1->parent;
 VAR_4 = VAR_2->parent;

 if (VAR_3) {
  if (VAR_3->left == VAR_1) {
   VAR_3->left = VAR_2;
  } else {
       VAR_3->right = VAR_2;
  }
 } else {
  VAR_0->tree = VAR_2;
 }

 if (VAR_4) {
  if (VAR_4->left == VAR_2) {
   VAR_4->left = VAR_1;
  } else {
   VAR_4->right = VAR_1;
  }
 } else {
  VAR_0->tree = VAR_1;
 }

 VAR_1->parent = VAR_4;
 VAR_2->parent = VAR_3;
}
