
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree_ext_large_t ;
typedef int object_id_t ;
struct TYPE_7__ {scalar_t__ data; scalar_t__ tot_entries; } ;
typedef TYPE_1__ metafile_t ;
struct TYPE_8__ {int * A; scalar_t__ N; int ** root; } ;
typedef TYPE_2__ listree_direct_t ;
struct TYPE_9__ {int metafile_index; int * o_tree; } ;
typedef TYPE_3__ list_t ;
typedef int list_id_t ;
typedef int array_object_id_t ;


 int * VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int) ;
 int * FUNC_4 (TYPE_2__*,int ,int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int ,int) ;

int FUNC_6 (list_id_t VAR_2, object_id_t VAR_3) {
  if (VAR_1 && FUNC_5 (VAR_2, -1) < 0) {
    FUNC_1 (0);
    return 0;
  }
  list_t *VAR_4 = FUNC_0 (VAR_2, -1);
  int VAR_5 = -1;

  listree_direct_t VAR_6;
  tree_ext_large_t *VAR_7;

  if (!VAR_4) {
    VAR_5 = FUNC_2 (VAR_2);
    if (VAR_5 < 0) {
      return 0;
    }
    VAR_7 = VAR_0;
    VAR_6.root = &VAR_7;
  } else {
    VAR_5 = VAR_4->metafile_index;
    VAR_6.root = &VAR_4->o_tree;
  }

  if (VAR_5 >= 0) {
    metafile_t *VAR_8 = FUNC_3 (VAR_5);
    VAR_6.N = VAR_8->tot_entries;
    VAR_6.A = (array_object_id_t *) VAR_8->data;
  } else {
    VAR_6.N = 0;
    VAR_6.A = 0;
  }

  int VAR_9;
  tree_ext_large_t *VAR_10 = FUNC_4 (&VAR_6, VAR_3, &VAR_9);

  return VAR_10 ? 1 : 0;
}
