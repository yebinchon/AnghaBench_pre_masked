
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct chcr_aead_ctx {int sw_cipher; } ;
struct TYPE_2__ {int data; int complete; int flags; } ;
struct aead_request {int assoclen; int iv; int cryptlen; int dst; int src; TYPE_1__ base; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct aead_request* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct aead_request*,int ) ;
 int FUNC_4 (struct aead_request*,int ,int ,int ) ;
 int FUNC_5 (struct aead_request*,int ,int ,int ,int ) ;
 int FUNC_6 (struct aead_request*,int ) ;
 int FUNC_7 (struct aead_request*) ;
 int FUNC_8 (struct aead_request*) ;
 struct crypto_aead* FUNC_9 (struct aead_request*) ;

__attribute__((used)) static int FUNC_10(struct aead_request *VAR_0, unsigned short VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_9(VAR_0);
 struct chcr_aead_ctx *VAR_3 = FUNC_0(FUNC_1(VAR_2));
 struct aead_request *VAR_4 = FUNC_2(VAR_0);

 FUNC_6(VAR_4, VAR_3->sw_cipher);
 FUNC_4(VAR_4, VAR_0->base.flags,
      VAR_0->base.complete, VAR_0->base.data);
 FUNC_5(VAR_4, VAR_0->src, VAR_0->dst, VAR_0->cryptlen,
     VAR_0->iv);
 FUNC_3(VAR_4, VAR_0->assoclen);
 return VAR_1 ? FUNC_7(VAR_4) :
  FUNC_8(VAR_4);
}
