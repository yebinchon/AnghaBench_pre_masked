
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_ctx {TYPE_2__* drvdata; } ;
struct aead_request {int dummy; } ;
struct TYPE_3__ {scalar_t__ mlli_len; int mlli_dma_addr; } ;
struct aead_req_ctx {scalar_t__ assoc_buff_type; scalar_t__ data_buff_type; TYPE_1__ mlli_params; int is_single_pass; } ;
struct TYPE_4__ {scalar_t__ mlli_sram_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct device*,char*,unsigned int,scalar_t__) ;
 struct device* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct cc_hw_desc*) ;
 int FUNC_6 (struct cc_hw_desc*,int ,int ,scalar_t__,int ) ;
 int FUNC_7 (struct cc_hw_desc*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_9(struct aead_request *VAR_4,
       struct cc_hw_desc VAR_5[], unsigned int *VAR_6)
{
 struct aead_req_ctx *VAR_7 = FUNC_0(VAR_4);
 struct crypto_aead *VAR_8 = FUNC_2(VAR_4);
 struct cc_aead_ctx *VAR_9 = FUNC_1(VAR_8);
 struct device *VAR_10 = FUNC_4(VAR_9->drvdata);

 if ((VAR_7->assoc_buff_type == VAR_1 ||
     VAR_7->data_buff_type == VAR_1 ||
     !VAR_7->is_single_pass) && VAR_7->mlli_params.mlli_len) {
  FUNC_3(VAR_10, "Copy-to-sram: mlli_dma=%08x, mlli_size=%u\n",
   (unsigned int)VAR_9->drvdata->mlli_sram_addr,
   VAR_7->mlli_params.mlli_len);

  FUNC_5(&VAR_5[*VAR_6]);
  FUNC_6(&VAR_5[*VAR_6], VAR_2,
        VAR_7->mlli_params.mlli_dma_addr,
        VAR_7->mlli_params.mlli_len, VAR_3);
  FUNC_7(&VAR_5[*VAR_6],
         VAR_9->drvdata->mlli_sram_addr,
         VAR_7->mlli_params.mlli_len);
  FUNC_8(&VAR_5[*VAR_6], VAR_0);
  (*VAR_6)++;
 }
}
