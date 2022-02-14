
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_hash_request_ctx {scalar_t__ dma_ct; int sg_key; } ;
struct stm32_hash_dev {int dma_mode; int flags; int dev; int req; } ;
struct stm32_hash_ctx {scalar_t__ keylen; int key; } ;
struct crypto_ahash {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct stm32_hash_request_ctx* FUNC_1 (int ) ;
 struct stm32_hash_ctx* FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,int *,int,int ) ;
 int FUNC_6 (int ,int *,int,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (struct stm32_hash_dev*) ;
 int FUNC_9 (struct stm32_hash_dev*) ;
 int FUNC_10 (struct stm32_hash_dev*,int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_11(struct stm32_hash_dev *VAR_5)
{
 struct stm32_hash_request_ctx *VAR_6 = FUNC_1(VAR_5->req);
 struct crypto_ahash *VAR_7 = FUNC_3(VAR_5->req);
 struct stm32_hash_ctx *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;

 if (VAR_8->keylen < VAR_3 || (VAR_5->dma_mode == 1)) {
  VAR_9 = FUNC_9(VAR_5);
  if (FUNC_8(VAR_5))
   return -VAR_2;
 } else {
  if (!(VAR_5->flags & VAR_4))
   FUNC_7(&VAR_6->sg_key, VAR_8->key,
        FUNC_0(VAR_8->keylen, sizeof(u32)));

  VAR_6->dma_ct = FUNC_5(VAR_5->dev, &VAR_6->sg_key, 1,
       VAR_0);
  if (VAR_6->dma_ct == 0) {
   FUNC_4(VAR_5->dev, "dma_map_sg error\n");
   return -VAR_1;
  }

  VAR_9 = FUNC_10(VAR_5, &VAR_6->sg_key, VAR_8->keylen, 0);

  FUNC_6(VAR_5->dev, &VAR_6->sg_key, 1, VAR_0);
 }

 return VAR_9;
}
