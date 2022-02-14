
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_encoder {int* L; int K; int N; int k; int * encode_int; } ;


 int* FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1 (struct list_encoder *VAR_1) {
  VAR_1->L = FUNC_0 ( (VAR_1->K + 2) * sizeof (VAR_1->L[0]));
  VAR_1->L[0] = -1;
  VAR_1->L[VAR_1->K+1] = VAR_1->N;
  VAR_1->k = 1;
  VAR_1->encode_int = &VAR_0;
}
