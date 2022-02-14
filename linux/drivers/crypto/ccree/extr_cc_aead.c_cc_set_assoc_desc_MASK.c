
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_ctx {int auth_mode; int drvdata; } ;
struct aead_request {int src; } ;
struct TYPE_2__ {int mlli_nents; int sram_addr; } ;
struct aead_req_ctx {int assoc_buff_type; int cryptlen; TYPE_1__ assoc; int assoclen; } ;
typedef enum cc_req_dma_buf_type { ____Placeholder_cc_req_dma_buf_type } cc_req_dma_buf_type ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 struct device* FUNC_5 (int ) ;
 int FUNC_6 (struct cc_hw_desc*) ;
 int FUNC_7 (struct cc_hw_desc*) ;
 int FUNC_8 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_9 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct aead_request *VAR_4, unsigned int VAR_5,
         struct cc_hw_desc VAR_6[], unsigned int *VAR_7)
{
 struct crypto_aead *VAR_8 = FUNC_2(VAR_4);
 struct cc_aead_ctx *VAR_9 = FUNC_1(VAR_8);
 struct aead_req_ctx *VAR_10 = FUNC_0(VAR_4);
 enum cc_req_dma_buf_type VAR_11 = VAR_10->assoc_buff_type;
 unsigned int VAR_12 = *VAR_7;
 struct device *VAR_13 = FUNC_5(VAR_9->drvdata);

 switch (VAR_11) {
 case 130:
  FUNC_3(VAR_13, "ASSOC buffer type DLLI\n");
  FUNC_6(&VAR_6[VAR_12]);
  FUNC_8(&VAR_6[VAR_12], VAR_0, FUNC_10(VAR_4->src),
        VAR_10->assoclen, VAR_3);
  FUNC_9(&VAR_6[VAR_12], VAR_5);
  if (VAR_9->auth_mode == VAR_2 &&
      VAR_10->cryptlen > 0)
   FUNC_7(&VAR_6[VAR_12]);
  break;
 case 129:
  FUNC_3(VAR_13, "ASSOC buffer type MLLI\n");
  FUNC_6(&VAR_6[VAR_12]);
  FUNC_8(&VAR_6[VAR_12], VAR_1, VAR_10->assoc.sram_addr,
        VAR_10->assoc.mlli_nents, VAR_3);
  FUNC_9(&VAR_6[VAR_12], VAR_5);
  if (VAR_9->auth_mode == VAR_2 &&
      VAR_10->cryptlen > 0)
   FUNC_7(&VAR_6[VAR_12]);
  break;
 case 128:
 default:
  FUNC_4(VAR_13, "Invalid ASSOC buffer type\n");
 }

 *VAR_7 = (++VAR_12);
}
