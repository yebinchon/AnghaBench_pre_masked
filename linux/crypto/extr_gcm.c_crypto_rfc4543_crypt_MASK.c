
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int data; int complete; int flags; } ;
struct aead_request {scalar_t__ cryptlen; scalar_t__ assoclen; int dst; int src; TYPE_1__ base; int iv; } ;
struct crypto_rfc4543_req_ctx {struct aead_request subreq; } ;
struct crypto_rfc4543_ctx {int child; int nonce; } ;
struct crypto_aead {int dummy; } ;


 int * FUNC_0 (int *,scalar_t__) ;
 struct crypto_rfc4543_req_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,scalar_t__) ;
 int FUNC_3 (struct aead_request*,int ,int ,int ) ;
 int FUNC_4 (struct aead_request*,int ,int ,unsigned int,int *) ;
 int FUNC_5 (struct aead_request*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct crypto_aead*) ;
 struct crypto_rfc4543_ctx* FUNC_8 (struct crypto_aead*) ;
 int FUNC_9 (struct aead_request*) ;
 int FUNC_10 (struct aead_request*) ;
 int FUNC_11 (int ) ;
 struct crypto_aead* FUNC_12 (struct aead_request*) ;
 int FUNC_13 (struct aead_request*,int) ;
 int FUNC_14 (int *,int ,int) ;

__attribute__((used)) static int FUNC_15(struct aead_request *VAR_0, bool VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_12(VAR_0);
 struct crypto_rfc4543_ctx *VAR_3 = FUNC_8(VAR_2);
 struct crypto_rfc4543_req_ctx *VAR_4 = FUNC_1(VAR_0);
 struct aead_request *VAR_5 = &VAR_4->subreq;
 unsigned int VAR_6 = FUNC_7(VAR_2);
 u8 *VAR_7 = FUNC_0((u8 *)(VAR_4 + 1) + FUNC_11(VAR_3->child),
      FUNC_6(VAR_3->child) + 1);
 int VAR_8;

 if (VAR_0->src != VAR_0->dst) {
  VAR_8 = FUNC_13(VAR_0, VAR_1);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_14(VAR_7, VAR_3->nonce, 4);
 FUNC_14(VAR_7 + 4, VAR_0->iv, 8);

 FUNC_5(VAR_5, VAR_3->child);
 FUNC_3(VAR_5, VAR_0->base.flags,
      VAR_0->base.complete, VAR_0->base.data);
 FUNC_4(VAR_5, VAR_0->src, VAR_0->dst,
          VAR_1 ? 0 : VAR_6, VAR_7);
 FUNC_2(VAR_5, VAR_0->assoclen + VAR_0->cryptlen -
        VAR_5->cryptlen);

 return VAR_1 ? FUNC_10(VAR_5) : FUNC_9(VAR_5);
}
