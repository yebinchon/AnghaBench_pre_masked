
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_decoder {int N; int K; int size; int tp; int * decode_int; scalar_t__ k; int br; } ;


 int FUNC_0 (int *,unsigned char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct list_decoder*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2 (struct list_decoder *VAR_3, int VAR_4, int VAR_5, const unsigned char *VAR_6, int VAR_7) {
  FUNC_0 (&VAR_3->br, VAR_6, VAR_7);
  VAR_3->N = VAR_4;
  VAR_3->K = VAR_5;
  VAR_3->size = sizeof (struct list_decoder);
  if (VAR_5 == VAR_4) {
    VAR_3->tp = VAR_1;
    VAR_3->k = 0;
    VAR_3->decode_int = &VAR_0;
  } else {
    VAR_3->tp = VAR_2;
    FUNC_1 (VAR_3);
  }
}
