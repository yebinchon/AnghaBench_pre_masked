
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct crypto_ccm_req_priv_ctx {struct scatterlist* src; int flags; struct scatterlist* dst; int * odata; struct skcipher_request skreq; } ;
struct crypto_ccm_ctx {int ctr; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int cryptlen; scalar_t__ src; scalar_t__ dst; int * iv; } ;


 int FUNC_0 (struct crypto_aead*) ;
 struct crypto_ccm_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct aead_request*,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_4 (struct aead_request*,int *) ;
 struct crypto_ccm_req_priv_ctx* FUNC_5 (struct aead_request*) ;
 int FUNC_6 (struct skcipher_request*) ;
 int FUNC_7 (int *,int ,unsigned int,int ,int) ;
 int FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct skcipher_request*,int ,int ,struct aead_request*) ;
 int FUNC_10 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int *) ;
 int FUNC_11 (struct skcipher_request*,int ) ;

__attribute__((used)) static int FUNC_12(struct aead_request *VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_2(VAR_1);
 struct crypto_ccm_ctx *VAR_3 = FUNC_1(VAR_2);
 struct crypto_ccm_req_priv_ctx *VAR_4 = FUNC_5(VAR_1);
 struct skcipher_request *VAR_5 = &VAR_4->skreq;
 struct scatterlist *VAR_6;
 unsigned int VAR_7 = VAR_1->cryptlen;
 u8 *VAR_8 = VAR_4->odata;
 u8 *VAR_9 = VAR_1->iv;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_1, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_1, FUNC_8(VAR_4->src), VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_6 = VAR_4->src;
 if (VAR_1->src != VAR_1->dst)
  VAR_6 = VAR_4->dst;

 FUNC_11(VAR_5, VAR_3->ctr);
 FUNC_9(VAR_5, VAR_4->flags,
          VAR_0, VAR_1);
 FUNC_10(VAR_5, VAR_4->src, VAR_6, VAR_7 + 16, VAR_9);
 VAR_10 = FUNC_6(VAR_5);
 if (VAR_10)
  return VAR_10;


 FUNC_7(VAR_8, FUNC_8(VAR_6), VAR_7,
     FUNC_0(VAR_2), 1);
 return VAR_10;
}
