
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct scatterlist {unsigned int length; } ;
struct mlli_params {int * curr_pool; } ;
struct device {int dummy; } ;
struct cc_drvdata {struct buff_mgr_handle* buff_mgr_handle; } ;
struct buffer_array {scalar_t__ num_of_buffers; } ;
struct buff_mgr_handle {int * mlli_buffs_pool; } ;
struct ahash_req_ctx {unsigned int buff_index; scalar_t__ data_dma_buf_type; int in_nents; struct scatterlist* buff_sg; int mlli_nents; struct scatterlist* curr_sg; struct mlli_params mlli_params; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,struct buffer_array*,int,struct scatterlist*,unsigned int,int ,int,int *) ;
 int FUNC_1 (struct device*,int *,struct scatterlist*,unsigned int,unsigned int,int ) ;
 int FUNC_2 (struct device*,struct buffer_array*,struct mlli_params*,int ) ;
 int * FUNC_3 (struct ahash_req_ctx*) ;
 unsigned int* FUNC_4 (struct ahash_req_ctx*) ;
 int FUNC_5 (struct device*,struct scatterlist*,unsigned int,int ,int*,int ,unsigned int*,unsigned int*) ;
 int * FUNC_6 (struct ahash_req_ctx*) ;
 unsigned int* FUNC_7 (struct ahash_req_ctx*) ;
 int FUNC_8 (struct device*,struct ahash_req_ctx*,int *,unsigned int,struct buffer_array*) ;
 int FUNC_9 (struct device*,char*,unsigned int,unsigned int,...) ;
 int FUNC_10 (struct device*,struct scatterlist*,int,int ) ;
 struct device* FUNC_11 (struct cc_drvdata*) ;
 int FUNC_12 (struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_13 (struct scatterlist*,int,int *,unsigned int) ;
 int FUNC_14 (struct scatterlist*,unsigned int) ;

int FUNC_15(struct cc_drvdata *VAR_6, void *VAR_7,
          struct scatterlist *VAR_8, unsigned int VAR_9,
          unsigned int VAR_10, gfp_t VAR_11)
{
 struct ahash_req_ctx *VAR_12 = (struct ahash_req_ctx *)VAR_7;
 struct device *VAR_13 = FUNC_11(VAR_6);
 u8 *VAR_14 = FUNC_3(VAR_12);
 u32 *VAR_15 = FUNC_4(VAR_12);
 u8 *VAR_16 = FUNC_6(VAR_12);
 u32 *VAR_17 = FUNC_7(VAR_12);
 struct mlli_params *VAR_18 = &VAR_12->mlli_params;
 unsigned int VAR_19;
 u32 VAR_20 = VAR_9 + *VAR_15;
 struct buffer_array VAR_21;
 struct buff_mgr_handle *VAR_22 = VAR_6->buff_mgr_handle;
 unsigned int VAR_23 = 0;
 int VAR_24 = 0;
 u32 VAR_25 = 0;
 u32 VAR_26 = 0;

 FUNC_9(VAR_13, " update params : curr_buff=%pK curr_buff_cnt=0x%X nbytes=0x%X src=%pK curr_index=%u\n",
  VAR_14, *VAR_15, VAR_9, VAR_8, VAR_12->buff_index);

 VAR_12->data_dma_buf_type = VAR_2;
 VAR_18->curr_pool = ((void*)0);
 VAR_12->curr_sg = ((void*)0);
 VAR_21.num_of_buffers = 0;
 VAR_12->in_nents = 0;

 if (VAR_20 < VAR_10) {
  FUNC_9(VAR_13, " less than one block: curr_buff=%pK *curr_buff_cnt=0x%X copy_to=%pK\n",
   VAR_14, *VAR_15, &VAR_14[*VAR_15]);
  VAR_12->in_nents = FUNC_14(VAR_8, VAR_9);
  FUNC_13(VAR_8, VAR_12->in_nents,
      &VAR_14[*VAR_15], VAR_9);
  *VAR_15 += VAR_9;
  return 1;
 }


 *VAR_17 = VAR_20 & (VAR_10 - 1);

 VAR_19 = VAR_20 - *VAR_17;

 FUNC_9(VAR_13, " temp length : *next_buff_cnt=0x%X update_data_len=0x%X\n",
  *VAR_17, VAR_19);


 if (*VAR_17) {
  FUNC_9(VAR_13, " handle residue: next buff %pK skip data %u residue %u\n",
   VAR_16, (VAR_19 - *VAR_15),
   *VAR_17);
  FUNC_1(VAR_13, VAR_16, VAR_8,
       (VAR_19 - *VAR_15),
       VAR_9, VAR_3);

  VAR_23 = 1;
 }

 if (*VAR_15) {
  VAR_24 = FUNC_8(VAR_13, VAR_12, VAR_14, *VAR_15,
         &VAR_21);
  if (VAR_24)
   return VAR_24;

  VAR_23 = 1;
 }

 if (VAR_19 > *VAR_15) {
  VAR_24 = FUNC_5(VAR_13, VAR_8, (VAR_19 - *VAR_15),
          VAR_4, &VAR_12->in_nents,
          VAR_5, &VAR_25,
          &VAR_26);
  if (VAR_24)
   goto unmap_curr_buff;
  if (VAR_26 == 1 &&
      VAR_12->data_dma_buf_type == VAR_2) {

   FUNC_12(VAR_12->buff_sg, VAR_8,
          sizeof(struct scatterlist));
   VAR_12->buff_sg->length = VAR_19;
   VAR_12->data_dma_buf_type = VAR_0;
   VAR_12->curr_sg = VAR_12->buff_sg;
  } else {
   VAR_12->data_dma_buf_type = VAR_1;
  }
 }

 if (VAR_12->data_dma_buf_type == VAR_1) {
  VAR_18->curr_pool = VAR_22->mlli_buffs_pool;

  FUNC_0(VAR_13, &VAR_21, VAR_12->in_nents, VAR_8,
    (VAR_19 - *VAR_15), 0, 1,
    &VAR_12->mlli_nents);
  VAR_24 = FUNC_2(VAR_13, &VAR_21, VAR_18, VAR_11);
  if (VAR_24)
   goto fail_unmap_din;
 }
 VAR_12->buff_index = (VAR_12->buff_index ^ VAR_23);

 return 0;

fail_unmap_din:
 FUNC_10(VAR_13, VAR_8, VAR_12->in_nents, VAR_4);

unmap_curr_buff:
 if (*VAR_15)
  FUNC_10(VAR_13, VAR_12->buff_sg, 1, VAR_4);

 return VAR_24;
}
