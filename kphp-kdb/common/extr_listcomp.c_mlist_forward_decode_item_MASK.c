
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlist_decoder_stack_entry {int right_value; int left_idx; int right_idx; scalar_t__ right_subtree_offset; int middle_value; int multiplicity; int left_value; } ;
struct mlist_decoder {int p; int k; int K; int br; struct mlist_decoder_stack_entry* stack; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct mlist_decoder*,struct mlist_decoder_stack_entry*) ;
 int FUNC_3 (struct mlist_decoder*,int*) ;
 int FUNC_4 (struct mlist_decoder*,struct mlist_decoder_stack_entry*,int,int*) ;

int FUNC_5 (struct mlist_decoder *VAR_0, long long VAR_1, long long (*VAR_2) (int), int *VAR_3) {
  struct mlist_decoder_stack_entry *VAR_4 = VAR_0->stack;

  int VAR_5 = VAR_0->p;
  VAR_4 += VAR_0->p;
  while (VAR_2 (VAR_4->right_value) <= VAR_1) {
    VAR_4--;
    VAR_5--;
  }

  if (VAR_5 < VAR_0->p) {
    int VAR_6 = (VAR_4->left_idx + VAR_4->right_idx) >> 1;
    if (VAR_4->right_subtree_offset < 0) {
      while (VAR_0->k < VAR_6) {
        FUNC_3 (VAR_0, VAR_3);
      }
    } else {
      FUNC_1 (&VAR_0->br, VAR_4->right_subtree_offset);
      VAR_0->k = VAR_6;
    }
    VAR_0->p = VAR_5;
  }

  for ( ; ; VAR_0->p++, VAR_4++) {
    int VAR_7 = (VAR_4->left_idx + VAR_4->right_idx) >> 1;
    if (VAR_2 (VAR_4->middle_value) == VAR_1) {
      if (VAR_4->right_subtree_offset < 0) {
        while (VAR_0->k < VAR_7) {
          FUNC_3 (VAR_0, VAR_3);
        }
      } else {
        FUNC_1 (&VAR_0->br, VAR_4->right_subtree_offset);
        VAR_0->k = VAR_7;
      }
      *VAR_3 = VAR_4->multiplicity;
      return VAR_4->middle_value;
    }
    const int VAR_8 = VAR_4->right_idx - VAR_4->left_idx;
    FUNC_0 (VAR_8 >= 2);
    if (VAR_8 == 2) {
      FUNC_0 (VAR_2 (VAR_4->right_value) >= VAR_1);
      if (VAR_2 (VAR_4->middle_value) < VAR_1) {
        if (VAR_4->right_idx == VAR_0->K + 1) {
          return -1;
        }
        FUNC_4 (VAR_0, VAR_4, VAR_4->right_idx, VAR_3);
        return VAR_4->right_value;
      }
      if (VAR_2 (VAR_4->left_value) < VAR_1) {
        VAR_0->k = VAR_7;
        *VAR_3 = VAR_4->multiplicity;
        return VAR_4->middle_value;
      }

      FUNC_4 (VAR_0, VAR_4, VAR_4->left_idx, VAR_3);
      return VAR_4->left_value;
    }
    struct mlist_decoder_stack_entry *VAR_9 = VAR_4 + 1;
    if (VAR_2 (VAR_4->middle_value) > VAR_1) {

      if (VAR_4->left_idx == VAR_7 - 1) {
        VAR_0->k = VAR_7;
        *VAR_3 = VAR_4->multiplicity;
        return VAR_4->middle_value;
      }
      VAR_9->left_idx = VAR_4->left_idx;
      VAR_9->left_value = VAR_4->left_value;
      VAR_9->right_idx = VAR_7;
      VAR_9->right_value = VAR_4->middle_value;
      FUNC_2 (VAR_0, VAR_9);
    } else {
      if (VAR_4->right_subtree_offset < 0) {
        while (VAR_0->k < VAR_7) {
          FUNC_3 (VAR_0, VAR_3);
        }
      } else {
        FUNC_1 (&VAR_0->br, VAR_4->right_subtree_offset);
        VAR_0->k = VAR_7;
      }
      VAR_9->left_idx = VAR_7;
      VAR_9->left_value = VAR_4->middle_value;
      VAR_9->right_idx = VAR_4->right_idx;
      VAR_9->right_value = VAR_4->right_value;
      FUNC_2 (VAR_0, VAR_9);
    }
  }
  FUNC_0 (0);
  return -1;
}
