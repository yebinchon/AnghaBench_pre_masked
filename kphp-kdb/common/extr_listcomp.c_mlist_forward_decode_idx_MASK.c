
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlist_decoder_stack_entry {int right_value; int left_idx; int right_idx; scalar_t__ right_subtree_offset; int middle_value; int multiplicity; int left_value; } ;
struct mlist_decoder {int N; int p; int k; int K; int br; struct mlist_decoder_stack_entry* stack; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct mlist_decoder*,struct mlist_decoder_stack_entry*) ;
 int FUNC_3 (struct mlist_decoder*,int*) ;
 int FUNC_4 (struct mlist_decoder*,struct mlist_decoder_stack_entry*,int,int*) ;

int FUNC_5 (struct mlist_decoder *VAR_0, int VAR_1, int *VAR_2) {
  if (VAR_1 >= VAR_0->N) {
    *VAR_2 = 0;
    return 0x7fffffff;
  }
  struct mlist_decoder_stack_entry *VAR_3 = VAR_0->stack;

  int VAR_4 = VAR_0->p;
  VAR_3 += VAR_0->p;
  while (VAR_3->right_value <= VAR_1) {
    VAR_3--;
    VAR_4--;
  }

  if (VAR_4 < VAR_0->p) {
    int VAR_5 = (VAR_3->left_idx + VAR_3->right_idx) >> 1;
    if (VAR_3->right_subtree_offset < 0) {
      while (VAR_0->k < VAR_5) {
        FUNC_3 (VAR_0, VAR_2);
      }
    } else {
      FUNC_1 (&VAR_0->br, VAR_3->right_subtree_offset);
      VAR_0->k = VAR_5;
    }
    VAR_0->p = VAR_4;
  }

  for ( ; ; VAR_0->p++, VAR_3++) {
    int VAR_6 = (VAR_3->left_idx + VAR_3->right_idx) >> 1;
    if (VAR_3->middle_value == VAR_1) {
      if (VAR_3->right_subtree_offset < 0) {
        while (VAR_0->k < VAR_6) {
          FUNC_3 (VAR_0, VAR_2);
        }
      } else {
        FUNC_1 (&VAR_0->br, VAR_3->right_subtree_offset);
        VAR_0->k = VAR_6;
      }
      *VAR_2 = VAR_3->multiplicity;
      return VAR_3->middle_value;
    }
    const int VAR_7 = VAR_3->right_idx - VAR_3->left_idx;
    FUNC_0 (VAR_7 >= 2);
    if (VAR_7 == 2) {
      FUNC_0 (VAR_3->right_value >= VAR_1);
      if (VAR_3->middle_value < VAR_1) {
        if (VAR_3->right_idx == VAR_0->K + 1) {
          *VAR_2 = 0;
          return 0x7fffffff;
        }
        FUNC_4 (VAR_0, VAR_3, VAR_3->right_idx, VAR_2);
        return VAR_3->right_value;
      }
      if (VAR_3->left_value < VAR_1) {
        VAR_0->k = VAR_6;
        *VAR_2 = VAR_3->multiplicity;
        return VAR_3->middle_value;
      }
      FUNC_0 (VAR_3->left_value >= VAR_1);
      FUNC_4 (VAR_0, VAR_3, VAR_3->left_idx, VAR_2);
      return VAR_3->left_value;
    }
    struct mlist_decoder_stack_entry *VAR_8 = VAR_3 + 1;
    if (VAR_3->middle_value > VAR_1) {

      if (VAR_3->left_idx == VAR_6 - 1) {
        VAR_0->k = VAR_6;
        *VAR_2 = VAR_3->multiplicity;
        return VAR_3->middle_value;
      }
      VAR_8->left_idx = VAR_3->left_idx;
      VAR_8->left_value = VAR_3->left_value;
      VAR_8->right_idx = VAR_6;
      VAR_8->right_value = VAR_3->middle_value;
      FUNC_2 (VAR_0, VAR_8);
    } else {
      if (VAR_3->right_subtree_offset < 0) {
        while (VAR_0->k < VAR_6) {
          FUNC_3 (VAR_0, VAR_2);
        }
      } else {
        FUNC_1 (&VAR_0->br, VAR_3->right_subtree_offset);
        VAR_0->k = VAR_6;
      }
      VAR_8->left_idx = VAR_6;
      VAR_8->left_value = VAR_3->middle_value;
      VAR_8->right_idx = VAR_3->right_idx;
      VAR_8->right_value = VAR_3->right_value;
      FUNC_2 (VAR_0, VAR_8);
    }
  }
  FUNC_0 (0);
  return -1;
}
