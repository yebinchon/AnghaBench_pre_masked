
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_3__ {int mlli_len; int mlli_dma_addr; } ;
struct cipher_req_ctx {scalar_t__ dma_buf_type; TYPE_1__ mlli_params; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_cipher_ctx {TYPE_2__* drvdata; } ;
struct TYPE_4__ {scalar_t__ mlli_sram_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cc_cipher_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct device*,char*,int *,int ,unsigned int) ;
 struct device* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct cc_hw_desc*) ;
 int FUNC_4 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_5 (struct cc_hw_desc*,scalar_t__,int ) ;
 int FUNC_6 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_7(struct crypto_tfm *VAR_4,
          struct cipher_req_ctx *VAR_5,
          struct scatterlist *VAR_6, struct scatterlist *VAR_7,
          unsigned int VAR_8, void *VAR_9,
          struct cc_hw_desc VAR_10[], unsigned int *VAR_11)
{
 struct cc_cipher_ctx *VAR_12 = FUNC_0(VAR_4);
 struct device *VAR_13 = FUNC_2(VAR_12->drvdata);

 if (VAR_5->dma_buf_type == VAR_1) {

  FUNC_1(VAR_13, " bypass params addr %pad length 0x%X addr 0x%08X\n",
   &VAR_5->mlli_params.mlli_dma_addr,
   VAR_5->mlli_params.mlli_len,
   (unsigned int)VAR_12->drvdata->mlli_sram_addr);
  FUNC_3(&VAR_10[*VAR_11]);
  FUNC_4(&VAR_10[*VAR_11], VAR_2,
        VAR_5->mlli_params.mlli_dma_addr,
        VAR_5->mlli_params.mlli_len, VAR_3);
  FUNC_5(&VAR_10[*VAR_11],
         VAR_12->drvdata->mlli_sram_addr,
         VAR_5->mlli_params.mlli_len);
  FUNC_6(&VAR_10[*VAR_11], VAR_0);
  (*VAR_11)++;
 }
}
