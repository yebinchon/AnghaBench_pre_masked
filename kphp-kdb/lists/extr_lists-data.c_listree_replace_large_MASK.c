
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tree_ext_small_t ;
struct TYPE_10__ {int y; int x; } ;
typedef TYPE_1__ tree_ext_large_t ;
typedef int object_id_t ;
struct TYPE_11__ {scalar_t__ N; TYPE_1__** root; } ;
typedef TYPE_2__ listree_direct_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 () ;
 TYPE_1__* FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int * FUNC_10 (int ,int ,int ,int ) ;
 int * FUNC_11 (int ,int ) ;

__attribute__((used)) static tree_ext_large_t *FUNC_12 (listree_direct_t *VAR_3, object_id_t VAR_4) {
  tree_ext_large_t **VAR_5 = VAR_3->root;
  int VAR_6;
  tree_ext_small_t *VAR_7 = FUNC_11 (FUNC_3 (*VAR_5), VAR_4);
  if (VAR_7 == VAR_0) {
    VAR_6 = FUNC_5 (VAR_3, VAR_4);
    FUNC_4 (VAR_6 > 0 && FUNC_9 (FUNC_6 (VAR_3, VAR_3->N - VAR_6), VAR_4));
    tree_ext_large_t *VAR_8 = FUNC_8 (VAR_4, FUNC_7 (), FUNC_1 (VAR_6, VAR_2));
    *VAR_5 = FUNC_0 (FUNC_10 (FUNC_3 (*VAR_5), VAR_8->x, VAR_8->y, FUNC_3 (VAR_8)));
    return VAR_8;
  } else {
    FUNC_4 (FUNC_2 (VAR_7) != VAR_1);
    return FUNC_0 (VAR_7);
  }
}
