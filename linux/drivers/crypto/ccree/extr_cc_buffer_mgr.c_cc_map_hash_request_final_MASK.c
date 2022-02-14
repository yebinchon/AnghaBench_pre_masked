
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct scatterlist {unsigned int length; } ;
struct mlli_params {int * curr_pool; } ;
struct device {int dummy; } ;
struct cc_drvdata {struct buff_mgr_handle* buff_mgr_handle; } ;
struct buffer_array {scalar_t__ num_of_buffers; } ;
struct buff_mgr_handle {int * mlli_buffs_pool; } ;
struct ahash_req_ctx {int buff_index; scalar_t__ data_dma_buf_type; int in_nents; struct scatterlist* buff_sg; int mlli_nents; struct scatterlist* curr_sg; struct mlli_params mlli_params; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,struct buffer_array*,int,struct scatterlist*,unsigned int,int ,int,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,struct buffer_array*,struct mlli_params*,int ) ;
 int * FUNC_3 (struct ahash_req_ctx*) ;
 scalar_t__* FUNC_4 (struct ahash_req_ctx*) ;
 int FUNC_5 (struct device*,struct scatterlist*,unsigned int,int ,int*,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (struct device*,struct ahash_req_ctx*,int *,scalar_t__,struct buffer_array*) ;
 int FUNC_7 (struct device*,char*,int ,...) ;
 int FUNC_8 (struct device*,struct scatterlist*,int,int ) ;
 struct device* FUNC_9 (struct cc_drvdata*) ;
 int FUNC_10 (struct scatterlist*,struct scatterlist*,int) ;

int FUNC_11(struct cc_drvdata *VAR_5, void *VAR_6,
         struct scatterlist *VAR_7, unsigned int VAR_8,
         bool VAR_9, gfp_t VAR_10)
{
 struct ahash_req_ctx *VAR_11 = (struct ahash_req_ctx *)VAR_6;
 struct device *VAR_12 = FUNC_9(VAR_5);
 u8 *VAR_13 = FUNC_3(VAR_11);
 u32 *VAR_14 = FUNC_4(VAR_11);
 struct mlli_params *VAR_15 = &VAR_11->mlli_params;
 struct buffer_array VAR_16;
 struct buff_mgr_handle *VAR_17 = VAR_5->buff_mgr_handle;
 int VAR_18 = 0;
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;

 FUNC_7(VAR_12, "final params : curr_buff=%pK curr_buff_cnt=0x%X nbytes = 0x%X src=%pK curr_index=%u\n",
  *VAR_13, *VAR_14, VAR_8, VAR_7, VAR_11->buff_index);

 VAR_11->data_dma_buf_type = VAR_2;
 VAR_15->curr_pool = ((void*)0);
 VAR_16.num_of_buffers = 0;
 VAR_11->in_nents = 0;

 if (VAR_8 == 0 && *VAR_14 == 0) {

  return 0;
 }



 if (*VAR_14) {
  VAR_18 = FUNC_6(VAR_12, VAR_11, VAR_13, *VAR_14,
         &VAR_16);
  if (VAR_18)
   return VAR_18;
 }

 if (VAR_7 && VAR_8 > 0 && VAR_9) {
  VAR_18 = FUNC_5(VAR_12, VAR_7, VAR_8, VAR_3,
          &VAR_11->in_nents, VAR_4,
          &VAR_19, &VAR_20);
  if (VAR_18)
   goto unmap_curr_buff;
  if (VAR_7 && VAR_20 == 1 &&
      VAR_11->data_dma_buf_type == VAR_2) {
   FUNC_10(VAR_11->buff_sg, VAR_7,
          sizeof(struct scatterlist));
   VAR_11->buff_sg->length = VAR_8;
   VAR_11->curr_sg = VAR_11->buff_sg;
   VAR_11->data_dma_buf_type = VAR_0;
  } else {
   VAR_11->data_dma_buf_type = VAR_1;
  }
 }


 if (VAR_11->data_dma_buf_type == VAR_1) {
  VAR_15->curr_pool = VAR_17->mlli_buffs_pool;

  FUNC_0(VAR_12, &VAR_16, VAR_11->in_nents, VAR_7, VAR_8,
    0, 1, &VAR_11->mlli_nents);
  VAR_18 = FUNC_2(VAR_12, &VAR_16, VAR_15, VAR_10);
  if (VAR_18)
   goto fail_unmap_din;
 }

 VAR_11->buff_index = (VAR_11->buff_index ^ 1);
 FUNC_7(VAR_12, "areq_ctx->data_dma_buf_type = %s\n",
  FUNC_1(VAR_11->data_dma_buf_type));
 return 0;

fail_unmap_din:
 FUNC_8(VAR_12, VAR_7, VAR_11->in_nents, VAR_3);

unmap_curr_buff:
 if (*VAR_14)
  FUNC_8(VAR_12, VAR_11->buff_sg, 1, VAR_3);

 return VAR_18;
}
