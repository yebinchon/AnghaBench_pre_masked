
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct caam_rsa_key {int n; int e; int tmp2; int tmp1; int qinv; int dq; int dp; int q; int p; int d; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct caam_rsa_key*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct caam_rsa_key *VAR_0)
{
 FUNC_1(VAR_0->d);
 FUNC_1(VAR_0->p);
 FUNC_1(VAR_0->q);
 FUNC_1(VAR_0->dp);
 FUNC_1(VAR_0->dq);
 FUNC_1(VAR_0->qinv);
 FUNC_1(VAR_0->tmp1);
 FUNC_1(VAR_0->tmp2);
 FUNC_0(VAR_0->e);
 FUNC_0(VAR_0->n);
 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
}
