
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct mtk_hsdma_vdesc {int residue; } ;
struct TYPE_10__ {int lock; } ;
struct mtk_hsdma_vchan {int issue_synchronize; TYPE_4__ vc; int issue_completion; int desc_hw_processing; } ;
struct mtk_hsdma_pdesc {int desc2; int desc1; } ;
struct TYPE_9__ {size_t cur_rptr; struct mtk_hsdma_cb* cb; struct mtk_hsdma_pdesc* rxd; } ;
struct mtk_hsdma_pchan {int nr_free; TYPE_3__ ring; } ;
struct mtk_hsdma_device {int dma_requests; struct mtk_hsdma_vchan* vc; TYPE_1__* soc; struct mtk_hsdma_pchan* pc; } ;
struct mtk_hsdma_cb {TYPE_5__* vd; scalar_t__ flag; } ;
typedef int __le32 ;
struct TYPE_8__ {int chan; } ;
struct TYPE_11__ {int node; TYPE_2__ tx; } ;
struct TYPE_7__ {int ddone; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_2 (size_t,int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct mtk_hsdma_device*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (struct mtk_hsdma_device*,int ) ;
 int FUNC_13 (struct mtk_hsdma_device*,int ,int) ;
 int FUNC_14 (struct mtk_hsdma_device*,int ,int) ;
 int FUNC_15 (struct mtk_hsdma_device*,struct mtk_hsdma_vchan*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 struct mtk_hsdma_vchan* FUNC_18 (int ) ;
 struct mtk_hsdma_vdesc* FUNC_19 (TYPE_5__*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (TYPE_5__*) ;
 int FUNC_22 () ;

__attribute__((used)) static void FUNC_23(struct mtk_hsdma_device *VAR_5)
{
 struct mtk_hsdma_vchan *VAR_6;
 struct mtk_hsdma_pdesc *VAR_7;
 struct mtk_hsdma_vdesc *VAR_8;
 struct mtk_hsdma_pchan *VAR_9;
 struct mtk_hsdma_cb *VAR_10;
 int VAR_11 = VAR_0;
 __le32 VAR_12;
 u32 VAR_13;
 u16 VAR_14;


 VAR_13 = FUNC_12(VAR_5, VAR_3);
 if (FUNC_20(!(VAR_13 & VAR_2)))
  goto rx_done;

 VAR_9 = VAR_5->pc;
 while (VAR_11--) {
  VAR_14 = FUNC_2(VAR_9->ring.cur_rptr,
            VAR_0);
  VAR_7 = &VAR_9->ring.rxd[VAR_14];





  VAR_12 = FUNC_3(VAR_7->desc2);
  if (!(VAR_12 & VAR_5->soc->ddone))
   break;

  VAR_10 = &VAR_9->ring.cb[VAR_14];
  if (FUNC_20(!VAR_10->vd)) {
   FUNC_8(FUNC_9(VAR_5), "cb->vd cannot be null\n");
   break;
  }


  VAR_8 = FUNC_19(VAR_10->vd);
  VAR_8->residue -= FUNC_1(VAR_7->desc2);


  if (FUNC_0(VAR_10->flag)) {
   VAR_6 = FUNC_18(VAR_10->vd->tx.chan);

   FUNC_16(&VAR_6->vc.lock);


   FUNC_10(&VAR_10->vd->node);


   FUNC_21(VAR_10->vd);

   if (VAR_6->issue_synchronize &&
       FUNC_11(&VAR_6->desc_hw_processing)) {
    FUNC_7(&VAR_6->issue_completion);
    VAR_6->issue_synchronize = 0;
   }
   FUNC_17(&VAR_6->vc.lock);

   VAR_10->flag = 0;
  }

  VAR_10->vd = 0;





  FUNC_4(VAR_7->desc1, 0);
  FUNC_4(VAR_7->desc2, 0);
  VAR_9->ring.cur_rptr = VAR_14;


  FUNC_5(&VAR_9->nr_free);
 }


 FUNC_22();


 FUNC_14(VAR_5, VAR_4, VAR_9->ring.cur_rptr);






 if (FUNC_6(&VAR_9->nr_free) >= VAR_0 - 1)
  FUNC_14(VAR_5, VAR_3, VAR_13);


 for (VAR_11 = 0; VAR_11 < VAR_5->dma_requests; VAR_11++) {
  VAR_6 = &VAR_5->vc[VAR_11];
  FUNC_16(&VAR_6->vc.lock);
  FUNC_15(VAR_5, VAR_6);
  FUNC_17(&VAR_6->vc.lock);
 }

rx_done:

 FUNC_13(VAR_5, VAR_1, VAR_2);
}
