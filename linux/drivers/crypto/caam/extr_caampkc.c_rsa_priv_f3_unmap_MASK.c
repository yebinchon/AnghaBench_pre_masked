
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsa_priv_f3_pdb {int tmp2_dma; int tmp1_dma; int c_dma; int dq_dma; int dp_dma; int q_dma; int p_dma; } ;
struct TYPE_2__ {struct rsa_priv_f3_pdb priv_f3; } ;
struct rsa_edesc {TYPE_1__ pdb; } ;
struct device {int dummy; } ;
struct crypto_akcipher {int dummy; } ;
struct caam_rsa_key {size_t p_sz; size_t q_sz; } ;
struct caam_rsa_ctx {struct caam_rsa_key key; } ;
struct akcipher_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct caam_rsa_ctx* FUNC_0 (struct crypto_akcipher*) ;
 struct crypto_akcipher* FUNC_1 (struct akcipher_request*) ;
 int FUNC_2 (struct device*,int ,size_t,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2, struct rsa_edesc *VAR_3,
         struct akcipher_request *VAR_4)
{
 struct crypto_akcipher *VAR_5 = FUNC_1(VAR_4);
 struct caam_rsa_ctx *VAR_6 = FUNC_0(VAR_5);
 struct caam_rsa_key *VAR_7 = &VAR_6->key;
 struct rsa_priv_f3_pdb *VAR_8 = &VAR_3->pdb.priv_f3;
 size_t VAR_9 = VAR_7->p_sz;
 size_t VAR_10 = VAR_7->q_sz;

 FUNC_2(VAR_2, VAR_8->p_dma, VAR_9, VAR_1);
 FUNC_2(VAR_2, VAR_8->q_dma, VAR_10, VAR_1);
 FUNC_2(VAR_2, VAR_8->dp_dma, VAR_9, VAR_1);
 FUNC_2(VAR_2, VAR_8->dq_dma, VAR_10, VAR_1);
 FUNC_2(VAR_2, VAR_8->c_dma, VAR_9, VAR_1);
 FUNC_2(VAR_2, VAR_8->tmp1_dma, VAR_9, VAR_0);
 FUNC_2(VAR_2, VAR_8->tmp2_dma, VAR_10, VAR_0);
}
