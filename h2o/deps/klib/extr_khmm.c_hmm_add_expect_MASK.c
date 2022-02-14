
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m; int n; scalar_t__** E; scalar_t__** A; scalar_t__* A0; } ;
typedef TYPE_1__ hmm_exp_t ;


 int FUNC_0 (int) ;

void FUNC_1(const hmm_exp_t *VAR_0, hmm_exp_t *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 FUNC_0(VAR_0->m == VAR_1->m && VAR_0->n == VAR_1->n);
 for (VAR_3 = 0; VAR_3 != VAR_1->n; ++VAR_3) {
  VAR_1->A0[VAR_3] += VAR_0->A0[VAR_3];
  for (VAR_4 = 0; VAR_4 != VAR_1->n; ++VAR_4)
   VAR_1->A[VAR_3][VAR_4] += VAR_0->A[VAR_3][VAR_4];
 }
 for (VAR_2 = 0; VAR_2 != VAR_1->m; ++VAR_2) {
  for (VAR_4 = 0; VAR_4 != VAR_1->n; ++VAR_4)
   VAR_1->E[VAR_2][VAR_4] += VAR_0->E[VAR_2][VAR_4];
 }
}
