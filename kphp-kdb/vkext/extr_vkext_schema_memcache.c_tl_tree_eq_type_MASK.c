
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct tl_tree_type {scalar_t__ type; int children_num; struct tl_tree** children; TYPE_1__ self; } ;
struct tl_tree {int dummy; } ;
struct TYPE_4__ {scalar_t__ (* type ) (void*) ;int (* eq ) (struct tl_tree*,struct tl_tree*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct tl_tree*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct tl_tree*,struct tl_tree*) ;

int FUNC_3 (struct tl_tree *VAR_2, struct tl_tree *VAR_3) {
  if (FUNC_0 (VAR_3)->type ((void *)VAR_3) != VAR_1) { return 0; }
  struct tl_tree_type *VAR_4 = (void *)VAR_2;
  struct tl_tree_type *VAR_5 = (void *)VAR_3;
  if ((VAR_4->self.flags & VAR_0) != (VAR_5->self.flags & VAR_0)) { return 0; }
  if (VAR_4->type != VAR_5->type) { return 0; }
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_4->children_num; VAR_6++) {
    if (!FUNC_0 (VAR_4->children[VAR_6])->eq (VAR_4->children[VAR_6], VAR_5->children[VAR_6])) {
      return 0;
    }
  }
  return 1;
}
