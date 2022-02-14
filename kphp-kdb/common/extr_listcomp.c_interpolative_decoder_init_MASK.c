
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_decoder {int * decode_int; scalar_t__ k; int N; scalar_t__ K; scalar_t__ data; scalar_t__ p; } ;
struct interpolative_decoder_stack_entry {int left_value; int right_value; scalar_t__ right_idx; int middle_value; scalar_t__ left_idx; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0 (struct list_decoder *VAR_2) {
  VAR_2->p = 0;
  struct interpolative_decoder_stack_entry *VAR_3 = (struct interpolative_decoder_stack_entry *) VAR_2->data;
  VAR_3->left_idx = 0;
  VAR_3->left_value = -1;
  VAR_3->middle_value = VAR_0;
  VAR_3->right_idx = VAR_2->K + 1;
  VAR_3->right_value = VAR_2->N;
  VAR_2->k = 0;
  VAR_2->decode_int = &VAR_1;
}
