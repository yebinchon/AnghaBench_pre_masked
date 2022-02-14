
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int m; int n; } ;
typedef TYPE_1__ hmm_par_t ;
struct TYPE_7__ {int m; int n; int ** E; int ** A; int * A0; } ;
typedef TYPE_2__ hmm_exp_t ;
typedef int FLOAT ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int,int) ;

hmm_exp_t *FUNC_3(const hmm_par_t *VAR_0)
{
 hmm_exp_t *VAR_1;
 FUNC_0(VAR_0);
 VAR_1 = (hmm_exp_t*)FUNC_1(1, sizeof(hmm_exp_t));
 VAR_1->m = VAR_0->m; VAR_1->n = VAR_0->n;
 VAR_1->A0 = (FLOAT*)FUNC_1(VAR_0->n, sizeof(FLOAT));
 VAR_1->A = (FLOAT**)FUNC_2(VAR_0->n, VAR_0->n, sizeof(FLOAT));
 VAR_1->E = (FLOAT**)FUNC_2(VAR_0->m + 1, VAR_0->n, sizeof(FLOAT));
 return VAR_1;
}
