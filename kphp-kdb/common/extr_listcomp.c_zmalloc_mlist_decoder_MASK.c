
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlist_decoder_stack_entry {int left_value; int right_idx; int right_value; scalar_t__ left_idx; } ;
struct mlist_decoder {int size; int N; int K; int left_subtree_size_threshold; scalar_t__ k; int br; int all_ones; struct mlist_decoder_stack_entry* stack; scalar_t__ p; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char const*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mlist_decoder*,struct mlist_decoder_stack_entry*) ;
 struct mlist_decoder* FUNC_5 (int) ;

struct mlist_decoder *FUNC_6 (int VAR_0, int VAR_1, const unsigned char *VAR_2, int VAR_3, int VAR_4) {
  int VAR_5 = (VAR_1 >= 0 ? FUNC_3 (VAR_1 + 1) : FUNC_3 (VAR_0 + 1));
  int VAR_6 = sizeof (struct mlist_decoder) + sizeof (struct mlist_decoder_stack_entry) * (VAR_5 + 1);
  struct mlist_decoder *VAR_7 = FUNC_5 (VAR_6);

  VAR_7->size = VAR_6;
  FUNC_1 (&VAR_7->br, VAR_2, VAR_3);

  if (VAR_1 == -1) {
    VAR_1 = FUNC_0 (&VAR_7->br);
  }

  VAR_7->N = VAR_0;
  VAR_7->K = VAR_1;
  VAR_7->p = 0;
  VAR_7->left_subtree_size_threshold = VAR_4;

  struct mlist_decoder_stack_entry *VAR_8 = VAR_7->stack;
  VAR_8->left_idx = 0;
  VAR_8->left_value = -1;
  VAR_8->right_idx = VAR_7->K + 1;
  VAR_8->right_value = VAR_7->N;
  VAR_7->all_ones = FUNC_2 (&VAR_7->br, 1);
  FUNC_4 (VAR_7, VAR_8);
  VAR_7->k = 0;

  return VAR_7;
}
