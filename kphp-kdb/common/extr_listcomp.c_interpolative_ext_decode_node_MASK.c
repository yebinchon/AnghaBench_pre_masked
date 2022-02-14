
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int m; } ;
struct list_decoder {scalar_t__ M; struct bitreader br; } ;
struct interpolative_ext_decoder_stack_entry {int left_idx; int right_idx; int right_value; int left_value; int middle_value; int right_subtree_offset; } ;


 int FUNC_0 (struct bitreader*) ;
 scalar_t__ FUNC_1 (struct bitreader*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;

void FUNC_3 (struct list_decoder *VAR_1, struct interpolative_ext_decoder_stack_entry *VAR_2) {
  int VAR_3 = (VAR_2->left_idx + VAR_2->right_idx) >> 1;
  const int VAR_4 = VAR_2->right_value - (VAR_2->right_idx - VAR_3);
  int VAR_5 = VAR_2->left_value + (VAR_3 - VAR_2->left_idx), VAR_6 = VAR_4 - VAR_5;
  if (VAR_6) {
    VAR_6++;
    struct bitreader *VAR_7 = &VAR_1->br;
    int VAR_8 = VAR_7->m;
    int VAR_9 = 1;
    while (VAR_9 < VAR_6) {
      VAR_9 <<= 1;
      if (VAR_0) {
        VAR_9++;
      }
      FUNC_2();
    }
    VAR_7->m = VAR_8;
    VAR_9 -= VAR_6;
    if (VAR_9 & 1) {
      VAR_5 += (VAR_6 >> 1) - (VAR_9 >> 1) - 1;
    } else {
      VAR_5 += (VAR_6 >> 1) + (VAR_9 >> 1);
    }
  }
  VAR_2->middle_value = VAR_5;
  if (VAR_2->right_idx - VAR_2->left_idx >= VAR_1->M) {
    VAR_2->right_subtree_offset = FUNC_0 (&VAR_1->br) - 1;
    VAR_2->right_subtree_offset += FUNC_1 (&VAR_1->br);
  } else {
    VAR_2->right_subtree_offset = -1;
  }
}
