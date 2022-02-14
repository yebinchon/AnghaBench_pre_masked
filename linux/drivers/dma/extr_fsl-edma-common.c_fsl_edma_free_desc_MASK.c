
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct fsl_edma_desc {int n_tcds; TYPE_2__* tcd; TYPE_1__* echan; } ;
struct TYPE_4__ {int ptcd; int vtcd; } ;
struct TYPE_3__ {int tcd_pool; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct fsl_edma_desc*) ;
 struct fsl_edma_desc* FUNC_2 (struct virt_dma_desc*) ;

void FUNC_3(struct virt_dma_desc *VAR_0)
{
 struct fsl_edma_desc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_1->n_tcds; VAR_2++)
  FUNC_0(VAR_1->echan->tcd_pool, VAR_1->tcd[VAR_2].vtcd,
         VAR_1->tcd[VAR_2].ptcd);
 FUNC_1(VAR_1);
}
