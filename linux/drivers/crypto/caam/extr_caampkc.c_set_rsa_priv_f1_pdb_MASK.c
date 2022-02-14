
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec4_sg_entry {int dummy; } ;
struct rsa_priv_f1_pdb {int sgf; void* f_dma; void* g_dma; void* n_dma; void* d_dma; } ;
struct TYPE_2__ {struct rsa_priv_f1_pdb priv_f1; } ;
struct rsa_edesc {int src_nents; int dst_nents; void* sec4_sg_dma; TYPE_1__ pdb; } ;
struct device {int dummy; } ;
struct crypto_akcipher {int dummy; } ;
struct caam_rsa_req_ctx {int fixup_src; } ;
struct caam_rsa_key {int n_sz; int d_sz; int d; int n; } ;
struct caam_rsa_ctx {struct device* dev; struct caam_rsa_key key; } ;
struct akcipher_request {int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct caam_rsa_req_ctx* FUNC_0 (struct akcipher_request*) ;
 struct caam_rsa_ctx* FUNC_1 (struct crypto_akcipher*) ;
 struct crypto_akcipher* FUNC_2 (struct akcipher_request*) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,int ,int,int ) ;
 scalar_t__ FUNC_5 (struct device*,void*) ;
 int FUNC_6 (struct device*,void*,int,int ) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct akcipher_request *VAR_5,
          struct rsa_edesc *VAR_6)
{
 struct crypto_akcipher *VAR_7 = FUNC_2(VAR_5);
 struct caam_rsa_ctx *VAR_8 = FUNC_1(VAR_7);
 struct caam_rsa_key *VAR_9 = &VAR_8->key;
 struct device *VAR_10 = VAR_8->dev;
 struct rsa_priv_f1_pdb *VAR_11 = &VAR_6->pdb.priv_f1;
 int VAR_12 = 0;

 VAR_11->n_dma = FUNC_4(VAR_10, VAR_9->n, VAR_9->n_sz, VAR_0);
 if (FUNC_5(VAR_10, VAR_11->n_dma)) {
  FUNC_3(VAR_10, "Unable to map modulus memory\n");
  return -VAR_1;
 }

 VAR_11->d_dma = FUNC_4(VAR_10, VAR_9->d, VAR_9->d_sz, VAR_0);
 if (FUNC_5(VAR_10, VAR_11->d_dma)) {
  FUNC_3(VAR_10, "Unable to map RSA private exponent memory\n");
  FUNC_6(VAR_10, VAR_11->n_dma, VAR_9->n_sz, VAR_0);
  return -VAR_1;
 }

 if (VAR_6->src_nents > 1) {
  VAR_11->sgf |= VAR_4;
  VAR_11->g_dma = VAR_6->sec4_sg_dma;
  VAR_12 += VAR_6->src_nents;
 } else {
  struct caam_rsa_req_ctx *VAR_13 = FUNC_0(VAR_5);

  VAR_11->g_dma = FUNC_7(VAR_13->fixup_src);
 }

 if (VAR_6->dst_nents > 1) {
  VAR_11->sgf |= VAR_3;
  VAR_11->f_dma = VAR_6->sec4_sg_dma +
        VAR_12 * sizeof(struct sec4_sg_entry);
 } else {
  VAR_11->f_dma = FUNC_7(VAR_5->dst);
 }

 VAR_11->sgf |= (VAR_9->d_sz << VAR_2) | VAR_9->n_sz;

 return 0;
}
