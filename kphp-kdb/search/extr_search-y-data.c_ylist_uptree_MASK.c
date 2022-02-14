
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ylist_decoder_stack_entry {int left_idx; int right_idx; } ;
struct ylist_decoder {int k; scalar_t__ p; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ylist_decoder*,struct ylist_decoder_stack_entry*) ;

__attribute__((used)) static void FUNC_2 (struct ylist_decoder *VAR_0, struct ylist_decoder_stack_entry *VAR_1, int VAR_2) {
  VAR_0->k = VAR_2;
  for (;;) {
    VAR_1--;
    (VAR_0->p)--;
    FUNC_0 (VAR_0->p >= 0);
    int VAR_3 = (VAR_1->left_idx + VAR_1->right_idx) >> 1;
    if (VAR_3 == VAR_2) {
      FUNC_1 (VAR_0, VAR_1);
      return;
    }
  }
}
