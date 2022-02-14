
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int y; int rpos; } ;
typedef TYPE_1__ tree_ext_t ;
struct TYPE_8__ {int* A; int N; int root; } ;
typedef TYPE_2__ listree_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,scalar_t__,int) ;
 TYPE_1__* FUNC_5 (int ,int) ;

void FUNC_6 (listree_t *VAR_3, int VAR_4) {
  int VAR_5, VAR_6;
  tree_ext_t *VAR_7 = FUNC_5 (VAR_3->root, VAR_4);
  if (VAR_7 == VAR_0) {
    VAR_6 = FUNC_1 (VAR_3, VAR_4);
    FUNC_0 (VAR_6 >= 0);
    FUNC_0 (!VAR_6 || VAR_3->A[VAR_3->N - VAR_6] != VAR_4);
    VAR_3->root = FUNC_4 (VAR_3->root, VAR_4, (FUNC_2 () << 2) + VAR_2, VAR_6);
  } else {
    VAR_5 = VAR_7->y & 3;
    VAR_6 = VAR_7->rpos;
    FUNC_0 (VAR_5 == VAR_1);
    VAR_3->root = FUNC_3 (VAR_3->root, VAR_4);



  }
}
