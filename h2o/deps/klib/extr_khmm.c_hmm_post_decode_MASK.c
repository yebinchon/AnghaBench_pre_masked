
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; } ;
typedef TYPE_1__ hmm_par_t ;
struct TYPE_6__ {int* p; int L; double** f; double** b; double* s; int status; } ;
typedef TYPE_2__ hmm_data_t ;
typedef double FLOAT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int*) ;

void FUNC_3(const hmm_par_t *VAR_2, hmm_data_t *VAR_3)
{
 int VAR_4, VAR_5;
 FUNC_0(VAR_3->status && VAR_0);
 if (VAR_3->p) FUNC_2(VAR_3->p);
 VAR_3->p = (int*)FUNC_1(VAR_3->L + 1, sizeof(int));
 for (VAR_4 = 1; VAR_4 <= VAR_3->L; ++VAR_4) {
  FLOAT VAR_6, VAR_7, *VAR_8 = VAR_3->f[VAR_4], *VAR_9 = VAR_3->b[VAR_4], VAR_10 = VAR_3->s[VAR_4];
  int VAR_11;
  for (VAR_5 = 0, VAR_7 = -1.0, VAR_11 = -1; VAR_5 != VAR_2->n; ++VAR_5) {
   if (VAR_7 < (VAR_6 = VAR_8[VAR_5] * VAR_9[VAR_5] * VAR_10)) {
    VAR_7 = VAR_6; VAR_11 = VAR_5;
   }
  }
  FUNC_0(VAR_11 >= 0);
  VAR_3->p[VAR_4] = VAR_11;
 }
 VAR_3->status |= VAR_1;
}
