
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tl_tree_var_type {scalar_t__ var_num; } ;
struct tl_tree_var_num {scalar_t__ dif; scalar_t__ var_num; } ;
struct TYPE_4__ {int flags; } ;
struct tl_tree_type {int children_num; void* type; TYPE_1__ self; struct tl_tree** children; } ;
struct TYPE_5__ {int flags; } ;
struct tl_tree_array {int args_num; struct tl_tree** args; TYPE_2__ self; struct tl_tree* multiplicity; } ;
struct tl_tree {int flags; void* id; struct tl_tree* type; } ;
struct TYPE_6__ {int (* type ) (struct tl_tree*) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct tl_tree*) ;
 TYPE_3__* FUNC_1 (struct tl_tree*) ;
 int FUNC_2 (struct tl_tree*) ;
 int FUNC_3 (struct tl_tree*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

int FUNC_4 (struct tl_tree *VAR_7, void **VAR_8, int VAR_9, int *VAR_10) {
  if (VAR_9 <= 10) { return -1; }
  int VAR_11 = FUNC_1 (VAR_7)->type (VAR_7);
  int VAR_12 = 0;
  if (!FUNC_0 (VAR_7) && (VAR_7->flags & VAR_1)) {
    VAR_8[VAR_12 ++] = VAR_2;

    VAR_8[VAR_12 ++] = VAR_7;
    return VAR_12;
  }
  int VAR_13;
  int VAR_14;
  struct tl_tree_type *VAR_15;
  struct tl_tree_array *VAR_16;
  switch (VAR_11) {
  case 130:
    VAR_15 = (void *)VAR_7;
    for (VAR_13 = 0; VAR_13 < VAR_15->children_num; VAR_13++) {
      VAR_14 = FUNC_4 (VAR_15->children[VAR_13], VAR_8 + VAR_12, VAR_9 - VAR_12, VAR_10);
      if (VAR_14 < 0) { return -1; }
      VAR_12 += VAR_14;
    }
    if (VAR_12 + 10 >= VAR_9) { return -1; }
    VAR_8[VAR_12 ++] = VAR_4;
    VAR_8[VAR_12 ++] = (void *)(long)(VAR_15->self.flags & VAR_0);
    VAR_8[VAR_12 ++] = VAR_15->type;
    return VAR_12;
  case 131:
    VAR_8[VAR_12 ++] = VAR_2;
    VAR_8[VAR_12 ++] = VAR_7;
    return VAR_12;
  case 132:
    VAR_16 = (void *)VAR_7;
    FUNC_2 (VAR_16->multiplicity);
    VAR_14 = FUNC_4 (VAR_16->multiplicity, VAR_8 + VAR_12, VAR_9 - VAR_12, VAR_10);
    if (VAR_14 < 0) { return -1; }
    VAR_12 += VAR_14;

    for (VAR_13 = 0; VAR_13 < VAR_16->args_num; VAR_13++) {
      FUNC_2 (VAR_16->args[VAR_13]);

      VAR_14 = FUNC_4 (VAR_16->args[VAR_13]->type, VAR_8 + VAR_12, VAR_9 - VAR_12, VAR_10);
      if (VAR_14 < 0) { return -1; }
      VAR_12 += VAR_14;
    }
    if (VAR_12 + 10 + VAR_16->args_num >= VAR_9) { return -1; }

    VAR_8[VAR_12 ++] = VAR_3;
    VAR_8[VAR_12 ++] = (void *)(long)(VAR_16->self.flags & VAR_0);
    VAR_8[VAR_12 ++] = (void *)(long)VAR_16->args_num;
    for (VAR_13 = VAR_16->args_num - 1; VAR_13 >= 0; VAR_13--) {
      VAR_8[VAR_12 ++] = VAR_16->args[VAR_13]->id;
    }
    return VAR_12;
  case 128:
    VAR_8[VAR_12 ++] = VAR_6;
    VAR_8[VAR_12 ++] = (void *)(long)((struct tl_tree_var_type *)VAR_7)->var_num;

    return VAR_12;
  case 129:
    VAR_8[VAR_12 ++] = VAR_5;
    VAR_8[VAR_12 ++] = (void *)(long)((struct tl_tree_var_num *)VAR_7)->var_num;
    VAR_8[VAR_12 ++] = (void *)(long)((struct tl_tree_var_num *)VAR_7)->dif;
    return VAR_12;
  default:
    FUNC_2 (0);
    return -1;
  }
}
