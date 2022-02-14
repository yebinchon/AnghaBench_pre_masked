
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int length; } ;
struct mtk_ring {struct mtk_desc* res_prev; struct mtk_desc* res_base; struct mtk_desc* res_next; struct mtk_desc* cmd_base; struct mtk_desc* cmd_next; } ;
struct mtk_desc {int hdr; void* buf; void* tfm; int ct_hdr; void* ct; } ;
struct mtk_cryp {struct mtk_ring** ring; } ;
struct TYPE_5__ {int sg_len; struct scatterlist* sg; } ;
struct TYPE_4__ {int sg_len; struct scatterlist* sg; } ;
struct mtk_aes_rec {size_t id; int flags; TYPE_3__* ctx; TYPE_2__ dst; TYPE_1__ src; } ;
struct TYPE_6__ {int tfm_dma; int ct_hdr; int ct_dma; int ct_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (size_t) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct mtk_cryp*,int ,int ) ;
 int FUNC_7 (struct scatterlist*) ;
 struct scatterlist* FUNC_8 (struct scatterlist*) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct mtk_cryp *VAR_6, struct mtk_aes_rec *VAR_7)
{
 struct mtk_ring *VAR_8 = VAR_6->ring[VAR_7->id];
 struct mtk_desc *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 struct scatterlist *VAR_11 = VAR_7->src.sg, *VAR_12 = VAR_7->dst.sg;
 u32 VAR_13 = VAR_7->src.sg_len, VAR_14 = VAR_7->dst.sg_len;
 int VAR_15;


 for (VAR_15 = 0; VAR_15 < VAR_13; ++VAR_15, VAR_11 = FUNC_8(VAR_11)) {
  VAR_9 = VAR_8->cmd_next;
  VAR_9->hdr = FUNC_1(VAR_11->length);
  VAR_9->buf = FUNC_5(FUNC_7(VAR_11));

  if (VAR_15 == 0) {
   VAR_9->hdr |= VAR_3 |
        FUNC_3(VAR_7->ctx->ct_size);
   VAR_9->ct = FUNC_5(VAR_7->ctx->ct_dma);
   VAR_9->ct_hdr = VAR_7->ctx->ct_hdr;
   VAR_9->tfm = FUNC_5(VAR_7->ctx->tfm_dma);
  }


  if (++VAR_8->cmd_next == VAR_8->cmd_base + VAR_5)
   VAR_8->cmd_next = VAR_8->cmd_base;
 }
 VAR_9->hdr |= VAR_4;


 for (VAR_15 = 0; VAR_15 < VAR_14; ++VAR_15, VAR_12 = FUNC_8(VAR_12)) {
  VAR_10 = VAR_8->res_next;
  VAR_10->hdr = FUNC_1(VAR_12->length);
  VAR_10->buf = FUNC_5(FUNC_7(VAR_12));

  if (VAR_15 == 0)
   VAR_10->hdr |= VAR_3;


  if (++VAR_8->res_next == VAR_8->res_base + VAR_5)
   VAR_8->res_next = VAR_8->res_base;
 }
 VAR_10->hdr |= VAR_4;


 VAR_8->res_prev = VAR_10;


 if (VAR_7->flags & VAR_1)
  VAR_10->hdr += VAR_0;





 FUNC_9();

 FUNC_6(VAR_6, FUNC_4(VAR_7->id), FUNC_2(VAR_14));
 FUNC_6(VAR_6, FUNC_0(VAR_7->id), FUNC_2(VAR_13));

 return -VAR_2;
}
