
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m; int n; int** ae; int** e; int** a; } ;
typedef TYPE_1__ hmm_par_t ;
typedef int FLOAT ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(hmm_par_t *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
 FUNC_0(VAR_0);
 VAR_1 = VAR_0->m; VAR_2 = VAR_0->n;
 for (VAR_3 = 0; VAR_3 <= VAR_1; ++VAR_3) {
  for (VAR_4 = 0; VAR_4 != VAR_2; ++VAR_4) {
   FLOAT *VAR_6 = VAR_0->ae[VAR_3 * VAR_0->n + VAR_4];
   for (VAR_5 = 0; VAR_5 != VAR_2; ++VAR_5)
    VAR_6[VAR_5] = VAR_0->e[VAR_3][VAR_5] * VAR_0->a[VAR_4][VAR_5];
  }
 }
}
