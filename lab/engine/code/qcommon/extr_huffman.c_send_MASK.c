
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* right; struct TYPE_4__* parent; } ;
typedef TYPE_1__ node_t ;
typedef int byte ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(node_t *VAR_1, node_t *VAR_2, byte *VAR_3, int VAR_4) {
 if (VAR_1->parent) {
  FUNC_1(VAR_1->parent, VAR_1, VAR_3, VAR_4);
 }
 if (VAR_2) {
  if (VAR_0 >= VAR_4) {
   VAR_0 = VAR_4 + 1;
   return;
  }
  if (VAR_1->right == VAR_2) {
   FUNC_0(1, VAR_3);
  } else {
   FUNC_0(0, VAR_3);
  }
 }
}
