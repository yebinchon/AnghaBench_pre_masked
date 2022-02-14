
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ulptx_walk {int last_sg_len; int last_sg; } ;
struct ulptx_sgl {int dummy; } ;
struct hash_wr_param {int sg_len; int bfr_len; } ;
struct TYPE_2__ {int src_ofst; int srcsg; int dma_addr; scalar_t__ imm; } ;
struct chcr_ahash_req_ctx {TYPE_1__ hctx_wr; int reqbfr; } ;
struct ahash_request {int dummy; } ;


 struct chcr_ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int ,int ) ;
 int FUNC_4 (struct ulptx_walk*,int ,int ) ;
 int FUNC_5 (struct ulptx_walk*,int ,int ,int ) ;
 int FUNC_6 (struct ulptx_walk*) ;
 int FUNC_7 (struct ulptx_walk*,struct ulptx_sgl*) ;

void FUNC_8(struct ahash_request *VAR_0,
      struct ulptx_sgl *VAR_1,
      struct hash_wr_param *VAR_2)
{
 struct ulptx_walk VAR_3;
 struct chcr_ahash_req_ctx *VAR_4 = FUNC_0(VAR_0);

 if (VAR_4->hctx_wr.imm) {
  u8 *VAR_5 = (u8 *)VAR_1;

  if (VAR_2->bfr_len) {
   FUNC_1(VAR_5, VAR_4->reqbfr, VAR_2->bfr_len);
   VAR_5 += VAR_2->bfr_len;
  }

  FUNC_3(VAR_4->hctx_wr.srcsg,
       FUNC_2(VAR_4->hctx_wr.srcsg), VAR_5,
       VAR_2->sg_len, 0);
 } else {
  FUNC_7(&VAR_3, VAR_1);
  if (VAR_2->bfr_len)
   FUNC_4(&VAR_3, VAR_2->bfr_len,
         VAR_4->hctx_wr.dma_addr);
  FUNC_5(&VAR_3, VAR_4->hctx_wr.srcsg,
      VAR_2->sg_len, VAR_4->hctx_wr.src_ofst);
  VAR_4->hctx_wr.srcsg = VAR_3.last_sg;
  VAR_4->hctx_wr.src_ofst = VAR_3.last_sg_len;
  FUNC_6(&VAR_3);
 }
}
