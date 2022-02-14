
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct crypto_authenc_esn_ctx {struct crypto_ahash* auth; } ;
struct crypto_ahash {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct authenc_esn_request_ctx {scalar_t__ tail; } ;
struct aead_request {unsigned int assoclen; unsigned int cryptlen; struct scatterlist* dst; } ;


 int * FUNC_0 (int *,scalar_t__) ;
 struct authenc_esn_request_ctx* FUNC_1 (struct aead_request*) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 struct crypto_authenc_esn_ctx* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 scalar_t__ FUNC_5 (struct crypto_ahash*) ;
 int FUNC_6 (int *,struct scatterlist*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_7(struct aead_request *VAR_0,
       unsigned int VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_4(VAR_0);
 struct crypto_authenc_esn_ctx *VAR_3 = FUNC_3(VAR_2);
 struct authenc_esn_request_ctx *VAR_4 = FUNC_1(VAR_0);
 struct crypto_ahash *VAR_5 = VAR_3->auth;
 u8 *VAR_6 = FUNC_0((u8 *)VAR_4->tail,
        FUNC_5(VAR_5) + 1);
 unsigned int VAR_7 = FUNC_2(VAR_2);
 unsigned int VAR_8 = VAR_0->assoclen;
 unsigned int VAR_9 = VAR_0->cryptlen;
 struct scatterlist *VAR_10 = VAR_0->dst;
 u32 VAR_11[2];


 FUNC_6(VAR_11, VAR_10, 4, 4, 0);
 FUNC_6(VAR_11 + 1, VAR_10, VAR_8 + VAR_9, 4, 0);
 FUNC_6(VAR_11, VAR_10, 0, 8, 1);

 FUNC_6(VAR_6, VAR_10, VAR_8 + VAR_9, VAR_7, 1);
 return 0;
}
