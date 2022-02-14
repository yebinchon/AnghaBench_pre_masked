
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct crypto_authenc_esn_ctx {scalar_t__ reqoff; struct crypto_ahash* auth; } ;
struct crypto_ahash {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct authenc_esn_request_ctx {int dst; scalar_t__ tail; } ;
struct ahash_request {int dummy; } ;
struct aead_request {unsigned int assoclen; unsigned int cryptlen; struct scatterlist* dst; } ;


 int * FUNC_0 (int *,scalar_t__) ;
 struct authenc_esn_request_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct ahash_request*,unsigned int,int ,struct aead_request*) ;
 int FUNC_4 (struct ahash_request*,struct scatterlist*,int *,unsigned int) ;
 int FUNC_5 (struct ahash_request*,struct crypto_ahash*) ;
 int VAR_0 ;
 unsigned int FUNC_6 (struct crypto_aead*) ;
 struct crypto_authenc_esn_ctx* FUNC_7 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_8 (struct aead_request*) ;
 scalar_t__ FUNC_9 (struct crypto_ahash*) ;
 scalar_t__ FUNC_10 (struct ahash_request*) ;
 int FUNC_11 (struct aead_request*,int ) ;
 struct scatterlist* FUNC_12 (int ,struct scatterlist*,int) ;
 int FUNC_13 (int *,struct scatterlist*,unsigned int,int,int) ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static int FUNC_15(struct aead_request *VAR_1,
         unsigned int VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_8(VAR_1);
 struct authenc_esn_request_ctx *VAR_4 = FUNC_1(VAR_1);
 struct crypto_authenc_esn_ctx *VAR_5 = FUNC_7(VAR_3);
 struct crypto_ahash *VAR_6 = VAR_5->auth;
 u8 *VAR_7 = FUNC_0((u8 *)VAR_4->tail,
        FUNC_9(VAR_6) + 1);
 struct ahash_request *VAR_8 = (void *)(VAR_4->tail + VAR_5->reqoff);
 unsigned int VAR_9 = FUNC_6(VAR_3);
 unsigned int VAR_10 = VAR_1->assoclen;
 unsigned int VAR_11 = VAR_1->cryptlen;
 struct scatterlist *VAR_12 = VAR_1->dst;
 u32 VAR_13[2];

 if (!VAR_9)
  return 0;


 FUNC_13(VAR_13, VAR_12, 0, 8, 0);
 FUNC_13(VAR_13, VAR_12, 4, 4, 1);
 FUNC_13(VAR_13 + 1, VAR_12, VAR_10 + VAR_11, 4, 1);

 FUNC_14(VAR_4->dst, 2);
 VAR_12 = FUNC_12(VAR_4->dst, VAR_12, 4);

 FUNC_5(VAR_8, VAR_6);
 FUNC_4(VAR_8, VAR_12, VAR_7, VAR_10 + VAR_11);
 FUNC_3(VAR_8, VAR_2,
       VAR_0, VAR_1);

 return FUNC_10(VAR_8) ?:
        FUNC_11(VAR_1, FUNC_2(VAR_1));
}
