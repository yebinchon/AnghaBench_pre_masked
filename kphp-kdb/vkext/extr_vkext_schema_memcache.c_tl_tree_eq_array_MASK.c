
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ flags; } ;
struct tl_tree_array {int args_num; TYPE_2__** args; TYPE_1__ self; } ;
struct tl_tree {int dummy; } ;
struct TYPE_6__ {scalar_t__ (* type ) (void*) ;int (* eq ) (struct tl_tree*,struct tl_tree*) ;} ;
struct TYPE_5__ {struct tl_tree* type; scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct tl_tree*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (struct tl_tree*,struct tl_tree*) ;

int FUNC_4 (struct tl_tree *VAR_1, struct tl_tree *VAR_2) {
  if (FUNC_0 (VAR_2)->type ((void *)VAR_2) != VAR_0) { return 0; }
  struct tl_tree_array *VAR_3 = (void *)VAR_1;
  struct tl_tree_array *VAR_4 = (void *)VAR_2;
  if (VAR_3->self.flags != VAR_4->self.flags) { return 0; }
  if (VAR_3->args_num != VAR_4->args_num) { return 0; }
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_3->args_num; VAR_5++) {
    if (!VAR_3->args[VAR_5]->id) {
      if (VAR_4->args[VAR_5]->id) { return 0; }
    } else {
      if (!VAR_4->args[VAR_5]->id) { return 0; }
      if (FUNC_1 (VAR_3->args[VAR_5]->id, VAR_4->args[VAR_5]->id)) { return 0; }
    }
    if (!FUNC_0 (VAR_3->args[VAR_5]->type)->eq (VAR_3->args[VAR_5]->type, VAR_4->args[VAR_5]->type)) {
      return 0;
    }
  }
  return 1;
}
