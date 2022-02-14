
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsa_key {size_t p_sz; size_t q_sz; int qinv_sz; int qinv; int dq_sz; int dq; int dp_sz; int dp; int q; int p; } ;
struct caam_rsa_key {size_t p_sz; size_t q_sz; void* p; void* q; void* tmp1; void* tmp2; void* dp; void* dq; int priv_form; void* qinv; } ;
struct caam_rsa_ctx {struct caam_rsa_key key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,size_t*) ;
 void* FUNC_1 (int ,int ,size_t) ;
 void* FUNC_2 (size_t,int) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(struct caam_rsa_ctx *VAR_4,
           struct rsa_key *VAR_5)
{
 struct caam_rsa_key *VAR_6 = &VAR_4->key;
 size_t VAR_7 = VAR_5->p_sz;
 size_t VAR_8 = VAR_5->q_sz;

 VAR_6->p = FUNC_0(VAR_5->p, &VAR_7);
 if (!VAR_6->p)
  return;
 VAR_6->p_sz = VAR_7;

 VAR_6->q = FUNC_0(VAR_5->q, &VAR_8);
 if (!VAR_6->q)
  goto free_p;
 VAR_6->q_sz = VAR_8;

 VAR_6->tmp1 = FUNC_2(VAR_5->p_sz, VAR_2 | VAR_3);
 if (!VAR_6->tmp1)
  goto free_q;

 VAR_6->tmp2 = FUNC_2(VAR_5->q_sz, VAR_2 | VAR_3);
 if (!VAR_6->tmp2)
  goto free_tmp1;

 VAR_6->priv_form = VAR_0;

 VAR_6->dp = FUNC_1(VAR_5->dp, VAR_5->dp_sz, VAR_7);
 if (!VAR_6->dp)
  goto free_tmp2;

 VAR_6->dq = FUNC_1(VAR_5->dq, VAR_5->dq_sz, VAR_8);
 if (!VAR_6->dq)
  goto free_dp;

 VAR_6->qinv = FUNC_1(VAR_5->qinv, VAR_5->qinv_sz,
       VAR_8);
 if (!VAR_6->qinv)
  goto free_dq;

 VAR_6->priv_form = VAR_1;

 return;

free_dq:
 FUNC_3(VAR_6->dq);
free_dp:
 FUNC_3(VAR_6->dp);
free_tmp2:
 FUNC_3(VAR_6->tmp2);
free_tmp1:
 FUNC_3(VAR_6->tmp1);
free_q:
 FUNC_3(VAR_6->q);
free_p:
 FUNC_3(VAR_6->p);
}
