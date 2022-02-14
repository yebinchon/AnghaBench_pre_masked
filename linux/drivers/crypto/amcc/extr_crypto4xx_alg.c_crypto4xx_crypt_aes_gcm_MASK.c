
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto4xx_ctx {int sa_len; int sa_out; int sa_in; } ;
struct crypto4xx_aead_reqctx {int dst; } ;
struct TYPE_2__ {int tfm; } ;
struct aead_request {unsigned int cryptlen; int assoclen; int dst; int src; TYPE_1__ base; int iv; } ;
typedef int iv ;
typedef int __le32 ;


 int VAR_0 ;
 struct crypto4xx_aead_reqctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct aead_request*,struct crypto4xx_ctx*,int) ;
 scalar_t__ FUNC_3 (struct aead_request*,unsigned int,int,int) ;
 int FUNC_4 (TYPE_1__*,struct crypto4xx_ctx*,int ,int ,unsigned int,int *,int,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct aead_request*) ;
 struct crypto4xx_ctx* FUNC_8 (int ) ;

__attribute__((used)) static inline int FUNC_9(struct aead_request *VAR_1,
       bool VAR_2)
{
 struct crypto4xx_ctx *VAR_3 = FUNC_8(VAR_1->base.tfm);
 struct crypto4xx_aead_reqctx *VAR_4 = FUNC_0(VAR_1);
 __le32 VAR_5[4];
 unsigned int VAR_6 = VAR_1->cryptlen;

 if (VAR_2)
  VAR_6 -= FUNC_6(FUNC_7(VAR_1));

 if (FUNC_3(VAR_1, VAR_6, 0, VAR_2))
  return FUNC_2(VAR_1, VAR_3, VAR_2);

 FUNC_5(VAR_5, VAR_1->iv, VAR_0);
 VAR_5[3] = FUNC_1(1);

 return FUNC_4(&VAR_1->base, VAR_3, VAR_1->src, VAR_1->dst,
      VAR_6, VAR_5, sizeof(VAR_5),
      VAR_2 ? VAR_3->sa_in : VAR_3->sa_out,
      VAR_3->sa_len, VAR_1->assoclen, VAR_4->dst);
}
