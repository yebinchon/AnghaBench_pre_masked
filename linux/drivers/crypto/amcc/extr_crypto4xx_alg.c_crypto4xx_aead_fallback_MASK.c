
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int aead; } ;
struct crypto4xx_ctx {TYPE_1__ sw_cipher; } ;
struct TYPE_4__ {int data; int complete; int flags; } ;
struct aead_request {int assoclen; int iv; int cryptlen; int dst; int src; TYPE_2__ base; } ;


 struct aead_request* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int ) ;
 int FUNC_2 (struct aead_request*,int ,int ,int ) ;
 int FUNC_3 (struct aead_request*,int ,int ,int ,int ) ;
 int FUNC_4 (struct aead_request*,int ) ;
 int FUNC_5 (struct aead_request*) ;
 int FUNC_6 (struct aead_request*) ;

__attribute__((used)) static int FUNC_7(struct aead_request *VAR_0,
 struct crypto4xx_ctx *VAR_1, bool VAR_2)
{
 struct aead_request *VAR_3 = FUNC_0(VAR_0);

 FUNC_4(VAR_3, VAR_1->sw_cipher.aead);
 FUNC_2(VAR_3, VAR_0->base.flags,
      VAR_0->base.complete, VAR_0->base.data);
 FUNC_3(VAR_3, VAR_0->src, VAR_0->dst, VAR_0->cryptlen,
          VAR_0->iv);
 FUNC_1(VAR_3, VAR_0->assoclen);
 return VAR_2 ? FUNC_5(VAR_3) :
       FUNC_6(VAR_3);
}
