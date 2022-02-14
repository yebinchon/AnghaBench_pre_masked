
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct talitos_edesc {int dummy; } ;
struct talitos_ctx {int dev; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct aead_request {unsigned int cryptlen; TYPE_1__ base; int assoclen; int dst; int src; } ;


 unsigned int FUNC_0 (struct crypto_aead*) ;
 struct talitos_ctx* FUNC_1 (struct crypto_aead*) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 struct talitos_edesc* FUNC_4 (int ,int ,int ,int *,int ,unsigned int,unsigned int,unsigned int,int,int ,int) ;

__attribute__((used)) static struct talitos_edesc *FUNC_5(struct aead_request *VAR_0, u8 *VAR_1,
           int VAR_2, bool VAR_3)
{
 struct crypto_aead *VAR_4 = FUNC_3(VAR_0);
 unsigned int VAR_5 = FUNC_0(VAR_4);
 struct talitos_ctx *VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7 = FUNC_2(VAR_4);
 unsigned int VAR_8 = VAR_0->cryptlen - (VAR_3 ? 0 : VAR_5);

 return FUNC_4(VAR_6->dev, VAR_0->src, VAR_0->dst,
       VAR_1, VAR_0->assoclen, VAR_8,
       VAR_5, VAR_7, VAR_2,
       VAR_0->base.flags, VAR_3);
}
