
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u32 ;
struct virt_dma_desc {int dummy; } ;
struct fsl_edma_desc {int dirn; int n_tcds; TYPE_5__* tcd; } ;
struct TYPE_7__ {size_t chan_id; } ;
struct TYPE_8__ {TYPE_1__ chan; } ;
struct fsl_edma_chan {struct fsl_edma_desc* edesc; TYPE_6__* edma; TYPE_2__ vchan; } ;
struct edma_regs {TYPE_3__* tcd; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef size_t dma_addr_t ;
struct TYPE_12__ {struct edma_regs regs; } ;
struct TYPE_11__ {TYPE_4__* vtcd; } ;
struct TYPE_10__ {int daddr; int saddr; int biter; int nbytes; } ;
struct TYPE_9__ {int daddr; int saddr; } ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_6__*,int *) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static size_t FUNC_3(struct fsl_edma_chan *VAR_1,
  struct virt_dma_desc *VAR_2, bool VAR_3)
{
 struct fsl_edma_desc *VAR_4 = VAR_1->edesc;
 struct edma_regs *VAR_5 = &VAR_1->edma->regs;
 u32 VAR_6 = VAR_1->vchan.chan.chan_id;
 enum dma_transfer_direction VAR_7 = VAR_4->dirn;
 dma_addr_t VAR_8, VAR_9;
 size_t VAR_10, VAR_11;
 int VAR_12;


 for (VAR_10 = VAR_12 = 0; VAR_12 < VAR_1->edesc->n_tcds; VAR_12++)
  VAR_10 += FUNC_2(VAR_4->tcd[VAR_12].vtcd->nbytes)
   * FUNC_1(VAR_4->tcd[VAR_12].vtcd->biter);

 if (!VAR_3)
  return VAR_10;

 if (VAR_7 == VAR_0)
  VAR_8 = FUNC_0(VAR_1->edma, &VAR_5->tcd[VAR_6].saddr);
 else
  VAR_8 = FUNC_0(VAR_1->edma, &VAR_5->tcd[VAR_6].daddr);


 for (VAR_12 = 0; VAR_12 < VAR_1->edesc->n_tcds; VAR_12++) {
  VAR_11 = FUNC_2(VAR_4->tcd[VAR_12].vtcd->nbytes)
   * FUNC_1(VAR_4->tcd[VAR_12].vtcd->biter);
  if (VAR_7 == VAR_0)
   VAR_9 = FUNC_2(VAR_4->tcd[VAR_12].vtcd->saddr);
  else
   VAR_9 = FUNC_2(VAR_4->tcd[VAR_12].vtcd->daddr);

  VAR_10 -= VAR_11;
  if (VAR_8 >= VAR_9 && VAR_8 < VAR_9 + VAR_11) {
   VAR_10 += VAR_9 + VAR_11 - VAR_8;
   break;
  }
 }

 return VAR_10;
}
