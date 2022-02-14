
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct crypto_authenc_ctx {int enc; } ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {int dst; int src; scalar_t__ tail; } ;
struct authenc_instance_ctx {scalar_t__ reqoff; } ;
struct ahash_request {int * result; int nbytes; } ;
struct TYPE_2__ {int data; int complete; } ;
struct aead_request {int iv; scalar_t__ cryptlen; TYPE_1__ base; int assoclen; int dst; int src; } ;
struct aead_instance {int dummy; } ;


 int VAR_0 ;
 struct aead_instance* FUNC_0 (struct crypto_aead*) ;
 struct authenc_instance_ctx* FUNC_1 (struct aead_instance*) ;
 struct authenc_request_ctx* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct aead_request*) ;
 unsigned int FUNC_4 (struct crypto_aead*) ;
 struct crypto_authenc_ctx* FUNC_5 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_6 (struct aead_request*) ;
 scalar_t__ FUNC_7 (int *,int *,unsigned int) ;
 int FUNC_8 (struct skcipher_request*) ;
 struct scatterlist* FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *,int ,int ,unsigned int,int ) ;
 int FUNC_11 (struct skcipher_request*,int ,int ,int ) ;
 int FUNC_12 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,scalar_t__,int ) ;
 int FUNC_13 (struct skcipher_request*,int ) ;

__attribute__((used)) static int FUNC_14(struct aead_request *VAR_1,
           unsigned int VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_6(VAR_1);
 struct aead_instance *VAR_4 = FUNC_0(VAR_3);
 struct crypto_authenc_ctx *VAR_5 = FUNC_5(VAR_3);
 struct authenc_instance_ctx *VAR_6 = FUNC_1(VAR_4);
 struct authenc_request_ctx *VAR_7 = FUNC_2(VAR_1);
 struct ahash_request *VAR_8 = (void *)(VAR_7->tail + VAR_6->reqoff);
 struct skcipher_request *VAR_9 = (void *)(VAR_7->tail +
        VAR_6->reqoff);
 unsigned int VAR_10 = FUNC_4(VAR_3);
 u8 *VAR_11 = VAR_8->result + VAR_10;
 struct scatterlist *VAR_12, *VAR_13;

 FUNC_10(VAR_11, VAR_1->src, VAR_8->nbytes, VAR_10, 0);

 if (FUNC_7(VAR_11, VAR_8->result, VAR_10))
  return -VAR_0;

 VAR_12 = FUNC_9(VAR_7->src, VAR_1->src, VAR_1->assoclen);
 VAR_13 = VAR_12;

 if (VAR_1->src != VAR_1->dst)
  VAR_13 = FUNC_9(VAR_7->dst, VAR_1->dst, VAR_1->assoclen);

 FUNC_13(VAR_9, VAR_5->enc);
 FUNC_11(VAR_9, FUNC_3(VAR_1),
          VAR_1->base.complete, VAR_1->base.data);
 FUNC_12(VAR_9, VAR_12, VAR_13,
       VAR_1->cryptlen - VAR_10, VAR_1->iv);

 return FUNC_8(VAR_9);
}
