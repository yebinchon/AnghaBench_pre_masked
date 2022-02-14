
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct crypto_authenc_esn_ctx {struct crypto_ahash* auth; scalar_t__ reqoff; } ;
struct crypto_ahash {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct authenc_esn_request_ctx {int dst; scalar_t__ tail; } ;
struct ahash_request {int dummy; } ;
struct aead_request {unsigned int assoclen; unsigned int cryptlen; struct scatterlist* src; struct scatterlist* dst; } ;


 int * FUNC_0 (int *,scalar_t__) ;
 struct authenc_esn_request_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct ahash_request*,int ,int ,struct aead_request*) ;
 int FUNC_4 (struct ahash_request*,struct scatterlist*,int *,unsigned int) ;
 int FUNC_5 (struct ahash_request*,struct crypto_ahash*) ;
 int VAR_0 ;
 unsigned int FUNC_6 (struct crypto_aead*) ;
 struct crypto_authenc_esn_ctx* FUNC_7 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_8 (struct aead_request*) ;
 scalar_t__ FUNC_9 (struct crypto_ahash*) ;
 int FUNC_10 (struct ahash_request*) ;
 int FUNC_11 (struct crypto_ahash*) ;
 int FUNC_12 (struct aead_request*,unsigned int) ;
 int FUNC_13 (struct aead_request*,int ) ;
 struct scatterlist* FUNC_14 (int ,struct scatterlist*,int) ;
 int FUNC_15 (int *,struct scatterlist*,unsigned int,int,int) ;
 int FUNC_16 (int ,int) ;

__attribute__((used)) static int FUNC_17(struct aead_request *VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_8(VAR_1);
 struct authenc_esn_request_ctx *VAR_3 = FUNC_1(VAR_1);
 struct crypto_authenc_esn_ctx *VAR_4 = FUNC_7(VAR_2);
 struct ahash_request *VAR_5 = (void *)(VAR_3->tail + VAR_4->reqoff);
 unsigned int VAR_6 = FUNC_6(VAR_2);
 struct crypto_ahash *VAR_7 = VAR_4->auth;
 u8 *VAR_8 = FUNC_0((u8 *)VAR_3->tail,
         FUNC_9(VAR_7) + 1);
 unsigned int VAR_9 = VAR_1->assoclen;
 unsigned int VAR_10 = VAR_1->cryptlen;
 u8 *VAR_11 = VAR_8 + FUNC_11(VAR_7);
 struct scatterlist *VAR_12 = VAR_1->dst;
 u32 VAR_13[2];
 int VAR_14;

 VAR_10 -= VAR_6;

 if (VAR_1->src != VAR_12) {
  VAR_14 = FUNC_12(VAR_1, VAR_9 + VAR_10);
  if (VAR_14)
   return VAR_14;
 }

 FUNC_15(VAR_11, VAR_1->src, VAR_9 + VAR_10,
     VAR_6, 0);

 if (!VAR_6)
  goto tail;


 FUNC_15(VAR_13, VAR_12, 0, 8, 0);
 FUNC_15(VAR_13, VAR_12, 4, 4, 1);
 FUNC_15(VAR_13 + 1, VAR_12, VAR_9 + VAR_10, 4, 1);

 FUNC_16(VAR_3->dst, 2);
 VAR_12 = FUNC_14(VAR_3->dst, VAR_12, 4);

 FUNC_5(VAR_5, VAR_7);
 FUNC_4(VAR_5, VAR_12, VAR_8, VAR_9 + VAR_10);
 FUNC_3(VAR_5, FUNC_2(VAR_1),
       VAR_0, VAR_1);

 VAR_14 = FUNC_10(VAR_5);
 if (VAR_14)
  return VAR_14;

tail:
 return FUNC_13(VAR_1, FUNC_2(VAR_1));
}
