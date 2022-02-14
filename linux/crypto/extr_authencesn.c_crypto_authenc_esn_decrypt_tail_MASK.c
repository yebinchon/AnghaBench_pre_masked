
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct crypto_authenc_esn_ctx {int enc; struct crypto_ahash* auth; scalar_t__ reqoff; } ;
struct crypto_ahash {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct authenc_esn_request_ctx {int dst; scalar_t__ tail; } ;
struct TYPE_2__ {int data; int complete; } ;
struct aead_request {unsigned int cryptlen; unsigned int assoclen; int iv; TYPE_1__ base; struct scatterlist* dst; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,scalar_t__) ;
 struct authenc_esn_request_ctx* FUNC_1 (struct aead_request*) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 struct crypto_authenc_esn_ctx* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 scalar_t__ FUNC_5 (struct crypto_ahash*) ;
 int FUNC_6 (struct crypto_ahash*) ;
 scalar_t__ FUNC_7 (int *,int *,unsigned int) ;
 int FUNC_8 (struct skcipher_request*) ;
 struct scatterlist* FUNC_9 (int ,struct scatterlist*,unsigned int) ;
 int FUNC_10 (int *,struct scatterlist*,unsigned int,int,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct skcipher_request*,unsigned int,int ,int ) ;
 int FUNC_13 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int ) ;
 int FUNC_14 (struct skcipher_request*,int ) ;

__attribute__((used)) static int FUNC_15(struct aead_request *VAR_1,
        unsigned int VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_4(VAR_1);
 unsigned int VAR_4 = FUNC_2(VAR_3);
 struct authenc_esn_request_ctx *VAR_5 = FUNC_1(VAR_1);
 struct crypto_authenc_esn_ctx *VAR_6 = FUNC_3(VAR_3);
 struct skcipher_request *VAR_7 = (void *)(VAR_5->tail +
        VAR_6->reqoff);
 struct crypto_ahash *VAR_8 = VAR_6->auth;
 u8 *VAR_9 = FUNC_0((u8 *)VAR_5->tail,
         FUNC_5(VAR_8) + 1);
 unsigned int VAR_10 = VAR_1->cryptlen - VAR_4;
 unsigned int VAR_11 = VAR_1->assoclen;
 struct scatterlist *VAR_12 = VAR_1->dst;
 u8 *VAR_13 = VAR_9 + FUNC_6(VAR_8);
 u32 VAR_14[2];

 if (!VAR_4)
  goto decrypt;


 FUNC_10(VAR_14, VAR_12, 4, 4, 0);
 FUNC_10(VAR_14 + 1, VAR_12, VAR_11 + VAR_10, 4, 0);
 FUNC_10(VAR_14, VAR_12, 0, 8, 1);

 if (FUNC_7(VAR_13, VAR_9, VAR_4))
  return -VAR_0;

decrypt:

 FUNC_11(VAR_5->dst, 2);
 VAR_12 = FUNC_9(VAR_5->dst, VAR_12, VAR_11);

 FUNC_14(VAR_7, VAR_6->enc);
 FUNC_12(VAR_7, VAR_2,
          VAR_1->base.complete, VAR_1->base.data);
 FUNC_13(VAR_7, VAR_12, VAR_12, VAR_10, VAR_1->iv);

 return FUNC_8(VAR_7);
}
