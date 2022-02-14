
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_ctx {int drvdata; } ;
struct aead_request {int dummy; } ;
struct TYPE_4__ {int mlli_nents; int sram_addr; } ;
struct TYPE_3__ {scalar_t__ mlli_nents; scalar_t__ sram_addr; } ;
struct aead_req_ctx {int data_buff_type; scalar_t__ cryptlen; TYPE_2__ dst; TYPE_1__ src; scalar_t__ dst_offset; int dst_sgl; scalar_t__ src_offset; int src_sgl; } ;
typedef enum cc_req_dma_buf_type { ____Placeholder_cc_req_dma_buf_type } cc_req_dma_buf_type ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 struct device* FUNC_5 (int ) ;
 int FUNC_6 (struct cc_hw_desc*) ;
 int FUNC_7 (struct cc_hw_desc*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (struct cc_hw_desc*,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_9 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_10 (struct cc_hw_desc*,unsigned int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct aead_request *VAR_3,
    unsigned int VAR_4,
    struct cc_hw_desc VAR_5[],
    unsigned int *VAR_6)
{
 unsigned int VAR_7 = *VAR_6;
 struct aead_req_ctx *VAR_8 = FUNC_0(VAR_3);
 enum cc_req_dma_buf_type VAR_9 = VAR_8->data_buff_type;
 struct crypto_aead *VAR_10 = FUNC_2(VAR_3);
 struct cc_aead_ctx *VAR_11 = FUNC_1(VAR_10);
 struct device *VAR_12 = FUNC_5(VAR_11->drvdata);

 if (VAR_8->cryptlen == 0)
  return;

 switch (VAR_9) {
 case 130:
  FUNC_3(VAR_12, "CIPHER: SRC/DST buffer type DLLI\n");
  FUNC_6(&VAR_5[VAR_7]);
  FUNC_7(&VAR_5[VAR_7], VAR_0,
        (FUNC_11(VAR_8->src_sgl) +
         VAR_8->src_offset), VAR_8->cryptlen,
         VAR_2);
  FUNC_8(&VAR_5[VAR_7],
         (FUNC_11(VAR_8->dst_sgl) +
          VAR_8->dst_offset),
         VAR_8->cryptlen, VAR_2, 0);
  FUNC_10(&VAR_5[VAR_7], VAR_4);
  break;
 case 129:
  FUNC_3(VAR_12, "CIPHER: SRC/DST buffer type MLLI\n");
  FUNC_6(&VAR_5[VAR_7]);
  FUNC_7(&VAR_5[VAR_7], VAR_1, VAR_8->src.sram_addr,
        VAR_8->src.mlli_nents, VAR_2);
  FUNC_9(&VAR_5[VAR_7], VAR_8->dst.sram_addr,
         VAR_8->dst.mlli_nents, VAR_2, 0);
  FUNC_10(&VAR_5[VAR_7], VAR_4);
  break;
 case 128:
 default:
  FUNC_4(VAR_12, "CIPHER: Invalid SRC/DST buffer type\n");
 }

 *VAR_6 = (++VAR_7);
}
