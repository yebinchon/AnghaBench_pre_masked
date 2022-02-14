
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_decoder {int p; int k; int K; int br; int (* decode_int ) (struct list_decoder*) ;scalar_t__ data; } ;
struct interpolative_ext_decoder_stack_entry {size_t right_value; int left_idx; int right_idx; scalar_t__ right_subtree_offset; size_t middle_value; size_t left_value; } ;
struct TYPE_2__ {long long item_id; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct list_decoder*,struct interpolative_ext_decoder_stack_entry*) ;
 int FUNC_3 (struct list_decoder*) ;
 int FUNC_4 (struct list_decoder*) ;
 int FUNC_5 (struct list_decoder*) ;

__attribute__((used)) static int FUNC_6 (struct list_decoder *VAR_1, long long VAR_2) {
  struct interpolative_ext_decoder_stack_entry *VAR_3 = (struct interpolative_ext_decoder_stack_entry *) VAR_1->data;

  int VAR_4 = VAR_1->p;
  VAR_3 += VAR_1->p;
  while (VAR_0[VAR_3->right_value].item_id <= VAR_2) {
    VAR_3--;
    VAR_4--;
  }

  if (VAR_4 < VAR_1->p) {
    int VAR_5 = (VAR_3->left_idx + VAR_3->right_idx) >> 1;
    if (VAR_3->right_subtree_offset < 0) {
      while (VAR_1->k < VAR_5) {
        VAR_1->decode_int (VAR_1);
      }
    } else {
      FUNC_1 (&VAR_1->br, VAR_3->right_subtree_offset);
      VAR_1->k = VAR_5;
    }
    VAR_1->p = VAR_4;
  }

  for ( ; ; VAR_1->p++, VAR_3++) {
    int VAR_6 = (VAR_3->left_idx + VAR_3->right_idx) >> 1;
    if (VAR_0[VAR_3->middle_value].item_id == VAR_2) {
      if (VAR_3->right_subtree_offset < 0) {
        while (VAR_1->k < VAR_6) {
          VAR_1->decode_int (VAR_1);
        }
      } else {
        FUNC_1 (&VAR_1->br, VAR_3->right_subtree_offset);
        VAR_1->k = VAR_6;
      }
      return VAR_3->middle_value;
    }
    const int VAR_7 = VAR_3->right_idx - VAR_3->left_idx;
    FUNC_0 (VAR_7 >= 2);
    if (VAR_7 == 2) {
      FUNC_0 (VAR_0[VAR_3->right_value].item_id >= VAR_2);
      if (VAR_0[VAR_3->middle_value].item_id < VAR_2) {
        if (VAR_3->right_idx == VAR_1->K + 1) {
          return -1;
        }
        VAR_1->k = VAR_3->right_idx;
        return VAR_3->right_value;
      }
      if (VAR_0[VAR_3->left_value].item_id < VAR_2) {
        VAR_1->k = VAR_6;
        return VAR_3->middle_value;
      }

      VAR_1->k = VAR_3->left_idx;
      return VAR_3->left_value;
    }
    struct interpolative_ext_decoder_stack_entry *VAR_8 = VAR_3 + 1;
    if (VAR_0[VAR_3->middle_value].item_id > VAR_2) {

      if (VAR_3->left_idx == VAR_6 - 1) {
        VAR_1->k = VAR_6;
        return VAR_3->middle_value;
      }
      VAR_8->left_idx = VAR_3->left_idx;
      VAR_8->left_value = VAR_3->left_value;
      VAR_8->right_idx = VAR_6;
      VAR_8->right_value = VAR_3->middle_value;
      FUNC_2 (VAR_1, VAR_8);
    } else {
      if (VAR_3->right_subtree_offset < 0) {
        while (VAR_1->k < VAR_6) {
          VAR_1->decode_int (VAR_1);
        }
      } else {
        FUNC_1 (&VAR_1->br, VAR_3->right_subtree_offset);
        VAR_1->k = VAR_6;
      }
      VAR_8->left_idx = VAR_6;
      VAR_8->left_value = VAR_3->middle_value;
      VAR_8->right_idx = VAR_3->right_idx;
      VAR_8->right_value = VAR_3->right_value;
      FUNC_2 (VAR_1, VAR_8);
    }
  }
  FUNC_0 (0);
  return -1;
}
