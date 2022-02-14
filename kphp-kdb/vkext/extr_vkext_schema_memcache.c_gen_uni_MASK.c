
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tl_tree_var_type {int var_num; } ;
struct tl_tree_var_num {int var_num; int dif; } ;
struct tl_tree_type {int children_num; struct tl_tree** children; void* type; } ;
struct tl_tree_array {int args_num; int * args; struct tl_tree* multiplicity; } ;
struct tl_tree {int dummy; } ;
struct TYPE_2__ {int (* type ) (struct tl_tree*) ;} ;







 TYPE_1__* FUNC_0 (struct tl_tree*) ;
 int FUNC_1 (struct tl_tree*) ;
 int FUNC_2 (int ,void**,int,int*) ;
 int FUNC_3 (struct tl_tree*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

int FUNC_4 (struct tl_tree *VAR_7, void **VAR_8, int VAR_9, int *VAR_10) {
  if (VAR_9 <= 10) { return -1; }
  FUNC_1 (VAR_7);
  int VAR_11 = FUNC_0 (VAR_7)->type (VAR_7);
  int VAR_12 = 0;
  int VAR_13;
  int VAR_14;
  struct tl_tree_type *VAR_15;
  struct tl_tree_array *VAR_16;
  int VAR_17;
  switch (VAR_11) {
  case 130:
    VAR_15 = (void *)VAR_7;
    VAR_8[VAR_12 ++] = VAR_3;
    VAR_8[VAR_12 ++] = ((struct tl_tree_type *)VAR_7)->type;
    for (VAR_13 = 0; VAR_13 < VAR_15->children_num; VAR_13++) {
      VAR_17 = FUNC_4 (VAR_15->children[VAR_13], VAR_8 + VAR_12, VAR_9 - VAR_12, VAR_10);
      if (VAR_17 < 0) { return -1; }
      VAR_12 += VAR_17;
    }
    return VAR_12;
  case 131:
    VAR_8[VAR_12 ++] = VAR_1;
    VAR_8[VAR_12 ++] = VAR_7;
    return VAR_12;
  case 132:
    VAR_16 = (void *)VAR_7;
    VAR_8[VAR_12 ++] = VAR_0;
    VAR_8[VAR_12 ++] = VAR_7;
    VAR_17 = FUNC_4 (VAR_16->multiplicity, VAR_8 + VAR_12, VAR_9 - VAR_12, VAR_10);
    if (VAR_17 < 0) { return -1; }
    VAR_12 += VAR_17;
    for (VAR_13 = 0; VAR_13 < VAR_16->args_num; VAR_13++) {
      VAR_17 += FUNC_2 (VAR_16->args[VAR_13], VAR_8 + VAR_12, VAR_9 - VAR_12, VAR_10);
      if (VAR_17 < 0) { return -1; }
      VAR_12 += VAR_17;
    }
    return VAR_12;
  case 128:
    VAR_13 = ((struct tl_tree_var_type *)VAR_7)->var_num;
    if (!VAR_10[VAR_13]) {
      VAR_8[VAR_12 ++] = VAR_6;
      VAR_8[VAR_12 ++] = (void *)(long)VAR_13;

      VAR_10[VAR_13] = 1;
    } else if (VAR_10[VAR_13] == 1) {
      VAR_8[VAR_12 ++] = VAR_4;
      VAR_8[VAR_12 ++] = (void *)(long)VAR_13;

    } else {
      return -1;
    }
    return VAR_12;
  case 129:
    VAR_13 = ((struct tl_tree_var_num *)VAR_7)->var_num;
    VAR_14 = ((struct tl_tree_var_num *)VAR_7)->dif;
    if (!VAR_10[VAR_13]) {
      VAR_8[VAR_12 ++] = VAR_5;
      VAR_8[VAR_12 ++] = (void *)(long)VAR_13;
      VAR_8[VAR_12 ++] = (void *)(long)VAR_14;
      VAR_10[VAR_13] = 2;
    } else if (VAR_10[VAR_13] == 2) {
      VAR_8[VAR_12 ++] = VAR_2;
      VAR_8[VAR_12 ++] = (void *)(long)VAR_13;
      VAR_8[VAR_12 ++] = (void *)(long)VAR_14;
    } else {
      return -1;
    }
    return VAR_12;
  default:
    FUNC_1 (0);
    return -1;
  }
}
