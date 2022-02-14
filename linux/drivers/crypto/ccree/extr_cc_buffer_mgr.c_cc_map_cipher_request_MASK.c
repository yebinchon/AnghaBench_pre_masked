
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct mlli_params {int * curr_pool; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iv_dma_addr; } ;
struct cipher_req_ctx {scalar_t__ dma_buf_type; int out_mlli_nents; scalar_t__ out_nents; int in_mlli_nents; scalar_t__ in_nents; TYPE_1__ gen_ctx; struct mlli_params mlli_params; } ;
struct cc_drvdata {struct buff_mgr_handle* buff_mgr_handle; } ;
struct buffer_array {scalar_t__ num_of_buffers; } ;
struct buff_mgr_handle {int * mlli_buffs_pool; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,struct buffer_array*,scalar_t__,struct scatterlist*,unsigned int,int ,int,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,struct buffer_array*,struct mlli_params*,int ) ;
 int FUNC_3 (struct device*,struct scatterlist*,unsigned int,int ,scalar_t__*,int ,int*,int*) ;
 int FUNC_4 (struct device*,struct cipher_req_ctx*,unsigned int,struct scatterlist*,struct scatterlist*) ;
 int FUNC_5 (struct device*,char*,unsigned int,...) ;
 int FUNC_6 (struct device*,char*,unsigned int,void*) ;
 scalar_t__ FUNC_7 (struct device*,void*,unsigned int,int ) ;
 scalar_t__ FUNC_8 (struct device*,scalar_t__) ;
 struct device* FUNC_9 (struct cc_drvdata*) ;
 int FUNC_10 (char*,int *,unsigned int) ;

int FUNC_11(struct cc_drvdata *VAR_5, void *VAR_6,
     unsigned int VAR_7, unsigned int VAR_8,
     void *VAR_9, struct scatterlist *VAR_10,
     struct scatterlist *VAR_11, gfp_t VAR_12)
{
 struct cipher_req_ctx *VAR_13 = (struct cipher_req_ctx *)VAR_6;
 struct mlli_params *VAR_14 = &VAR_13->mlli_params;
 struct buff_mgr_handle *VAR_15 = VAR_5->buff_mgr_handle;
 struct device *VAR_16 = FUNC_9(VAR_5);
 struct buffer_array VAR_17;
 u32 VAR_18 = 0;
 int VAR_19 = 0;
 u32 VAR_20 = 0;

 VAR_13->dma_buf_type = VAR_0;
 VAR_14->curr_pool = ((void*)0);
 VAR_17.num_of_buffers = 0;


 if (VAR_7) {
  FUNC_10("iv", (u8 *)VAR_9, VAR_7);
  VAR_13->gen_ctx.iv_dma_addr =
   FUNC_7(VAR_16, (void *)VAR_9,
           VAR_7, VAR_2);
  if (FUNC_8(VAR_16, VAR_13->gen_ctx.iv_dma_addr)) {
   FUNC_6(VAR_16, "Mapping iv %u B at va=%pK for DMA failed\n",
    VAR_7, VAR_9);
   return -VAR_3;
  }
  FUNC_5(VAR_16, "Mapped iv %u B at va=%pK to dma=%pad\n",
   VAR_7, VAR_9, &VAR_13->gen_ctx.iv_dma_addr);
 } else {
  VAR_13->gen_ctx.iv_dma_addr = 0;
 }


 VAR_19 = FUNC_3(VAR_16, VAR_10, VAR_8, VAR_2, &VAR_13->in_nents,
         VAR_4, &VAR_18, &VAR_20);
 if (VAR_19)
  goto cipher_exit;
 if (VAR_20 > 1)
  VAR_13->dma_buf_type = VAR_1;

 if (VAR_10 == VAR_11) {

  if (VAR_13->dma_buf_type == VAR_1) {
   VAR_13->out_nents = 0;
   FUNC_0(VAR_16, &VAR_17, VAR_13->in_nents, VAR_10,
     VAR_8, 0, 1,
     &VAR_13->in_mlli_nents);
  }
 } else {

  VAR_19 = FUNC_3(VAR_16, VAR_11, VAR_8, VAR_2,
          &VAR_13->out_nents, VAR_4,
          &VAR_18, &VAR_20);
  if (VAR_19)
   goto cipher_exit;
  if (VAR_20 > 1)
   VAR_13->dma_buf_type = VAR_1;

  if (VAR_13->dma_buf_type == VAR_1) {
   FUNC_0(VAR_16, &VAR_17, VAR_13->in_nents, VAR_10,
     VAR_8, 0, 1,
     &VAR_13->in_mlli_nents);
   FUNC_0(VAR_16, &VAR_17, VAR_13->out_nents, VAR_11,
     VAR_8, 0, 1,
     &VAR_13->out_mlli_nents);
  }
 }

 if (VAR_13->dma_buf_type == VAR_1) {
  VAR_14->curr_pool = VAR_15->mlli_buffs_pool;
  VAR_19 = FUNC_2(VAR_16, &VAR_17, VAR_14, VAR_12);
  if (VAR_19)
   goto cipher_exit;
 }

 FUNC_5(VAR_16, "areq_ctx->dma_buf_type = %s\n",
  FUNC_1(VAR_13->dma_buf_type));

 return 0;

cipher_exit:
 FUNC_4(VAR_16, VAR_13, VAR_7, VAR_10, VAR_11);
 return VAR_19;
}
