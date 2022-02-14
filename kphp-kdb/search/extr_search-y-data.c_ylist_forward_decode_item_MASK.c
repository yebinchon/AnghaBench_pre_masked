
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ylist_decoder_stack_entry {int right_value; int left_idx; int right_idx; scalar_t__ right_subtree_offset; int middle_value; int left_value; } ;
struct ylist_decoder {int p; int k; int K; int br; struct ylist_decoder_stack_entry* stack; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;
 long long FUNC_2 (int) ;
 int FUNC_3 (struct ylist_decoder*,struct ylist_decoder_stack_entry*) ;
 int FUNC_4 (struct ylist_decoder*) ;
 int FUNC_5 (struct ylist_decoder*,struct ylist_decoder_stack_entry*) ;
 int FUNC_6 (struct ylist_decoder*,struct ylist_decoder_stack_entry*,int) ;

int FUNC_7 (struct ylist_decoder *VAR_0, long long VAR_1) {
  struct ylist_decoder_stack_entry *VAR_2 = VAR_0->stack;

  int VAR_3 = VAR_0->p;
  VAR_2 += VAR_0->p;
  while (FUNC_2 (VAR_2->right_value) <= VAR_1) {
    VAR_2--;
    VAR_3--;
  }

  if (VAR_3 < VAR_0->p) {
    int VAR_4 = (VAR_2->left_idx + VAR_2->right_idx) >> 1;
    if (VAR_2->right_subtree_offset < 0) {
      while (VAR_0->k < VAR_4) {
        FUNC_4 (VAR_0);
      }
    } else {
      FUNC_1 (&VAR_0->br, VAR_2->right_subtree_offset);
      VAR_0->k = VAR_4;
    }
    VAR_0->p = VAR_3;
  }

  for ( ; ; VAR_0->p++, VAR_2++) {
    int VAR_5 = (VAR_2->left_idx + VAR_2->right_idx) >> 1;
    if (FUNC_2 (VAR_2->middle_value) == VAR_1) {
      if (VAR_2->right_subtree_offset < 0) {
        while (VAR_0->k < VAR_5) {
          FUNC_4 (VAR_0);
        }
      } else {
        FUNC_1 (&VAR_0->br, VAR_2->right_subtree_offset);
        VAR_0->k = VAR_5;
      }
      FUNC_3 (VAR_0, VAR_2);
      return VAR_2->middle_value;
    }
    const int VAR_6 = VAR_2->right_idx - VAR_2->left_idx;
    FUNC_0 (VAR_6 >= 2);
    if (VAR_6 == 2) {
      FUNC_0 (FUNC_2 (VAR_2->right_value) >= VAR_1);
      if (FUNC_2 (VAR_2->middle_value) < VAR_1) {
        if (VAR_2->right_idx == VAR_0->K + 1) {
          return -1;
        }
        FUNC_6 (VAR_0, VAR_2, VAR_2->right_idx);
        return VAR_2->right_value;
      }
      if (FUNC_2 (VAR_2->left_value) < VAR_1) {
        VAR_0->k = VAR_5;
        FUNC_3 (VAR_0, VAR_2);
        return VAR_2->middle_value;
      }

      FUNC_6 (VAR_0, VAR_2, VAR_2->left_idx);
      return VAR_2->left_value;
    }
    struct ylist_decoder_stack_entry *VAR_7 = VAR_2 + 1;
    if (FUNC_2 (VAR_2->middle_value) > VAR_1) {

      if (VAR_2->left_idx == VAR_5 - 1) {
        VAR_0->k = VAR_5;
        FUNC_3 (VAR_0, VAR_2);
        return VAR_2->middle_value;
      }
      VAR_7->left_idx = VAR_2->left_idx;
      VAR_7->left_value = VAR_2->left_value;
      VAR_7->right_idx = VAR_5;
      VAR_7->right_value = VAR_2->middle_value;
      FUNC_5 (VAR_0, VAR_7);
    } else {
      if (VAR_2->right_subtree_offset < 0) {
        while (VAR_0->k < VAR_5) {
          FUNC_4 (VAR_0);
        }
      } else {
        FUNC_1 (&VAR_0->br, VAR_2->right_subtree_offset);
        VAR_0->k = VAR_5;
      }
      VAR_7->left_idx = VAR_5;
      VAR_7->left_value = VAR_2->middle_value;
      VAR_7->right_idx = VAR_2->right_idx;
      VAR_7->right_value = VAR_2->right_value;
      FUNC_5 (VAR_0, VAR_7);
    }
  }
  FUNC_0 (0);
  return -1;
}
