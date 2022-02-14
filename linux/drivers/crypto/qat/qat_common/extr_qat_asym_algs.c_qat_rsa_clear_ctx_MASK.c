
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qat_rsa_ctx {int key_sz; int crt_mode; int * qinv; int * dq; int * dp; int * q; int * p; int * d; int * e; int * n; int dma_qinv; int dma_dq; int dma_dp; int dma_q; int dma_p; int dma_d; int dma_e; int dma_n; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,unsigned int,int *,int ) ;
 int FUNC_1 (int *,char,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, struct qat_rsa_ctx *VAR_1)
{
 unsigned int VAR_2 = VAR_1->key_sz / 2;


 if (VAR_1->n)
  FUNC_0(VAR_0, VAR_1->key_sz, VAR_1->n, VAR_1->dma_n);
 if (VAR_1->e)
  FUNC_0(VAR_0, VAR_1->key_sz, VAR_1->e, VAR_1->dma_e);
 if (VAR_1->d) {
  FUNC_1(VAR_1->d, '\0', VAR_1->key_sz);
  FUNC_0(VAR_0, VAR_1->key_sz, VAR_1->d, VAR_1->dma_d);
 }
 if (VAR_1->p) {
  FUNC_1(VAR_1->p, '\0', VAR_2);
  FUNC_0(VAR_0, VAR_2, VAR_1->p, VAR_1->dma_p);
 }
 if (VAR_1->q) {
  FUNC_1(VAR_1->q, '\0', VAR_2);
  FUNC_0(VAR_0, VAR_2, VAR_1->q, VAR_1->dma_q);
 }
 if (VAR_1->dp) {
  FUNC_1(VAR_1->dp, '\0', VAR_2);
  FUNC_0(VAR_0, VAR_2, VAR_1->dp, VAR_1->dma_dp);
 }
 if (VAR_1->dq) {
  FUNC_1(VAR_1->dq, '\0', VAR_2);
  FUNC_0(VAR_0, VAR_2, VAR_1->dq, VAR_1->dma_dq);
 }
 if (VAR_1->qinv) {
  FUNC_1(VAR_1->qinv, '\0', VAR_2);
  FUNC_0(VAR_0, VAR_2, VAR_1->qinv, VAR_1->dma_qinv);
 }

 VAR_1->n = ((void*)0);
 VAR_1->e = ((void*)0);
 VAR_1->d = ((void*)0);
 VAR_1->p = ((void*)0);
 VAR_1->q = ((void*)0);
 VAR_1->dp = ((void*)0);
 VAR_1->dq = ((void*)0);
 VAR_1->qinv = ((void*)0);
 VAR_1->crt_mode = 0;
 VAR_1->key_sz = 0;
}
