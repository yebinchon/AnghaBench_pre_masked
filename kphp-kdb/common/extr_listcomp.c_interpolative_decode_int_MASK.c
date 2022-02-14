
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int m; } ;
struct list_decoder {int k; int K; int p; struct bitreader br; scalar_t__ data; } ;
struct interpolative_decoder_stack_entry {int left_idx; int right_idx; void* middle_value; int right_value; int left_value; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1 (struct list_decoder *VAR_2) {
  VAR_2->k++;
  if (VAR_2->k > VAR_2->K) {
    return 0x7fffffff;
  }
  struct interpolative_decoder_stack_entry *VAR_3 = (struct interpolative_decoder_stack_entry *) VAR_2->data + VAR_2->p;
  for (;;) {
    int VAR_4 = (VAR_3->left_idx + VAR_3->right_idx) >> 1;
    if (VAR_3->middle_value == VAR_0) {
      const int VAR_5 = VAR_3->right_value - (VAR_3->right_idx - VAR_4);
      int VAR_6 = VAR_3->left_value + (VAR_4 - VAR_3->left_idx), VAR_7 = VAR_5 - VAR_6;
      if (VAR_7) {
        VAR_7++;
        struct bitreader *VAR_8 = &VAR_2->br;
        int VAR_9 = VAR_8->m;
        int VAR_10 = 1;
        while (VAR_10 < VAR_7) {
          VAR_10 <<= 1;
          if (VAR_1) {
            VAR_10++;
          }
          FUNC_0();
        }
        VAR_8->m = VAR_9;
        VAR_10 -= VAR_7;
        if (VAR_10 & 1) {
          VAR_6 += (VAR_7 >> 1) - (VAR_10 >> 1) - 1;
        } else {
          VAR_6 += (VAR_7 >> 1) + (VAR_10 >> 1);
        }
      }
      VAR_3->middle_value = VAR_6;
    }
    for (;;) {
      if (VAR_2->k == VAR_4) {
        return VAR_3->middle_value;
      }
      if (VAR_2->k < VAR_3->right_idx) { break; }
      VAR_2->p--;
      VAR_3--;
      VAR_4 = (VAR_3->left_idx + VAR_3->right_idx) >> 1;
    }
    VAR_2->p++;
    struct interpolative_decoder_stack_entry *VAR_11 = VAR_3 + 1;
    if (VAR_2->k < VAR_4) {
      VAR_11->left_idx = VAR_3->left_idx;
      VAR_11->left_value = VAR_3->left_value;
      VAR_11->middle_value = VAR_0;
      VAR_11->right_idx = VAR_4;
      VAR_11->right_value = VAR_3->middle_value;
      VAR_3 = VAR_11;
    } else {
      VAR_11->left_idx = VAR_4;
      VAR_11->left_value = VAR_3->middle_value;
      VAR_11->middle_value = VAR_0;
      VAR_11->right_idx = VAR_3->right_idx;
      VAR_11->right_value = VAR_3->right_value;
      VAR_3 = VAR_11;
    }
  }
}
