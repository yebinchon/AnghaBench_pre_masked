
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_authenc_ctx {struct crypto_skcipher* enc; } ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {int dst; int src; scalar_t__ tail; } ;
struct authenc_instance_ctx {scalar_t__ reqoff; } ;
struct aead_request {unsigned int cryptlen; int iv; int assoclen; int dst; int src; } ;
struct aead_instance {int dummy; } ;


 struct aead_instance* FUNC_0 (struct crypto_aead*) ;
 struct authenc_instance_ctx* FUNC_1 (struct aead_instance*) ;
 struct authenc_request_ctx* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct aead_request*) ;
 struct crypto_authenc_ctx* FUNC_4 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_5 (struct aead_request*) ;
 int FUNC_6 (struct aead_request*) ;
 int VAR_0 ;
 int FUNC_7 (struct aead_request*,int ) ;
 int FUNC_8 (struct skcipher_request*) ;
 struct scatterlist* FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct skcipher_request*,int ,int ,struct aead_request*) ;
 int FUNC_11 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int ) ;
 int FUNC_12 (struct skcipher_request*,struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_13(struct aead_request *VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_5(VAR_1);
 struct aead_instance *VAR_3 = FUNC_0(VAR_2);
 struct crypto_authenc_ctx *VAR_4 = FUNC_4(VAR_2);
 struct authenc_instance_ctx *VAR_5 = FUNC_1(VAR_3);
 struct authenc_request_ctx *VAR_6 = FUNC_2(VAR_1);
 struct crypto_skcipher *VAR_7 = VAR_4->enc;
 unsigned int VAR_8 = VAR_1->cryptlen;
 struct skcipher_request *VAR_9 = (void *)(VAR_6->tail +
        VAR_5->reqoff);
 struct scatterlist *VAR_10, *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_9(VAR_6->src, VAR_1->src, VAR_1->assoclen);
 VAR_11 = VAR_10;

 if (VAR_1->src != VAR_1->dst) {
  VAR_12 = FUNC_6(VAR_1);
  if (VAR_12)
   return VAR_12;

  VAR_11 = FUNC_9(VAR_6->dst, VAR_1->dst, VAR_1->assoclen);
 }

 FUNC_12(VAR_9, VAR_7);
 FUNC_10(VAR_9, FUNC_3(VAR_1),
          VAR_0, VAR_1);
 FUNC_11(VAR_9, VAR_10, VAR_11, VAR_8, VAR_1->iv);

 VAR_12 = FUNC_8(VAR_9);
 if (VAR_12)
  return VAR_12;

 return FUNC_7(VAR_1, FUNC_3(VAR_1));
}
