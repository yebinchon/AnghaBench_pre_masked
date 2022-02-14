
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_drvdata {int dummy; } ;
struct buffer_array {int dummy; } ;
struct aead_request {int iv; int base; } ;
struct TYPE_4__ {int mlli_nents; } ;
struct TYPE_3__ {scalar_t__ iv_dma_addr; int * iv; } ;
struct aead_req_ctx {unsigned int hw_iv_size; int assoc_buff_type; TYPE_2__ assoc; TYPE_1__ gen_ctx; scalar_t__ plaintext_authenticate_only; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct device*,struct buffer_array*,scalar_t__,unsigned int,int,int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct device*,char*,unsigned int,int ,scalar_t__*) ;
 int FUNC_6 (struct device*,char*,unsigned int,int ) ;
 scalar_t__ FUNC_7 (struct device*,int *,unsigned int,int ) ;
 scalar_t__ FUNC_8 (struct device*,scalar_t__) ;
 struct device* FUNC_9 (struct cc_drvdata*) ;
 int * FUNC_10 (int ,unsigned int,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct cc_drvdata *VAR_4,
       struct aead_request *VAR_5,
       struct buffer_array *VAR_6,
       bool VAR_7, bool VAR_8)
{
 struct aead_req_ctx *VAR_9 = FUNC_0(VAR_5);
 unsigned int VAR_10 = VAR_9->hw_iv_size;
 struct device *VAR_11 = FUNC_9(VAR_4);
 gfp_t VAR_12 = FUNC_2(&VAR_5->base);
 int VAR_13 = 0;

 if (!VAR_5->iv) {
  VAR_9->gen_ctx.iv_dma_addr = 0;
  VAR_9->gen_ctx.iv = ((void*)0);
  goto chain_iv_exit;
 }

 VAR_9->gen_ctx.iv = FUNC_10(VAR_5->iv, VAR_10, VAR_12);
 if (!VAR_9->gen_ctx.iv)
  return -VAR_2;

 VAR_9->gen_ctx.iv_dma_addr =
  FUNC_7(VAR_11, VAR_9->gen_ctx.iv, VAR_10,
          VAR_1);
 if (FUNC_8(VAR_11, VAR_9->gen_ctx.iv_dma_addr)) {
  FUNC_6(VAR_11, "Mapping iv %u B at va=%pK for DMA failed\n",
   VAR_10, VAR_5->iv);
  FUNC_11(VAR_9->gen_ctx.iv);
  VAR_9->gen_ctx.iv = ((void*)0);
  VAR_13 = -VAR_2;
  goto chain_iv_exit;
 }

 FUNC_5(VAR_11, "Mapped iv %u B at va=%pK to dma=%pad\n",
  VAR_10, VAR_5->iv, &VAR_9->gen_ctx.iv_dma_addr);

 if (VAR_8 && VAR_9->plaintext_authenticate_only) {
  struct crypto_aead *VAR_14 = FUNC_4(VAR_5);
  unsigned int VAR_15 = FUNC_3(VAR_14);
  unsigned int VAR_16 = VAR_3;

  FUNC_1(VAR_11, VAR_6,
        (VAR_9->gen_ctx.iv_dma_addr + VAR_16),
        VAR_15, VAR_7,
        &VAR_9->assoc.mlli_nents);
  VAR_9->assoc_buff_type = VAR_0;
 }

chain_iv_exit:
 return VAR_13;
}
