
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_authenc_esn_ctx {struct crypto_skcipher* enc; scalar_t__ reqoff; } ;
struct crypto_aead {int dummy; } ;
struct authenc_esn_request_ctx {int dst; int src; scalar_t__ tail; } ;
struct aead_request {unsigned int assoclen; unsigned int cryptlen; int iv; int dst; int src; } ;


 struct authenc_esn_request_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*) ;
 struct crypto_authenc_esn_ctx* FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct aead_request*,unsigned int) ;
 int VAR_0 ;
 int FUNC_5 (struct aead_request*,int ) ;
 int FUNC_6 (struct skcipher_request*) ;
 struct scatterlist* FUNC_7 (int ,int ,unsigned int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct skcipher_request*,int ,int ,struct aead_request*) ;
 int FUNC_10 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int ) ;
 int FUNC_11 (struct skcipher_request*,struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_12(struct aead_request *VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_3(VAR_1);
 struct authenc_esn_request_ctx *VAR_3 = FUNC_0(VAR_1);
 struct crypto_authenc_esn_ctx *VAR_4 = FUNC_2(VAR_2);
 struct skcipher_request *VAR_5 = (void *)(VAR_3->tail +
        VAR_4->reqoff);
 struct crypto_skcipher *VAR_6 = VAR_4->enc;
 unsigned int VAR_7 = VAR_1->assoclen;
 unsigned int VAR_8 = VAR_1->cryptlen;
 struct scatterlist *VAR_9, *VAR_10;
 int VAR_11;

 FUNC_8(VAR_3->src, 2);
 VAR_9 = FUNC_7(VAR_3->src, VAR_1->src, VAR_7);
 VAR_10 = VAR_9;

 if (VAR_1->src != VAR_1->dst) {
  VAR_11 = FUNC_4(VAR_1, VAR_7);
  if (VAR_11)
   return VAR_11;

  FUNC_8(VAR_3->dst, 2);
  VAR_10 = FUNC_7(VAR_3->dst, VAR_1->dst, VAR_7);
 }

 FUNC_11(VAR_5, VAR_6);
 FUNC_9(VAR_5, FUNC_1(VAR_1),
          VAR_0, VAR_1);
 FUNC_10(VAR_5, VAR_9, VAR_10, VAR_8, VAR_1->iv);

 VAR_11 = FUNC_6(VAR_5);
 if (VAR_11)
  return VAR_11;

 return FUNC_5(VAR_1, FUNC_1(VAR_1));
}
