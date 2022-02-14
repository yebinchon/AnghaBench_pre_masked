
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_encoder {int k; int p; int M; int last; int * encode_int; int K; int N; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1 (struct list_encoder *VAR_1) {
  int VAR_2 = FUNC_0 (VAR_1->N, VAR_1->K);
  VAR_1->k = 31;
  VAR_1->p = 1;
  while (VAR_1->p <= VAR_2) {
    VAR_1->p *= 2;
    VAR_1->k--;
  }
  VAR_1->p -= VAR_2;
  VAR_1->M = VAR_2;
  VAR_1->last = -1;
  VAR_1->encode_int = &VAR_0;
}
