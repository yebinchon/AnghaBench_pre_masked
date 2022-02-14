
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_var_value_t ;
struct tl_combinator_tree {scalar_t__ act; scalar_t__ type; scalar_t__ type_len; scalar_t__ type_flags; void* data; struct tl_combinator_tree* right; struct tl_combinator_tree* left; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct tl_combinator_tree* FUNC_1 (int **,void*) ;
 scalar_t__ FUNC_2 (int **,void*) ;
 int FUNC_3 (int **,void*,struct tl_combinator_tree*) ;
 int FUNC_4 (int **,void*,struct tl_combinator_tree*,long long) ;
 int FUNC_5 (struct tl_combinator_tree*,void*,int **) ;
 int FUNC_6 (struct tl_combinator_tree*,void*,long long,int **) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int,char*) ;

int FUNC_8 (struct tl_combinator_tree *VAR_4, struct tl_combinator_tree *VAR_5, tree_var_value_t **VAR_6) {
  if (!VAR_4 || !VAR_5) {
    FUNC_0 (!VAR_4 && !VAR_5);
    return 1;
  }
  if (VAR_5->act == VAR_0) {
    struct tl_combinator_tree *VAR_7 = VAR_5; VAR_5 = VAR_4; VAR_4 = VAR_7;
  }

  if (VAR_4->type == VAR_3) {
    if (VAR_5->type != VAR_3 || VAR_4->type_len != VAR_5->type_len || VAR_4->type_flags != VAR_5->type_flags) {
      FUNC_7 (3, "Type mistmatch. Error\n");
      return 0;
    }
    if (VAR_5->data == (void *)-1l || VAR_4->data == (void *)-1l) { return 1;}
    if (VAR_4->act == VAR_0) {
      int VAR_8 = FUNC_5 (VAR_5, VAR_4->data, VAR_6);
      if (VAR_8 > 0) {

        FUNC_7 (3, "Circular reference. Error\n");
        return 0;
      }
      if (VAR_8 == 0) {
        return 1;
      }
      struct tl_combinator_tree *VAR_9 = FUNC_1 (VAR_6, VAR_4->data);
      if (!VAR_9) {
        FUNC_3 (VAR_6, VAR_4->data, VAR_5);
        return 1;
      } else {
        return FUNC_8 (VAR_9, VAR_5, VAR_6);
      }
    } else {
      if (VAR_4->act != VAR_5->act || VAR_4->data != VAR_5->data) {
        FUNC_7 (3, "Type mistmatch. Error\n");
        return 0;
      }
      return FUNC_8 (VAR_4->left, VAR_5->left, VAR_6) && FUNC_8 (VAR_4->right, VAR_5->right, VAR_6);
    }
  } else {
    FUNC_0 (VAR_4->type == VAR_1 || VAR_4->type == VAR_2);
    if (VAR_5->type != VAR_1 && VAR_5->type != VAR_2) {
      FUNC_7 (3, "Type mistmatch. Error\n");
      return 0;
    }
    FUNC_0 (VAR_5->type == VAR_1 || VAR_5->type == VAR_2);
    if (VAR_5->data == (void *)-1l || VAR_4->data == (void *)-1l) { return 1;}
    long long VAR_10 = 0;
    struct tl_combinator_tree *VAR_11 = VAR_4;
    while (1) {
      VAR_10 += VAR_11->type_flags;
      if (VAR_11->type == VAR_2) {
        break;
      }
      if (!FUNC_1 (VAR_6, VAR_11->data)) {
        int VAR_12 = FUNC_6 (VAR_5, VAR_11->data, VAR_11->type_flags, VAR_6);
        if (VAR_12 > 0) {
          FUNC_7 (3, "Circular reference. Error\n");
          return 0;
        }
        if (VAR_12 == 0) {
          return 1;
        }


        break;
      }
      VAR_10 += FUNC_2 (VAR_6, VAR_11->data);
      VAR_11 = FUNC_1 (VAR_6, VAR_11->data);
    }
    long long VAR_13 = 0;
    struct tl_combinator_tree *VAR_14 = VAR_5;
    while (1) {
      VAR_13 += VAR_14->type_flags;
      if (VAR_14->type == VAR_2) {
        break;
      }
      if (!FUNC_1 (VAR_6, VAR_14->data)) {
        int VAR_15 = FUNC_6 (VAR_4, VAR_14->data, VAR_14->type_flags, VAR_6);
        if (VAR_15 > 0) {
          FUNC_7 (3, "Circular reference. Error\n");
          return 0;
        }
        if (VAR_15 == 0) {
          return 1;
        }


        break;
      }
      VAR_13 += FUNC_2 (VAR_6, VAR_14->data);
      VAR_14 = FUNC_1 (VAR_6, VAR_14->data);
    }
    if (VAR_11->type == VAR_2 && VAR_14->type == VAR_2) {
      return VAR_10 == VAR_13;
    }
    if (VAR_14->type == VAR_2) {
      FUNC_4 (VAR_6, VAR_11->data, VAR_14, -(VAR_10 - VAR_13 + VAR_14->type_flags));
      return 1;
    } else if (VAR_11->type == VAR_2) {
      FUNC_4 (VAR_6, VAR_14->data, VAR_11, -(VAR_13 - VAR_10 + VAR_11->type_flags));
      return 1;
    } else {
      if (VAR_10 >= VAR_13) {
        FUNC_4 (VAR_6, VAR_11->data, VAR_14, -(VAR_10 - VAR_13 + VAR_14->type_flags));
      } else {
        FUNC_4 (VAR_6, VAR_14->data, VAR_11, -(VAR_13 - VAR_10 + VAR_11->type_flags));
      }
      return 1;
    }
  }
  return 0;
}
