
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_decoder {int size; int tp; int N; int K; int M; int * decode_int; scalar_t__ k; scalar_t__ data; scalar_t__ p; int br; } ;
struct interpolative_ext_decoder_stack_entry {int left_value; int right_idx; int right_value; scalar_t__ left_idx; } ;
typedef enum list_coding_type { ____Placeholder_list_coding_type } list_coding_type ;


 int FUNC_0 (int *,unsigned char const*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct list_decoder*,struct interpolative_ext_decoder_stack_entry*) ;
 int VAR_1 ;
 struct list_decoder* FUNC_3 (int) ;
 struct list_decoder* FUNC_4 (int,int,unsigned char const*,int,int) ;

struct list_decoder *FUNC_5 (int VAR_2, int VAR_3, const unsigned char *VAR_4, enum list_coding_type VAR_5, int VAR_6, int VAR_7) {
  if (VAR_5 != VAR_1) {
    return FUNC_4 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  }
  int VAR_8 = sizeof (struct list_decoder);
  VAR_8 += sizeof (struct interpolative_ext_decoder_stack_entry) * (FUNC_1 (VAR_3+1) + 1);
  struct list_decoder *VAR_9 = FUNC_3 (VAR_8);
  VAR_9->size = VAR_8;
  VAR_9->tp = VAR_5;
  FUNC_0 (&VAR_9->br, VAR_4, VAR_6);
  VAR_9->N = VAR_2;
  VAR_9->K = VAR_3;
  VAR_9->p = 0;
  VAR_9->M = VAR_7;
  struct interpolative_ext_decoder_stack_entry *VAR_10 = (struct interpolative_ext_decoder_stack_entry *) VAR_9->data;
  VAR_10->left_idx = 0;
  VAR_10->left_value = -1;
  VAR_10->right_idx = VAR_9->K + 1;
  VAR_10->right_value = VAR_9->N;
  FUNC_2 (VAR_9, VAR_10);
  VAR_9->k = 0;
  VAR_9->decode_int = &VAR_0;
  return VAR_9;
}
