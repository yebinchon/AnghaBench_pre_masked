
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int y; int rpos; } ;
typedef TYPE_1__ tree_ext_t ;
struct TYPE_9__ {int* A; int N; int last_A; int root; } ;
typedef TYPE_2__ listree_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,char*,TYPE_1__*,int,int*,int,int,int ,int,int) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,scalar_t__,int) ;
 TYPE_1__* FUNC_6 (int ,int) ;

void FUNC_7 (listree_t *VAR_4, int VAR_5) {
  int VAR_6, VAR_7;
  tree_ext_t *VAR_8 = FUNC_6 (VAR_4->root, VAR_5);

  if (VAR_8 == VAR_0) {
    VAR_7 = FUNC_1 (VAR_4, VAR_5);
    if (VAR_7 <= 0 || VAR_4->A[VAR_4->N - VAR_7] != VAR_5) {
      FUNC_2 (VAR_3, "listree_delete: T=%p rpos=%d U->A=%p U->N=%d U->last_A=%d U->root=%d U->A[N-rpos]=%d x=%d\n", VAR_8, VAR_7, VAR_4->A, VAR_4->N, VAR_4->last_A, VAR_4->root, VAR_7 > 0 ? VAR_4->A[VAR_4->N - VAR_7] : -1, VAR_5);
      FUNC_0 (VAR_7 > 0 && VAR_4->A[VAR_4->N - VAR_7] == VAR_5);
    }
    VAR_4->root = FUNC_5 (VAR_4->root, VAR_5, (FUNC_3 () << 2) + VAR_1, VAR_7);
  } else {
    VAR_6 = VAR_8->y & 3;
    VAR_7 = VAR_8->rpos;
    FUNC_0 (VAR_6 == VAR_2);
    VAR_4->root = FUNC_4 (VAR_4->root, VAR_5);



  }
}
