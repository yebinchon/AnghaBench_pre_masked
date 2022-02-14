
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec4_sg_entry {int dummy; } ;
struct rsa_priv_f3_pdb {size_t p_q_len; void* p_dma; void* q_dma; void* dp_dma; void* dq_dma; void* c_dma; void* tmp1_dma; int sgf; void* f_dma; void* g_dma; void* tmp2_dma; } ;
struct TYPE_2__ {struct rsa_priv_f3_pdb priv_f3; } ;
struct rsa_edesc {int src_nents; int dst_nents; void* sec4_sg_dma; TYPE_1__ pdb; } ;
struct device {int dummy; } ;
struct crypto_akcipher {int dummy; } ;
struct caam_rsa_req_ctx {int fixup_src; } ;
struct caam_rsa_key {size_t p_sz; size_t q_sz; int n_sz; int tmp2; int tmp1; int qinv; int dq; int dp; int q; int p; } ;
struct caam_rsa_ctx {struct device* dev; struct caam_rsa_key key; } ;
struct akcipher_request {int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct caam_rsa_req_ctx* FUNC_0 (struct akcipher_request*) ;
 struct caam_rsa_ctx* FUNC_1 (struct crypto_akcipher*) ;
 struct crypto_akcipher* FUNC_2 (struct akcipher_request*) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,int ,size_t,int ) ;
 scalar_t__ FUNC_5 (struct device*,void*) ;
 int FUNC_6 (struct device*,void*,size_t,int ) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct akcipher_request *VAR_6,
          struct rsa_edesc *VAR_7)
{
 struct crypto_akcipher *VAR_8 = FUNC_2(VAR_6);
 struct caam_rsa_ctx *VAR_9 = FUNC_1(VAR_8);
 struct caam_rsa_key *VAR_10 = &VAR_9->key;
 struct device *VAR_11 = VAR_9->dev;
 struct rsa_priv_f3_pdb *VAR_12 = &VAR_7->pdb.priv_f3;
 int VAR_13 = 0;
 size_t VAR_14 = VAR_10->p_sz;
 size_t VAR_15 = VAR_10->q_sz;

 VAR_12->p_dma = FUNC_4(VAR_11, VAR_10->p, VAR_14, VAR_1);
 if (FUNC_5(VAR_11, VAR_12->p_dma)) {
  FUNC_3(VAR_11, "Unable to map RSA prime factor p memory\n");
  return -VAR_2;
 }

 VAR_12->q_dma = FUNC_4(VAR_11, VAR_10->q, VAR_15, VAR_1);
 if (FUNC_5(VAR_11, VAR_12->q_dma)) {
  FUNC_3(VAR_11, "Unable to map RSA prime factor q memory\n");
  goto unmap_p;
 }

 VAR_12->dp_dma = FUNC_4(VAR_11, VAR_10->dp, VAR_14, VAR_1);
 if (FUNC_5(VAR_11, VAR_12->dp_dma)) {
  FUNC_3(VAR_11, "Unable to map RSA exponent dp memory\n");
  goto unmap_q;
 }

 VAR_12->dq_dma = FUNC_4(VAR_11, VAR_10->dq, VAR_15, VAR_1);
 if (FUNC_5(VAR_11, VAR_12->dq_dma)) {
  FUNC_3(VAR_11, "Unable to map RSA exponent dq memory\n");
  goto unmap_dp;
 }

 VAR_12->c_dma = FUNC_4(VAR_11, VAR_10->qinv, VAR_14, VAR_1);
 if (FUNC_5(VAR_11, VAR_12->c_dma)) {
  FUNC_3(VAR_11, "Unable to map RSA CRT coefficient qinv memory\n");
  goto unmap_dq;
 }

 VAR_12->tmp1_dma = FUNC_4(VAR_11, VAR_10->tmp1, VAR_14, VAR_0);
 if (FUNC_5(VAR_11, VAR_12->tmp1_dma)) {
  FUNC_3(VAR_11, "Unable to map RSA tmp1 memory\n");
  goto unmap_qinv;
 }

 VAR_12->tmp2_dma = FUNC_4(VAR_11, VAR_10->tmp2, VAR_15, VAR_0);
 if (FUNC_5(VAR_11, VAR_12->tmp2_dma)) {
  FUNC_3(VAR_11, "Unable to map RSA tmp2 memory\n");
  goto unmap_tmp1;
 }

 if (VAR_7->src_nents > 1) {
  VAR_12->sgf |= VAR_5;
  VAR_12->g_dma = VAR_7->sec4_sg_dma;
  VAR_13 += VAR_7->src_nents;
 } else {
  struct caam_rsa_req_ctx *VAR_16 = FUNC_0(VAR_6);

  VAR_12->g_dma = FUNC_7(VAR_16->fixup_src);
 }

 if (VAR_7->dst_nents > 1) {
  VAR_12->sgf |= VAR_4;
  VAR_12->f_dma = VAR_7->sec4_sg_dma +
        VAR_13 * sizeof(struct sec4_sg_entry);
 } else {
  VAR_12->f_dma = FUNC_7(VAR_6->dst);
 }

 VAR_12->sgf |= VAR_10->n_sz;
 VAR_12->p_q_len = (VAR_15 << VAR_3) | VAR_14;

 return 0;

unmap_tmp1:
 FUNC_6(VAR_11, VAR_12->tmp1_dma, VAR_14, VAR_0);
unmap_qinv:
 FUNC_6(VAR_11, VAR_12->c_dma, VAR_14, VAR_1);
unmap_dq:
 FUNC_6(VAR_11, VAR_12->dq_dma, VAR_15, VAR_1);
unmap_dp:
 FUNC_6(VAR_11, VAR_12->dp_dma, VAR_14, VAR_1);
unmap_q:
 FUNC_6(VAR_11, VAR_12->q_dma, VAR_15, VAR_1);
unmap_p:
 FUNC_6(VAR_11, VAR_12->p_dma, VAR_14, VAR_1);

 return -VAR_2;
}
