
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int var_ltree_x_t ;
struct TYPE_5__ {int x; } ;
typedef TYPE_1__ tree_ext_small_t ;
struct tree_payload {int flags; int global_id; } ;
struct TYPE_6__ {int list_id; } ;


 struct tree_payload* FUNC_0 (TYPE_1__*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4 (tree_ext_small_t *VAR_6) {
  struct tree_payload *VAR_7 = FUNC_0 (VAR_6);
  if (!((VAR_7->flags ^ VAR_3) & VAR_1)) {
    FUNC_2 (VAR_6->x, VAR_7->global_id, VAR_7->flags);
    static var_ltree_x_t VAR_8;
    FUNC_1 (VAR_0->list_id, VAR_6->x, &VAR_8);
    VAR_4 = FUNC_3 (VAR_4, VAR_8);
    VAR_5--;
    VAR_2++;
    return 0;
  } else {
    return 1;
  }
}
