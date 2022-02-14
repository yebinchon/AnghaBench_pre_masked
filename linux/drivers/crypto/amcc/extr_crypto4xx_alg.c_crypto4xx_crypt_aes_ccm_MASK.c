
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int crypto_mode9_8; } ;
struct TYPE_9__ {TYPE_3__ bf; } ;
struct TYPE_6__ {int digest_len; } ;
struct TYPE_7__ {TYPE_1__ bf; } ;
struct dynamic_sa_ctl {TYPE_4__ sa_command_1; TYPE_2__ sa_command_0; } ;
struct crypto_aead {int dummy; } ;
struct crypto4xx_ctx {int sa_len; int sa_out; int sa_in; } ;
struct crypto4xx_aead_reqctx {int dst; } ;
struct TYPE_10__ {int tfm; } ;
struct aead_request {unsigned int cryptlen; int* iv; int assoclen; int dst; int src; TYPE_5__ base; } ;
typedef int iv ;
typedef int __le32 ;


 int VAR_0 ;
 struct crypto4xx_aead_reqctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aead_request*,struct crypto4xx_ctx*,int) ;
 scalar_t__ FUNC_3 (struct aead_request*,unsigned int,int,int) ;
 int FUNC_4 (TYPE_5__*,struct crypto4xx_ctx*,int ,int ,unsigned int,int *,int,struct dynamic_sa_ctl*,int,int ,int ) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_7 (struct aead_request*) ;
 struct crypto4xx_ctx* FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int) ;

__attribute__((used)) static int FUNC_10(struct aead_request *VAR_1, bool VAR_2)
{
 struct crypto4xx_ctx *VAR_3 = FUNC_8(VAR_1->base.tfm);
 struct crypto4xx_aead_reqctx *VAR_4 = FUNC_0(VAR_1);
 struct crypto_aead *VAR_5 = FUNC_7(VAR_1);
 __le32 VAR_6[16];
 u32 VAR_7[VAR_0 + 4];
 struct dynamic_sa_ctl *VAR_8 = (struct dynamic_sa_ctl *)VAR_7;
 unsigned int VAR_9 = VAR_1->cryptlen;

 if (VAR_2)
  VAR_9 -= FUNC_6(VAR_5);

 if (FUNC_3(VAR_1, VAR_9, 1, VAR_2))
  return FUNC_2(VAR_1, VAR_3, VAR_2);

 FUNC_9(VAR_7, VAR_2 ? VAR_3->sa_in : VAR_3->sa_out, VAR_3->sa_len * 4);
 VAR_8->sa_command_0.bf.digest_len = FUNC_6(VAR_5) >> 2;

 if (VAR_1->iv[0] == 1) {

  VAR_8->sa_command_1.bf.crypto_mode9_8 = 1;
 }

 VAR_6[3] = FUNC_1(0);
 FUNC_5(VAR_6, VAR_1->iv, 16 - (VAR_1->iv[0] + 1));

 return FUNC_4(&VAR_1->base, VAR_3, VAR_1->src, VAR_1->dst,
      VAR_9, VAR_6, sizeof(VAR_6),
      VAR_8, VAR_3->sa_len, VAR_1->assoclen, VAR_4->dst);
}
