
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct fsl_edma_chan {int idle; int status; TYPE_2__* edesc; int vchan; } ;
struct TYPE_4__ {TYPE_1__* tcd; } ;
struct TYPE_3__ {int vtcd; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsl_edma_chan*) ;
 int FUNC_1 (struct fsl_edma_chan*,int ) ;
 TYPE_2__* FUNC_2 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_3 (int *) ;

void FUNC_4(struct fsl_edma_chan *VAR_1)
{
 struct virt_dma_desc *VAR_2;

 VAR_2 = FUNC_3(&VAR_1->vchan);
 if (!VAR_2)
  return;
 VAR_1->edesc = FUNC_2(VAR_2);
 FUNC_1(VAR_1, VAR_1->edesc->tcd[0].vtcd);
 FUNC_0(VAR_1);
 VAR_1->status = VAR_0;
 VAR_1->idle = 0;
}
