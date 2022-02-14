
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec4_sg_entry {int dummy; } ;
struct rsa_priv_f2_pdb {int sgf; size_t p_q_len; void* d_dma; void* p_dma; void* q_dma; void* tmp1_dma; void* f_dma; void* g_dma; void* tmp2_dma; } ;
struct TYPE_2__ {struct rsa_priv_f2_pdb priv_f2; } ;
struct rsa_edesc {int src_nents; int dst_nents; void* sec4_sg_dma; TYPE_1__ pdb; } ;
struct device {int dummy; } ;
struct crypto_akcipher {int dummy; } ;
struct caam_rsa_req_ctx {int fixup_src; } ;
struct caam_rsa_key {size_t p_sz; size_t q_sz; size_t d_sz; int n_sz; int tmp2; int tmp1; int q; int p; int d; } ;
struct caam_rsa_ctx {struct device* dev; struct caam_rsa_key key; } ;
struct akcipher_request {int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct caam_rsa_req_ctx* FUNC_0 (struct akcipher_request*) ;
 struct caam_rsa_ctx* FUNC_1 (struct crypto_akcipher*) ;
 struct crypto_akcipher* FUNC_2 (struct akcipher_request*) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,int ,size_t,int ) ;
 scalar_t__ FUNC_5 (struct device*,void*) ;
 int FUNC_6 (struct device*,void*,size_t,int ) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct akcipher_request *VAR_7,
          struct rsa_edesc *VAR_8)
{
 struct crypto_akcipher *VAR_9 = FUNC_2(VAR_7);
 struct caam_rsa_ctx *VAR_10 = FUNC_1(VAR_9);
 struct caam_rsa_key *VAR_11 = &VAR_10->key;
 struct device *VAR_12 = VAR_10->dev;
 struct rsa_priv_f2_pdb *VAR_13 = &VAR_8->pdb.priv_f2;
 int VAR_14 = 0;
 size_t VAR_15 = VAR_11->p_sz;
 size_t VAR_16 = VAR_11->q_sz;

 VAR_13->d_dma = FUNC_4(VAR_12, VAR_11->d, VAR_11->d_sz, VAR_1);
 if (FUNC_5(VAR_12, VAR_13->d_dma)) {
  FUNC_3(VAR_12, "Unable to map RSA private exponent memory\n");
  return -VAR_2;
 }

 VAR_13->p_dma = FUNC_4(VAR_12, VAR_11->p, VAR_15, VAR_1);
 if (FUNC_5(VAR_12, VAR_13->p_dma)) {
  FUNC_3(VAR_12, "Unable to map RSA prime factor p memory\n");
  goto unmap_d;
 }

 VAR_13->q_dma = FUNC_4(VAR_12, VAR_11->q, VAR_16, VAR_1);
 if (FUNC_5(VAR_12, VAR_13->q_dma)) {
  FUNC_3(VAR_12, "Unable to map RSA prime factor q memory\n");
  goto unmap_p;
 }

 VAR_13->tmp1_dma = FUNC_4(VAR_12, VAR_11->tmp1, VAR_15, VAR_0);
 if (FUNC_5(VAR_12, VAR_13->tmp1_dma)) {
  FUNC_3(VAR_12, "Unable to map RSA tmp1 memory\n");
  goto unmap_q;
 }

 VAR_13->tmp2_dma = FUNC_4(VAR_12, VAR_11->tmp2, VAR_16, VAR_0);
 if (FUNC_5(VAR_12, VAR_13->tmp2_dma)) {
  FUNC_3(VAR_12, "Unable to map RSA tmp2 memory\n");
  goto unmap_tmp1;
 }

 if (VAR_8->src_nents > 1) {
  VAR_13->sgf |= VAR_6;
  VAR_13->g_dma = VAR_8->sec4_sg_dma;
  VAR_14 += VAR_8->src_nents;
 } else {
  struct caam_rsa_req_ctx *VAR_17 = FUNC_0(VAR_7);

  VAR_13->g_dma = FUNC_7(VAR_17->fixup_src);
 }

 if (VAR_8->dst_nents > 1) {
  VAR_13->sgf |= VAR_5;
  VAR_13->f_dma = VAR_8->sec4_sg_dma +
        VAR_14 * sizeof(struct sec4_sg_entry);
 } else {
  VAR_13->f_dma = FUNC_7(VAR_7->dst);
 }

 VAR_13->sgf |= (VAR_11->d_sz << VAR_3) | VAR_11->n_sz;
 VAR_13->p_q_len = (VAR_16 << VAR_4) | VAR_15;

 return 0;

unmap_tmp1:
 FUNC_6(VAR_12, VAR_13->tmp1_dma, VAR_15, VAR_0);
unmap_q:
 FUNC_6(VAR_12, VAR_13->q_dma, VAR_16, VAR_1);
unmap_p:
 FUNC_6(VAR_12, VAR_13->p_dma, VAR_15, VAR_1);
unmap_d:
 FUNC_6(VAR_12, VAR_13->d_dma, VAR_11->d_sz, VAR_1);

 return -VAR_2;
}
