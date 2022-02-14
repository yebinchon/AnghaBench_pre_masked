
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlist_decoder_stack_entry {int left_idx; int right_idx; int multiplicity; } ;
struct mlist_decoder {int k; scalar_t__ p; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (struct mlist_decoder *VAR_0, struct mlist_decoder_stack_entry *VAR_1, int VAR_2, int *VAR_3) {
  VAR_0->k = VAR_2;
  for (;;) {
    VAR_1--;
    (VAR_0->p)--;
    FUNC_0 (VAR_0->p >= 0);
    int VAR_4 = (VAR_1->left_idx + VAR_1->right_idx) >> 1;
    if (VAR_4 == VAR_2) {
      *VAR_3 = VAR_1->multiplicity;
      return;
    }
  }
}
