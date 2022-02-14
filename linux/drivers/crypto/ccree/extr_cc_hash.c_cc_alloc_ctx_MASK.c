
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ keylen; } ;
struct cc_hash_ctx {int is_hmac; void* opad_tmp_keys_dma_addr; scalar_t__ opad_tmp_keys_buff; void* digest_buff_dma_addr; scalar_t__ digest_buff; TYPE_1__ key_params; int drvdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cc_hash_ctx*) ;
 int FUNC_1 (struct device*,char*,int,scalar_t__,void**) ;
 int FUNC_2 (struct device*,char*,int,scalar_t__) ;
 void* FUNC_3 (struct device*,void*,int,int ) ;
 scalar_t__ FUNC_4 (struct device*,void*) ;
 struct device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct cc_hash_ctx *VAR_2)
{
 struct device *VAR_3 = FUNC_5(VAR_2->drvdata);

 VAR_2->key_params.keylen = 0;

 VAR_2->digest_buff_dma_addr =
  FUNC_3(VAR_3, (void *)VAR_2->digest_buff,
          sizeof(VAR_2->digest_buff), VAR_0);
 if (FUNC_4(VAR_3, VAR_2->digest_buff_dma_addr)) {
  FUNC_2(VAR_3, "Mapping digest len %zu B at va=%pK for DMA failed\n",
   sizeof(VAR_2->digest_buff), VAR_2->digest_buff);
  goto fail;
 }
 FUNC_1(VAR_3, "Mapped digest %zu B at va=%pK to dma=%pad\n",
  sizeof(VAR_2->digest_buff), VAR_2->digest_buff,
  &VAR_2->digest_buff_dma_addr);

 VAR_2->opad_tmp_keys_dma_addr =
  FUNC_3(VAR_3, (void *)VAR_2->opad_tmp_keys_buff,
          sizeof(VAR_2->opad_tmp_keys_buff),
          VAR_0);
 if (FUNC_4(VAR_3, VAR_2->opad_tmp_keys_dma_addr)) {
  FUNC_2(VAR_3, "Mapping opad digest %zu B at va=%pK for DMA failed\n",
   sizeof(VAR_2->opad_tmp_keys_buff),
   VAR_2->opad_tmp_keys_buff);
  goto fail;
 }
 FUNC_1(VAR_3, "Mapped opad_tmp_keys %zu B at va=%pK to dma=%pad\n",
  sizeof(VAR_2->opad_tmp_keys_buff), VAR_2->opad_tmp_keys_buff,
  &VAR_2->opad_tmp_keys_dma_addr);

 VAR_2->is_hmac = 0;
 return 0;

fail:
 FUNC_0(VAR_2);
 return -VAR_1;
}
