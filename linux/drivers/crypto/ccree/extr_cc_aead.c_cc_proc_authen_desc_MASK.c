
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_ctx {int drvdata; } ;
struct aead_request {int dummy; } ;
struct TYPE_6__ {int mlli_nents; int sram_addr; } ;
struct TYPE_5__ {int mlli_nents; int sram_addr; } ;
struct TYPE_4__ {int mlli_nents; int sram_addr; } ;
struct aead_req_ctx {int data_buff_type; unsigned int dst_offset; unsigned int src_offset; TYPE_3__ src; TYPE_2__ dst; int is_single_pass; TYPE_1__ assoc; int cryptlen; struct scatterlist* src_sgl; struct scatterlist* dst_sgl; } ;
typedef enum cc_req_dma_buf_type { ____Placeholder_cc_req_dma_buf_type } cc_req_dma_buf_type ;
typedef int cc_sram_addr_t ;





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
 int FUNC_7 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_8 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_9 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_10(struct aead_request *VAR_4,
    unsigned int VAR_5,
    struct cc_hw_desc VAR_6[],
    unsigned int *VAR_7, int VAR_8)
{
 struct aead_req_ctx *VAR_9 = FUNC_0(VAR_4);
 enum cc_req_dma_buf_type VAR_10 = VAR_9->data_buff_type;
 unsigned int VAR_11 = *VAR_7;
 struct crypto_aead *VAR_12 = FUNC_2(VAR_4);
 struct cc_aead_ctx *VAR_13 = FUNC_1(VAR_12);
 struct device *VAR_14 = FUNC_5(VAR_13->drvdata);

 switch (VAR_10) {
 case 130:
 {
  struct scatterlist *VAR_15 =
   (VAR_8 == VAR_2) ?
   VAR_9->dst_sgl : VAR_9->src_sgl;

  unsigned int VAR_16 =
   (VAR_8 == VAR_2) ?
   VAR_9->dst_offset : VAR_9->src_offset;
  FUNC_3(VAR_14, "AUTHENC: SRC/DST buffer type DLLI\n");
  FUNC_6(&VAR_6[VAR_11]);
  FUNC_7(&VAR_6[VAR_11], VAR_0,
        (FUNC_9(VAR_15) + VAR_16),
        VAR_9->cryptlen, VAR_3);
  FUNC_8(&VAR_6[VAR_11], VAR_5);
  break;
 }
 case 129:
 {




  cc_sram_addr_t VAR_17 = VAR_9->assoc.sram_addr;
  u32 VAR_18 = VAR_9->assoc.mlli_nents;

  if (VAR_9->is_single_pass) {
   if (VAR_8 == VAR_2) {
    VAR_17 = VAR_9->dst.sram_addr;
    VAR_18 = VAR_9->dst.mlli_nents;
   } else {
    VAR_17 = VAR_9->src.sram_addr;
    VAR_18 = VAR_9->src.mlli_nents;
   }
  }

  FUNC_3(VAR_14, "AUTHENC: SRC/DST buffer type MLLI\n");
  FUNC_6(&VAR_6[VAR_11]);
  FUNC_7(&VAR_6[VAR_11], VAR_1, VAR_17, VAR_18,
        VAR_3);
  FUNC_8(&VAR_6[VAR_11], VAR_5);
  break;
 }
 case 128:
 default:
  FUNC_4(VAR_14, "AUTHENC: Invalid SRC/DST buffer type\n");
 }

 *VAR_7 = (++VAR_11);
}
