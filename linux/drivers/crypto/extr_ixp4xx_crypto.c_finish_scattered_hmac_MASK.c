
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct TYPE_2__ {struct aead_request* aead_req; } ;
struct crypt_ctl {int icv_rev_aes; TYPE_1__ data; } ;
struct aead_request {int assoclen; int cryptlen; int dst; } ;
struct aead_ctx {int hmac_virt; scalar_t__ encrypt; } ;


 struct aead_ctx* FUNC_0 (struct aead_request*) ;
 int VAR_0 ;
 int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int,int) ;

__attribute__((used)) static void FUNC_5(struct crypt_ctl *VAR_1)
{
 struct aead_request *VAR_2 = VAR_1->data.aead_req;
 struct aead_ctx *VAR_3 = FUNC_0(VAR_2);
 struct crypto_aead *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = VAR_2->assoclen + VAR_2->cryptlen - VAR_5;

 if (VAR_3->encrypt) {
  FUNC_4(VAR_3->hmac_virt,
   VAR_2->dst, VAR_6, VAR_5, 1);
 }
 FUNC_3(VAR_0, VAR_3->hmac_virt, VAR_1->icv_rev_aes);
}
