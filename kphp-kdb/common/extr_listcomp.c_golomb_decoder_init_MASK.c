
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_decoder {int M; int p; int k; int last; int * decode_int; int K; int N; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2 (struct list_decoder *VAR_2) {
  const int VAR_3 = FUNC_1 (VAR_2->N, VAR_2->K);
  VAR_2->M = VAR_3;
  VAR_2->p = (1 << (VAR_2->k = FUNC_0 (VAR_3) + 1)) - VAR_3;
  VAR_2->last = -1;
  VAR_2->decode_int = VAR_2->k > 1 ? &VAR_0 : &VAR_1;
}
