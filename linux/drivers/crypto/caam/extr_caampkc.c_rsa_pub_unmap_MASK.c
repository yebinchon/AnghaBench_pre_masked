
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsa_pub_pdb {int e_dma; int n_dma; } ;
struct TYPE_2__ {struct rsa_pub_pdb pub; } ;
struct rsa_edesc {TYPE_1__ pdb; } ;
struct device {int dummy; } ;
struct crypto_akcipher {int dummy; } ;
struct caam_rsa_key {int e_sz; int n_sz; } ;
struct caam_rsa_ctx {struct caam_rsa_key key; } ;
struct akcipher_request {int dummy; } ;


 int VAR_0 ;
 struct caam_rsa_ctx* FUNC_0 (struct crypto_akcipher*) ;
 struct crypto_akcipher* FUNC_1 (struct akcipher_request*) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1, struct rsa_edesc *VAR_2,
     struct akcipher_request *VAR_3)
{
 struct crypto_akcipher *VAR_4 = FUNC_1(VAR_3);
 struct caam_rsa_ctx *VAR_5 = FUNC_0(VAR_4);
 struct caam_rsa_key *VAR_6 = &VAR_5->key;
 struct rsa_pub_pdb *VAR_7 = &VAR_2->pdb.pub;

 FUNC_2(VAR_1, VAR_7->n_dma, VAR_6->n_sz, VAR_0);
 FUNC_2(VAR_1, VAR_7->e_dma, VAR_6->e_sz, VAR_0);
}
