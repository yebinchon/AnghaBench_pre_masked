
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* right; int x; struct TYPE_9__* left; } ;
typedef TYPE_1__ tree_ext_small_t ;
typedef int object_id_t ;
struct TYPE_10__ {int N; } ;
typedef TYPE_2__ listree_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int,int,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7 (tree_ext_small_t *VAR_4, listree_t *VAR_5, int VAR_6, int VAR_7, object_id_t VAR_8) {
  if (VAR_4 == VAR_1) {
    FUNC_4 (VAR_5, VAR_6, VAR_7, VAR_8);
    return;
  }

  int VAR_9 = VAR_5->N;
  int VAR_10 = VAR_9 - FUNC_0(VAR_4);
  int VAR_11 = VAR_10 - 1;
  int VAR_12 = VAR_10 + (FUNC_1(VAR_4) != VAR_3);

  FUNC_3 (VAR_12 <= VAR_7 + 1);

  if (FUNC_5 (FUNC_2 (VAR_0, 0), VAR_4->x)) {
    FUNC_7 (VAR_4->left, VAR_5, VAR_6, VAR_11, VAR_4->x);
  }

  if (FUNC_1(VAR_4) != VAR_2) {
    FUNC_6 (VAR_4->x);
  }

  if (FUNC_5 (FUNC_2 (VAR_0, 0), VAR_8)) {
    FUNC_7 (VAR_4->right, VAR_5, VAR_12, VAR_7, VAR_8);
  }
}
