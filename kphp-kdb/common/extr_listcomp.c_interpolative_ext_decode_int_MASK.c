
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_decoder {int k; int K; int p; scalar_t__ data; } ;
struct interpolative_ext_decoder_stack_entry {int left_idx; int right_idx; int middle_value; int left_value; int right_value; } ;


 int FUNC_0 (struct list_decoder*,struct interpolative_ext_decoder_stack_entry*) ;

__attribute__((used)) static int FUNC_1 (struct list_decoder *VAR_0) {
  if (VAR_0->k >= VAR_0->K) {
    return 0x7fffffff;
  }
  VAR_0->k++;
  struct interpolative_ext_decoder_stack_entry *VAR_1 = (struct interpolative_ext_decoder_stack_entry *) VAR_0->data + VAR_0->p;
  for (;;) {
    int VAR_2 = (VAR_1->left_idx + VAR_1->right_idx) >> 1;
    for (;;) {
      if (VAR_0->k == VAR_2) {
        return VAR_1->middle_value;
      }
      if (VAR_0->k < VAR_1->right_idx) { break; }
      VAR_0->p--;
      VAR_1--;
      VAR_2 = (VAR_1->left_idx + VAR_1->right_idx) >> 1;
    }
    VAR_0->p++;
    struct interpolative_ext_decoder_stack_entry *VAR_3 = VAR_1 + 1;
    if (VAR_0->k < VAR_2) {
      VAR_3->left_idx = VAR_1->left_idx;
      VAR_3->left_value = VAR_1->left_value;
      VAR_3->right_idx = VAR_2;
      VAR_3->right_value = VAR_1->middle_value;
      FUNC_0 (VAR_0, VAR_3);
      VAR_1 = VAR_3;
    } else {
      VAR_3->left_idx = VAR_2;
      VAR_3->left_value = VAR_1->middle_value;
      VAR_3->right_idx = VAR_1->right_idx;
      VAR_3->right_value = VAR_1->right_value;
      FUNC_0 (VAR_0, VAR_3);
      VAR_1 = VAR_3;
    }
  }
}
