
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m; int n; double* a0; double** a; double** e; double** ae; } ;
typedef TYPE_1__ hmm_par_t ;
typedef double FLOAT ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int,int) ;

hmm_par_t *FUNC_3(int VAR_0, int VAR_1)
{
 hmm_par_t *VAR_2;
 int VAR_3;
 FUNC_0(VAR_0 > 0 && VAR_1 > 0);
 VAR_2 = (hmm_par_t*)FUNC_1(1, sizeof(hmm_par_t));
 VAR_2->m = VAR_0; VAR_2->n = VAR_1;
 VAR_2->a0 = (FLOAT*)FUNC_1(VAR_1, sizeof(FLOAT));
 VAR_2->a = (FLOAT**)FUNC_2(VAR_1, VAR_1, sizeof(FLOAT));
 VAR_2->e = (FLOAT**)FUNC_2(VAR_0 + 1, VAR_1, sizeof(FLOAT));
 VAR_2->ae = (FLOAT**)FUNC_2((VAR_0 + 1) * VAR_1, VAR_1, sizeof(FLOAT));
 for (VAR_3 = 0; VAR_3 != VAR_1; ++VAR_3) VAR_2->e[VAR_0][VAR_3] = 1.0;
 return VAR_2;
}
