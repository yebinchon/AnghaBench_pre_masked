
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec4_sg_entry {int dummy; } ;
struct rsa_pub_pdb {int sgf; int f_len; void* g_dma; void* f_dma; void* n_dma; void* e_dma; } ;
struct TYPE_2__ {struct rsa_pub_pdb pub; } ;
struct rsa_edesc {int src_nents; int dst_nents; void* sec4_sg_dma; TYPE_1__ pdb; } ;
struct device {int dummy; } ;
struct crypto_akcipher {int dummy; } ;
struct caam_rsa_req_ctx {int fixup_src_len; int fixup_src; } ;
struct caam_rsa_key {int n_sz; int e_sz; int e; int n; } ;
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
 struct caam_rsa_req_ctx *VAR_8 = FUNC_0(VAR_5);
 struct caam_rsa_ctx *VAR_9 = FUNC_1(VAR_7);
 struct caam_rsa_key *VAR_10 = &VAR_9->key;
 struct device *VAR_11 = VAR_9->dev;
 struct rsa_pub_pdb *VAR_12 = &VAR_6->pdb.pub;
 int VAR_13 = 0;

 VAR_12->n_dma = FUNC_4(VAR_11, VAR_10->n, VAR_10->n_sz, VAR_0);
 if (FUNC_5(VAR_11, VAR_12->n_dma)) {
  FUNC_3(VAR_11, "Unable to map RSA modulus memory\n");
  return -VAR_1;
 }

 VAR_12->e_dma = FUNC_4(VAR_11, VAR_10->e, VAR_10->e_sz, VAR_0);
 if (FUNC_5(VAR_11, VAR_12->e_dma)) {
  FUNC_3(VAR_11, "Unable to map RSA public exponent memory\n");
  FUNC_6(VAR_11, VAR_12->n_dma, VAR_10->n_sz, VAR_0);
  return -VAR_1;
 }

 if (VAR_6->src_nents > 1) {
  VAR_12->sgf |= VAR_3;
  VAR_12->f_dma = VAR_6->sec4_sg_dma;
  VAR_13 += VAR_6->src_nents;
 } else {
  VAR_12->f_dma = FUNC_7(VAR_8->fixup_src);
 }

 if (VAR_6->dst_nents > 1) {
  VAR_12->sgf |= VAR_4;
  VAR_12->g_dma = VAR_6->sec4_sg_dma +
        VAR_13 * sizeof(struct sec4_sg_entry);
 } else {
  VAR_12->g_dma = FUNC_7(VAR_5->dst);
 }

 VAR_12->sgf |= (VAR_10->e_sz << VAR_2) | VAR_10->n_sz;
 VAR_12->f_len = VAR_8->fixup_src_len;

 return 0;
}
