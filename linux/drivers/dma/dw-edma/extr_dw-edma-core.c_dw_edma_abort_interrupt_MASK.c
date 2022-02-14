
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_desc {int node; } ;
struct TYPE_2__ {int lock; } ;
struct dw_edma_chan {int status; int request; TYPE_1__ vc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dw_edma_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct dw_edma_chan *VAR_2)
{
 struct virt_dma_desc *VAR_3;
 unsigned long VAR_4;

 FUNC_0(VAR_2);

 FUNC_2(&VAR_2->vc.lock, VAR_4);
 VAR_3 = FUNC_5(&VAR_2->vc);
 if (VAR_3) {
  FUNC_1(&VAR_3->node);
  FUNC_4(VAR_3);
 }
 FUNC_3(&VAR_2->vc.lock, VAR_4);
 VAR_2->request = VAR_0;
 VAR_2->status = VAR_1;
}
