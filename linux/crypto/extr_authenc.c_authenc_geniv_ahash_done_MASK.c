
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {struct aead_request* data; } ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {scalar_t__ tail; } ;
struct authenc_instance_ctx {scalar_t__ reqoff; } ;
struct ahash_request {int result; } ;
struct aead_request {scalar_t__ cryptlen; scalar_t__ assoclen; int dst; } ;
struct aead_instance {int dummy; } ;


 struct aead_instance* FUNC_0 (struct crypto_aead*) ;
 struct authenc_instance_ctx* FUNC_1 (struct aead_instance*) ;
 int FUNC_2 (struct aead_request*,int) ;
 struct authenc_request_ctx* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_5 (struct aead_request*) ;
 int FUNC_6 (int ,int ,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_7(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct aead_request *VAR_2 = VAR_0->data;
 struct crypto_aead *VAR_3 = FUNC_5(VAR_2);
 struct aead_instance *VAR_4 = FUNC_0(VAR_3);
 struct authenc_instance_ctx *VAR_5 = FUNC_1(VAR_4);
 struct authenc_request_ctx *VAR_6 = FUNC_3(VAR_2);
 struct ahash_request *VAR_7 = (void *)(VAR_6->tail + VAR_5->reqoff);

 if (VAR_1)
  goto out;

 FUNC_6(VAR_7->result, VAR_2->dst,
     VAR_2->assoclen + VAR_2->cryptlen,
     FUNC_4(VAR_3), 1);

out:
 FUNC_2(VAR_2, VAR_1);
}
