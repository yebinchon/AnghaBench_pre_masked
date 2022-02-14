
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int y; int x; } ;
typedef TYPE_1__ tree_ext_global_t ;
typedef int object_id_t ;
struct TYPE_19__ {scalar_t__ N; TYPE_1__** root; } ;
typedef TYPE_2__ listree_global_t ;
typedef scalar_t__ global_id_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 (scalar_t__,int ,int ,int ) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_9 (TYPE_1__*,int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_11 (listree_global_t *VAR_4, global_id_t VAR_5, object_id_t VAR_6) {
  tree_ext_global_t **VAR_7 = VAR_4->root;
  int VAR_8;
  tree_ext_global_t *VAR_9 = FUNC_10 (*VAR_7, VAR_5);

  if (VAR_9 == VAR_1) {
    VAR_8 = FUNC_3 (VAR_4, VAR_5);
    FUNC_2 (VAR_8 > 0 && FUNC_5 (VAR_4, VAR_4->N - VAR_8) == VAR_5);
    tree_ext_global_t *VAR_10 = FUNC_7 (VAR_5, FUNC_6 (), FUNC_0 (VAR_8, VAR_2), VAR_6);
    *VAR_7 = FUNC_9 (*VAR_7, VAR_10->x, VAR_10->y, VAR_10);
  } else {
    FUNC_2 (FUNC_1(VAR_9) == VAR_3);
    VAR_0 = 0;
    *VAR_7 = FUNC_8 (*VAR_7, VAR_5);
    FUNC_2 (VAR_0 == VAR_9);
    FUNC_4 (VAR_9);
  }
}
