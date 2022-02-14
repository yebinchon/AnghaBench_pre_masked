
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
struct cc_drvdata {int coherent; } ;
struct buffer_array {int dummy; } ;
struct aead_request {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_6__ {int nents; int mlli_nents; } ;
struct TYPE_5__ {int nents; int mlli_nents; } ;
struct TYPE_4__ {int op_type; } ;
struct aead_req_ctx {unsigned int req_authsize; unsigned int icv_virt_addr; unsigned int backup_mac; unsigned int mac_buf; unsigned int icv_dma_addr; unsigned int mac_buf_dma_addr; TYPE_3__ dst; struct scatterlist* dst_sgl; void* is_icv_fragmented; TYPE_2__ src; int src_offset; int cryptlen; struct scatterlist* src_sgl; int dst_offset; TYPE_1__ gen_ctx; } ;
typedef enum drv_crypto_direction { ____Placeholder_drv_crypto_direction } drv_crypto_direction ;


 int VAR_0 ;
 int VAR_1 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct device*,struct buffer_array*,int,struct scatterlist*,int ,int ,int,int *) ;
 int FUNC_2 (struct device*,struct aead_request*,int ) ;
 void* FUNC_3 (int,unsigned int,unsigned int) ;
 struct device* FUNC_4 (struct cc_drvdata*) ;
 unsigned int FUNC_5 (struct scatterlist*) ;
 unsigned int FUNC_6 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_7(struct cc_drvdata *VAR_2,
          struct aead_request *VAR_3,
          struct buffer_array *VAR_4,
          u32 *VAR_5, u32 *VAR_6,
          bool VAR_7)
{
 struct aead_req_ctx *VAR_8 = FUNC_0(VAR_3);
 enum drv_crypto_direction VAR_9 = VAR_8->gen_ctx.op_type;
 unsigned int VAR_10 = VAR_8->req_authsize;
 struct device *VAR_11 = FUNC_4(VAR_2);
 struct scatterlist *VAR_12;

 if (VAR_3->src == VAR_3->dst) {

  FUNC_1(VAR_11, VAR_4, VAR_8->src.nents,
    VAR_8->src_sgl, VAR_8->cryptlen,
    VAR_8->src_offset, VAR_7,
    &VAR_8->src.mlli_nents);

  VAR_8->is_icv_fragmented =
   FUNC_3(VAR_8->src.nents, VAR_10,
           *VAR_5);

  if (VAR_8->is_icv_fragmented) {




   if (VAR_9 == VAR_1) {





    if (!VAR_2->coherent)
     FUNC_2(VAR_11, VAR_3, VAR_0);

    VAR_8->icv_virt_addr = VAR_8->backup_mac;
   } else {
    VAR_8->icv_virt_addr = VAR_8->mac_buf;
    VAR_8->icv_dma_addr =
     VAR_8->mac_buf_dma_addr;
   }
  } else {
   VAR_12 = &VAR_8->src_sgl[VAR_8->src.nents - 1];

   VAR_8->icv_dma_addr = FUNC_5(VAR_12) +
    (*VAR_5 - VAR_10);
   VAR_8->icv_virt_addr = FUNC_6(VAR_12) +
    (*VAR_5 - VAR_10);
  }

 } else if (VAR_9 == VAR_1) {

  FUNC_1(VAR_11, VAR_4, VAR_8->src.nents,
    VAR_8->src_sgl, VAR_8->cryptlen,
    VAR_8->src_offset, VAR_7,
    &VAR_8->src.mlli_nents);
  FUNC_1(VAR_11, VAR_4, VAR_8->dst.nents,
    VAR_8->dst_sgl, VAR_8->cryptlen,
    VAR_8->dst_offset, VAR_7,
    &VAR_8->dst.mlli_nents);

  VAR_8->is_icv_fragmented =
   FUNC_3(VAR_8->src.nents, VAR_10,
           *VAR_5);





  if (VAR_8->is_icv_fragmented) {
   FUNC_2(VAR_11, VAR_3, VAR_0);
   VAR_8->icv_virt_addr = VAR_8->backup_mac;

  } else {
   VAR_12 = &VAR_8->src_sgl[VAR_8->src.nents - 1];

   VAR_8->icv_dma_addr = FUNC_5(VAR_12) +
    (*VAR_5 - VAR_10);
   VAR_8->icv_virt_addr = FUNC_6(VAR_12) +
    (*VAR_5 - VAR_10);
  }

 } else {

  FUNC_1(VAR_11, VAR_4, VAR_8->dst.nents,
    VAR_8->dst_sgl, VAR_8->cryptlen,
    VAR_8->dst_offset, VAR_7,
    &VAR_8->dst.mlli_nents);
  FUNC_1(VAR_11, VAR_4, VAR_8->src.nents,
    VAR_8->src_sgl, VAR_8->cryptlen,
    VAR_8->src_offset, VAR_7,
    &VAR_8->src.mlli_nents);

  VAR_8->is_icv_fragmented =
   FUNC_3(VAR_8->dst.nents, VAR_10,
           *VAR_6);

  if (!VAR_8->is_icv_fragmented) {
   VAR_12 = &VAR_8->dst_sgl[VAR_8->dst.nents - 1];

   VAR_8->icv_dma_addr = FUNC_5(VAR_12) +
    (*VAR_6 - VAR_10);
   VAR_8->icv_virt_addr = FUNC_6(VAR_12) +
    (*VAR_6 - VAR_10);
  } else {
   VAR_8->icv_dma_addr = VAR_8->mac_buf_dma_addr;
   VAR_8->icv_virt_addr = VAR_8->mac_buf;
  }
 }
}
