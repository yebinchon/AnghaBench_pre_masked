
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_authenc_ctx {struct crypto_ahash* auth; } ;
struct crypto_ahash {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {int * tail; } ;
struct authenc_instance_ctx {int reqoff; } ;
struct ahash_request {int dummy; } ;
struct aead_request {scalar_t__ cryptlen; scalar_t__ assoclen; int src; } ;
struct aead_instance {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 struct aead_instance* FUNC_1 (struct crypto_aead*) ;
 struct authenc_instance_ctx* FUNC_2 (struct aead_instance*) ;
 struct authenc_request_ctx* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct ahash_request*,int ,int ,struct aead_request*) ;
 int FUNC_6 (struct ahash_request*,int ,int *,scalar_t__) ;
 int FUNC_7 (struct ahash_request*,struct crypto_ahash*) ;
 int VAR_0 ;
 unsigned int FUNC_8 (struct crypto_aead*) ;
 struct crypto_authenc_ctx* FUNC_9 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_10 (struct aead_request*) ;
 scalar_t__ FUNC_11 (struct crypto_ahash*) ;
 int FUNC_12 (struct ahash_request*) ;
 int FUNC_13 (struct aead_request*,int ) ;

__attribute__((used)) static int FUNC_14(struct aead_request *VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_10(VAR_1);
 unsigned int VAR_3 = FUNC_8(VAR_2);
 struct aead_instance *VAR_4 = FUNC_1(VAR_2);
 struct crypto_authenc_ctx *VAR_5 = FUNC_9(VAR_2);
 struct authenc_instance_ctx *VAR_6 = FUNC_2(VAR_4);
 struct crypto_ahash *VAR_7 = VAR_5->auth;
 struct authenc_request_ctx *VAR_8 = FUNC_3(VAR_1);
 struct ahash_request *VAR_9 = (void *)(VAR_8->tail + VAR_6->reqoff);
 u8 *VAR_10 = VAR_8->tail;
 int VAR_11;

 VAR_10 = (u8 *)FUNC_0((unsigned long)VAR_10 + FUNC_11(VAR_7),
      FUNC_11(VAR_7) + 1);

 FUNC_7(VAR_9, VAR_7);
 FUNC_6(VAR_9, VAR_1->src, VAR_10,
    VAR_1->assoclen + VAR_1->cryptlen - VAR_3);
 FUNC_5(VAR_9, FUNC_4(VAR_1),
       VAR_0, VAR_1);

 VAR_11 = FUNC_12(VAR_9);
 if (VAR_11)
  return VAR_11;

 return FUNC_13(VAR_1, FUNC_4(VAR_1));
}
