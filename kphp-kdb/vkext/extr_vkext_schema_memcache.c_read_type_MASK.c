
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ref_cnt; int flags; int * methods; } ;
struct tl_tree_type {int children_num; TYPE_1__ self; TYPE_3__** children; TYPE_2__* type; } ;
typedef void tl_tree ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int arity; int params_types; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_3 ;
 TYPE_3__* FUNC_3 (int*) ;
 TYPE_3__* FUNC_4 (int*) ;
 TYPE_3__* FUNC_5 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 () ;
 void* FUNC_7 () ;
 int VAR_6 ;
 TYPE_2__* FUNC_8 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_9 (int) ;

struct tl_tree *FUNC_10 (int *VAR_10) {
  struct tl_tree_type *VAR_11 = FUNC_9 (sizeof (*VAR_11));
  FUNC_0 (sizeof (*VAR_11));
  VAR_11->self.ref_cnt = 1;
  VAR_7 ++;
  VAR_3 ++;
  VAR_8 ++;
  VAR_11->self.methods = &VAR_6;

  VAR_11->type = FUNC_8 (FUNC_7 ());
  if (!VAR_11->type) {
    return 0;
  }
  VAR_11->self.flags = FUNC_7 ();
  VAR_11->children_num = FUNC_7 ();
  if (VAR_9 >= 2) {
    FUNC_2 (VAR_5, "T->flags = %d, T->chilren_num = %d\n", VAR_11->self.flags, VAR_11->children_num);
  }
  if (FUNC_6 () || VAR_11->type->arity != VAR_11->children_num) {
    return 0;
  }
  if (VAR_11->children_num < 0 || VAR_11->children_num > 1000) {
    return 0;
  }
  VAR_11->children = FUNC_9 (sizeof (void *) * VAR_11->children_num);
  FUNC_0 (sizeof (void *) * VAR_11->children_num);
  int VAR_12;
  VAR_11->self.flags |= VAR_0;
  for (VAR_12 = 0; VAR_12 < VAR_11->children_num; VAR_12++) {
    if (VAR_4 >= 2) {
      int VAR_13 = FUNC_7 ();
      if (FUNC_6 ()) {
        return 0;
      }
      if (VAR_13 == VAR_1) {
        if (!(VAR_11->type->params_types & (1 << VAR_12))) {
          return 0;
        }
        VAR_11->children[VAR_12] = FUNC_3 (VAR_10);
      } else if (VAR_13 == VAR_2) {
        if ((VAR_11->type->params_types & (1 << VAR_12))) {
          return 0;
        }
        VAR_11->children[VAR_12] = FUNC_5 (VAR_10);
      } else {
        return 0;
      }
    } else {
      VAR_11->children[VAR_12] = FUNC_4 (VAR_10);
    }
    if (!VAR_11->children[VAR_12]) {
      return 0;
    }
    if (!FUNC_1 (VAR_11->children[VAR_12]) && !(VAR_11->children[VAR_12]->flags & VAR_0)) {
      VAR_11->self.flags &= ~VAR_0;
    }
  }
  return (void *)VAR_11;
}
