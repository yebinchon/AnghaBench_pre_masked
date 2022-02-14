
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcp_dma_desc {int control0; int size; scalar_t__ status; void* payload; void* destination; void* source; scalar_t__ next_cmd_addr; int control1; } ;
struct dcp_async_ctx {size_t chan; int fill; } ;
struct dcp_aes_req_ctx {scalar_t__ ecb; scalar_t__ enc; } ;
struct dcp {int dev; TYPE_1__* coh; } ;
struct ablkcipher_request {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {int aes_out_buf; int aes_in_buf; int aes_key; struct dcp_dma_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct dcp_aes_req_ctx* FUNC_0 (struct ablkcipher_request*) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,void*,int,int ) ;
 struct dcp* VAR_15 ;
 int FUNC_4 (struct dcp_async_ctx*) ;

__attribute__((used)) static int FUNC_5(struct dcp_async_ctx *VAR_16,
      struct ablkcipher_request *VAR_17, int VAR_18)
{
 struct dcp *VAR_19 = VAR_15;
 struct dcp_dma_desc *VAR_20 = &VAR_19->coh->desc[VAR_16->chan];
 struct dcp_aes_req_ctx *VAR_21 = FUNC_0(VAR_17);
 int VAR_22;

 dma_addr_t VAR_23 = FUNC_2(VAR_19->dev, VAR_19->coh->aes_key,
          2 * VAR_1,
          VAR_4);
 dma_addr_t VAR_24 = FUNC_2(VAR_19->dev, VAR_19->coh->aes_in_buf,
          VAR_2, VAR_4);
 dma_addr_t VAR_25 = FUNC_2(VAR_19->dev, VAR_19->coh->aes_out_buf,
          VAR_2, VAR_3);

 if (VAR_16->fill % VAR_0) {
  FUNC_1(VAR_19->dev, "Invalid block size!\n");
  VAR_22 = -VAR_5;
  goto aes_done_run;
 }


 VAR_20->control0 = VAR_8 |
      VAR_10 |
      VAR_9;


 VAR_20->control0 |= VAR_11;

 if (VAR_21->enc)
  VAR_20->control0 |= VAR_6;
 if (VAR_18)
  VAR_20->control0 |= VAR_7;

 VAR_20->control1 = VAR_14;

 if (VAR_21->ecb)
  VAR_20->control1 |= VAR_13;
 else
  VAR_20->control1 |= VAR_12;

 VAR_20->next_cmd_addr = 0;
 VAR_20->source = VAR_24;
 VAR_20->destination = VAR_25;
 VAR_20->size = VAR_16->fill;
 VAR_20->payload = VAR_23;
 VAR_20->status = 0;

 VAR_22 = FUNC_4(VAR_16);

aes_done_run:
 FUNC_3(VAR_19->dev, VAR_23, 2 * VAR_1,
    VAR_4);
 FUNC_3(VAR_19->dev, VAR_24, VAR_2, VAR_4);
 FUNC_3(VAR_19->dev, VAR_25, VAR_2, VAR_3);

 return VAR_22;
}
