
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {int data; int complete; int flags; } ;
struct aead_request {scalar_t__ src; scalar_t__ dst; scalar_t__ assoclen; int cryptlen; TYPE_1__ base; int iv; } ;
struct crypto_rfc4106_req_ctx {struct scatterlist* dst; struct scatterlist* src; struct aead_request subreq; } ;
struct crypto_rfc4106_ctx {int nonce; struct crypto_aead* child; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,scalar_t__) ;
 struct crypto_rfc4106_req_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,scalar_t__) ;
 int FUNC_3 (struct aead_request*,int ,int ,int ) ;
 int FUNC_4 (struct aead_request*,struct scatterlist*,struct scatterlist*,int ,int *) ;
 int FUNC_5 (struct aead_request*,struct crypto_aead*) ;
 scalar_t__ FUNC_6 (struct crypto_aead*) ;
 struct crypto_rfc4106_ctx* FUNC_7 (struct crypto_aead*) ;
 int FUNC_8 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_9 (struct aead_request*) ;
 int FUNC_10 (int *,int ,int) ;
 struct scatterlist* FUNC_11 (struct scatterlist*,scalar_t__,scalar_t__) ;
 int FUNC_12 (int *,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_13 (struct scatterlist*,int,struct scatterlist*) ;
 int FUNC_14 (struct scatterlist*,int) ;
 int FUNC_15 (struct scatterlist*,int *,scalar_t__) ;

__attribute__((used)) static struct aead_request *FUNC_16(struct aead_request *VAR_1)
{
 struct crypto_rfc4106_req_ctx *VAR_2 = FUNC_1(VAR_1);
 struct crypto_aead *VAR_3 = FUNC_9(VAR_1);
 struct crypto_rfc4106_ctx *VAR_4 = FUNC_7(VAR_3);
 struct aead_request *VAR_5 = &VAR_2->subreq;
 struct crypto_aead *VAR_6 = VAR_4->child;
 struct scatterlist *VAR_7;
 u8 *VAR_8 = FUNC_0((u8 *)(VAR_5 + 1) + FUNC_8(VAR_6),
      FUNC_6(VAR_6) + 1);

 FUNC_12(VAR_8 + VAR_0, VAR_1->src, 0, VAR_1->assoclen - 8, 0);

 FUNC_10(VAR_8, VAR_4->nonce, 4);
 FUNC_10(VAR_8 + 4, VAR_1->iv, 8);

 FUNC_14(VAR_2->src, 3);
 FUNC_15(VAR_2->src, VAR_8 + VAR_0, VAR_1->assoclen - 8);
 VAR_7 = FUNC_11(VAR_2->src + 1, VAR_1->src, VAR_1->assoclen);
 if (VAR_7 != VAR_2->src + 1)
  FUNC_13(VAR_2->src, 2, VAR_7);

 if (VAR_1->src != VAR_1->dst) {
  FUNC_14(VAR_2->dst, 3);
  FUNC_15(VAR_2->dst, VAR_8 + VAR_0, VAR_1->assoclen - 8);
  VAR_7 = FUNC_11(VAR_2->dst + 1, VAR_1->dst, VAR_1->assoclen);
  if (VAR_7 != VAR_2->dst + 1)
   FUNC_13(VAR_2->dst, 2, VAR_7);
 }

 FUNC_5(VAR_5, VAR_6);
 FUNC_3(VAR_5, VAR_1->base.flags, VAR_1->base.complete,
      VAR_1->base.data);
 FUNC_4(VAR_5, VAR_2->src,
          VAR_1->src == VAR_1->dst ? VAR_2->src : VAR_2->dst,
          VAR_1->cryptlen, VAR_8);
 FUNC_2(VAR_5, VAR_1->assoclen - 8);

 return VAR_5;
}
