
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct crypto_ccm_req_priv_ctx {struct scatterlist* src; int flags; struct scatterlist* dst; int * idata; int * odata; int * auth_tag; struct skcipher_request skreq; } ;
struct crypto_ccm_ctx {int ctr; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int cryptlen; scalar_t__ src; scalar_t__ dst; int iv; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct crypto_aead*) ;
 struct crypto_ccm_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct aead_request*,int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_4 (struct aead_request*,int *) ;
 struct crypto_ccm_req_priv_ctx* FUNC_5 (struct aead_request*) ;
 scalar_t__ FUNC_6 (int *,int *,unsigned int) ;
 int FUNC_7 (struct skcipher_request*) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int ,unsigned int,unsigned int,int ) ;
 int FUNC_10 (struct scatterlist*) ;
 int FUNC_11 (struct skcipher_request*,int ,int ,struct aead_request*) ;
 int FUNC_12 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int *) ;
 int FUNC_13 (struct skcipher_request*,int ) ;

__attribute__((used)) static int FUNC_14(struct aead_request *VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_2(VAR_2);
 struct crypto_ccm_ctx *VAR_4 = FUNC_1(VAR_3);
 struct crypto_ccm_req_priv_ctx *VAR_5 = FUNC_5(VAR_2);
 struct skcipher_request *VAR_6 = &VAR_5->skreq;
 struct scatterlist *VAR_7;
 unsigned int VAR_8 = FUNC_0(VAR_3);
 unsigned int VAR_9 = VAR_2->cryptlen;
 u8 *VAR_10 = VAR_5->auth_tag;
 u8 *VAR_11 = VAR_5->odata;
 u8 *VAR_12 = VAR_5->idata;
 int VAR_13;

 VAR_9 -= VAR_8;

 VAR_13 = FUNC_4(VAR_2, VAR_10);
 if (VAR_13)
  return VAR_13;

 FUNC_9(VAR_10, FUNC_10(VAR_5->src), VAR_9,
     VAR_8, 0);

 VAR_7 = VAR_5->src;
 if (VAR_2->src != VAR_2->dst)
  VAR_7 = VAR_5->dst;

 FUNC_8(VAR_12, VAR_2->iv, 16);

 FUNC_13(VAR_6, VAR_4->ctr);
 FUNC_11(VAR_6, VAR_5->flags,
          VAR_1, VAR_2);
 FUNC_12(VAR_6, VAR_5->src, VAR_7, VAR_9 + 16, VAR_12);
 VAR_13 = FUNC_7(VAR_6);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_2, FUNC_10(VAR_7), VAR_9);
 if (VAR_13)
  return VAR_13;


 if (FUNC_6(VAR_10, VAR_11, VAR_8))
  return -VAR_0;

 return VAR_13;
}
