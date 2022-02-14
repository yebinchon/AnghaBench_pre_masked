
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int mlli_dma_addr; scalar_t__ mlli_virt_addr; int curr_pool; } ;
struct TYPE_3__ {scalar_t__ iv_dma_addr; } ;
struct cipher_req_ctx {scalar_t__ dma_buf_type; int out_nents; int in_nents; TYPE_2__ mlli_params; TYPE_1__ gen_ctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,...) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct device*,struct scatterlist*,int ,int ) ;
 int FUNC_3 (struct device*,scalar_t__,unsigned int,int ) ;
 int FUNC_4 (struct scatterlist*) ;

void FUNC_5(struct device *VAR_2, void *VAR_3,
    unsigned int VAR_4, struct scatterlist *VAR_5,
    struct scatterlist *VAR_6)
{
 struct cipher_req_ctx *VAR_7 = (struct cipher_req_ctx *)VAR_3;

 if (VAR_7->gen_ctx.iv_dma_addr) {
  FUNC_0(VAR_2, "Unmapped iv: iv_dma_addr=%pad iv_size=%u\n",
   &VAR_7->gen_ctx.iv_dma_addr, VAR_4);
  FUNC_3(VAR_2, VAR_7->gen_ctx.iv_dma_addr,
     VAR_4, VAR_1);
 }

 if (VAR_7->dma_buf_type == VAR_0 &&
     VAR_7->mlli_params.mlli_virt_addr) {
  FUNC_1(VAR_7->mlli_params.curr_pool,
         VAR_7->mlli_params.mlli_virt_addr,
         VAR_7->mlli_params.mlli_dma_addr);
 }

 FUNC_2(VAR_2, VAR_5, VAR_7->in_nents, VAR_1);
 FUNC_0(VAR_2, "Unmapped req->src=%pK\n", FUNC_4(VAR_5));

 if (VAR_5 != VAR_6) {
  FUNC_2(VAR_2, VAR_6, VAR_7->out_nents, VAR_1);
  FUNC_0(VAR_2, "Unmapped req->dst=%pK\n", FUNC_4(VAR_6));
 }
}
