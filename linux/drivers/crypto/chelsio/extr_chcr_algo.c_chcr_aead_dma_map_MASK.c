
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct chcr_aead_reqctx {scalar_t__ iv_dma; scalar_t__ b0_dma; scalar_t__ b0_len; int iv; } ;
struct aead_request {unsigned int assoclen; unsigned int cryptlen; scalar_t__ src; scalar_t__ dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct chcr_aead_reqctx* FUNC_0 (struct aead_request*) ;
 unsigned int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct device*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (struct device*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct device*,scalar_t__) ;
 int FUNC_6 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_7 (struct device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (scalar_t__) ;

int FUNC_9(struct device *VAR_5,
        struct aead_request *VAR_6,
        unsigned short VAR_7)
{
 int VAR_8;
 struct chcr_aead_reqctx *VAR_9 = FUNC_0(VAR_6);
 struct crypto_aead *VAR_10 = FUNC_2(VAR_6);
 unsigned int VAR_11 = FUNC_1(VAR_10);
 int VAR_12;

 VAR_12 = VAR_6->assoclen + VAR_6->cryptlen + (VAR_7 ?
    -VAR_11 : VAR_11);
 if (!VAR_6->cryptlen || !VAR_12)
  return 0;
 VAR_9->iv_dma = FUNC_4(VAR_5, VAR_9->iv, (VAR_4 + VAR_9->b0_len),
     VAR_0);
 if (FUNC_5(VAR_5, VAR_9->iv_dma))
  return -VAR_3;
 if (VAR_9->b0_len)
  VAR_9->b0_dma = VAR_9->iv_dma + VAR_4;
 else
  VAR_9->b0_dma = 0;
 if (VAR_6->src == VAR_6->dst) {
  VAR_8 = FUNC_3(VAR_5, VAR_6->src, FUNC_8(VAR_6->src),
       VAR_0);
  if (!VAR_8)
   goto err;
 } else {
  VAR_8 = FUNC_3(VAR_5, VAR_6->src, FUNC_8(VAR_6->src),
       VAR_2);
  if (!VAR_8)
   goto err;
  VAR_8 = FUNC_3(VAR_5, VAR_6->dst, FUNC_8(VAR_6->dst),
       VAR_1);
  if (!VAR_8) {
   FUNC_6(VAR_5, VAR_6->src, FUNC_8(VAR_6->src),
       VAR_2);
   goto err;
  }
 }

 return 0;
err:
 FUNC_7(VAR_5, VAR_9->iv_dma, VAR_4, VAR_0);
 return -VAR_3;
}
