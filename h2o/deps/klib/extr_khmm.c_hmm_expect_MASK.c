
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int m; int n; int** ae; int* a0; int** e; } ;
typedef TYPE_1__ hmm_par_t ;
struct TYPE_10__ {int** A; int** E; int* A0; } ;
typedef TYPE_2__ hmm_exp_t ;
struct TYPE_11__ {int status; int L; int** f; int** b; int* s; scalar_t__* seq; } ;
typedef TYPE_3__ hmm_data_t ;
typedef int FLOAT ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__ const*) ;

hmm_exp_t *FUNC_2(const hmm_par_t *VAR_2, const hmm_data_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 hmm_exp_t *VAR_10;
 FUNC_0(VAR_3->status & VAR_0);
 VAR_10 = FUNC_1(VAR_2);

 VAR_8 = VAR_2->m; VAR_9 = VAR_2->n;
 for (VAR_4 = 0; VAR_4 != VAR_9; ++VAR_4)
  for (VAR_5 = 0; VAR_5 != VAR_9; ++VAR_5) VAR_10->A[VAR_4][VAR_5] = VAR_1;
 for (VAR_7 = 0; VAR_7 <= VAR_8; ++VAR_7)
  for (VAR_5 = 0; VAR_5 != VAR_9; ++VAR_5) VAR_10->E[VAR_7][VAR_5] = VAR_1;

 for (VAR_6 = 1; VAR_6 < VAR_3->L; ++VAR_6) {
  FLOAT *VAR_11 = VAR_3->f[VAR_6], *VAR_12 = VAR_3->b[VAR_6], *VAR_13 = VAR_3->b[VAR_6+1], VAR_14 = VAR_3->s[VAR_6];
  FLOAT *VAR_15 = VAR_10->E[(int)VAR_3->seq[VAR_6]], **VAR_16 = VAR_2->ae + (int)VAR_3->seq[VAR_6+1] * VAR_9;
  for (VAR_4 = 0; VAR_4 != VAR_9; ++VAR_4) {
   FLOAT *VAR_17 = VAR_16[VAR_4], *VAR_18 = VAR_10->A[VAR_4], VAR_19 = VAR_11[VAR_4];
   for (VAR_5 = 0; VAR_5 != VAR_9; ++VAR_5)
    VAR_18[VAR_5] += VAR_19 * VAR_17[VAR_5] * VAR_13[VAR_5];
   VAR_15[VAR_4] += VAR_19 * VAR_12[VAR_4] * VAR_14;
  }
 }

 for (VAR_5 = 0; VAR_5 != VAR_9; ++VAR_5)
  VAR_10->A0[VAR_5] += VAR_2->a0[VAR_5] * VAR_2->e[(int)VAR_3->seq[1]][VAR_5] * VAR_3->b[1][VAR_5];
 return VAR_10;
}
