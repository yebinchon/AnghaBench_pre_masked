
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlist_decoder_stack_entry {int left_idx; int right_idx; int multiplicity; int middle_value; int left_value; int right_value; } ;
struct mlist_decoder {int k; int K; int p; struct mlist_decoder_stack_entry* stack; } ;


 int FUNC_0 (struct mlist_decoder*,struct mlist_decoder_stack_entry*) ;

int FUNC_1 (struct mlist_decoder *VAR_0, int *VAR_1) {
  if (VAR_0->k >= VAR_0->K) {
    *VAR_1 = 0;
    return 0x7fffffff;
  }
  VAR_0->k++;
  struct mlist_decoder_stack_entry *VAR_2 = VAR_0->stack + VAR_0->p;
  for (;;) {
    int VAR_3 = (VAR_2->left_idx + VAR_2->right_idx) >> 1;
    for (;;) {
      if (VAR_0->k == VAR_3) {
        *VAR_1 = VAR_2->multiplicity;
        return VAR_2->middle_value;
      }
      if (VAR_0->k < VAR_2->right_idx) { break; }
      VAR_0->p--;
      VAR_2--;
      VAR_3 = (VAR_2->left_idx + VAR_2->right_idx) >> 1;
    }
    VAR_0->p++;
    struct mlist_decoder_stack_entry *VAR_4 = VAR_2 + 1;
    if (VAR_0->k < VAR_3) {
      VAR_4->left_idx = VAR_2->left_idx;
      VAR_4->left_value = VAR_2->left_value;
      VAR_4->right_idx = VAR_3;
      VAR_4->right_value = VAR_2->middle_value;
      FUNC_0 (VAR_0, VAR_4);
      VAR_2 = VAR_4;
    } else {
      VAR_4->left_idx = VAR_3;
      VAR_4->left_value = VAR_2->middle_value;
      VAR_4->right_idx = VAR_2->right_idx;
      VAR_4->right_value = VAR_2->right_value;
      FUNC_0 (VAR_0, VAR_4);
      VAR_2 = VAR_4;
    }
  }
}
