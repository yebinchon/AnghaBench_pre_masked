
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ylist_decoder_stack_entry {int left_value; int right_idx; int right_value; scalar_t__ left_idx; scalar_t__ num; } ;
struct ylist_decoder {int size; int capacity; int N; int K; int left_subtree_size_threshold; scalar_t__ k; struct ylist_decoder_stack_entry* stack; scalar_t__ p; void* positions; TYPE_1__* H; int br; } ;
struct TYPE_3__ {void* positions1; } ;
typedef TYPE_1__ iheap_en_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned char const*,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct ylist_decoder*,struct ylist_decoder_stack_entry*) ;
 void* FUNC_4 (int) ;

struct ylist_decoder *FUNC_5 (iheap_en_t *VAR_1, int VAR_2, int VAR_3, const unsigned char *VAR_4, int VAR_5, int VAR_6) {
  FUNC_0 (VAR_3 >= 0);
  const int VAR_7 = FUNC_2 (VAR_3 + 1);
  int VAR_8 = sizeof (struct ylist_decoder) + sizeof (struct ylist_decoder_stack_entry) * (VAR_7 + 1);
  struct ylist_decoder *VAR_9 = FUNC_4 (VAR_8);

  VAR_9->H = VAR_1;
  VAR_9->size = VAR_8;
  FUNC_1 (&VAR_9->br, VAR_4, VAR_5);

  VAR_9->capacity = VAR_0;
  VAR_9->H->positions1 = VAR_9->positions = FUNC_4 (4 * VAR_9->capacity);

  VAR_9->N = VAR_2;
  VAR_9->K = VAR_3;
  VAR_9->p = 0;
  VAR_9->left_subtree_size_threshold = VAR_6;

  struct ylist_decoder_stack_entry *VAR_10 = VAR_9->stack;
  int VAR_11;
  for (VAR_11 = 0; VAR_11 <= VAR_7; VAR_11++) {
    VAR_10[VAR_11].num = 0;
  }
  VAR_10->left_idx = 0;
  VAR_10->left_value = -1;
  VAR_10->right_idx = VAR_9->K + 1;
  VAR_10->right_value = VAR_9->N;
  FUNC_3 (VAR_9, VAR_10);
  VAR_9->k = 0;

  return VAR_9;
}
