
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct chcr_aead_reqctx {scalar_t__ b0_len; int iv_dma; } ;
struct aead_request {unsigned int assoclen; unsigned int cryptlen; scalar_t__ src; scalar_t__ dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct chcr_aead_reqctx* FUNC_0 (struct aead_request*) ;
 unsigned int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_4 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct device *VAR_4,
    struct aead_request *VAR_5,
    unsigned short VAR_6)
{
 struct chcr_aead_reqctx *VAR_7 = FUNC_0(VAR_5);
 struct crypto_aead *VAR_8 = FUNC_2(VAR_5);
 unsigned int VAR_9 = FUNC_1(VAR_8);
 int VAR_10;

 VAR_10 = VAR_5->assoclen + VAR_5->cryptlen + (VAR_6 ?
     -VAR_9 : VAR_9);
 if (!VAR_5->cryptlen || !VAR_10)
  return;

 FUNC_4(VAR_4, VAR_7->iv_dma, (VAR_3 + VAR_7->b0_len),
     VAR_0);
 if (VAR_5->src == VAR_5->dst) {
  FUNC_3(VAR_4, VAR_5->src, FUNC_5(VAR_5->src),
       VAR_0);
 } else {
  FUNC_3(VAR_4, VAR_5->src, FUNC_5(VAR_5->src),
       VAR_2);
  FUNC_3(VAR_4, VAR_5->dst, FUNC_5(VAR_5->dst),
       VAR_1);
 }
}
