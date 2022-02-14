
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_desc {int node; } ;
struct dw_edma_desc {int chunks_alloc; } ;
struct TYPE_2__ {int lock; } ;
struct dw_edma_chan {int request; TYPE_1__ vc; void* status; } ;





 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct dw_edma_chan*) ;
 int FUNC_1 (struct dw_edma_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_6 (TYPE_1__*) ;
 struct dw_edma_desc* FUNC_7 (struct virt_dma_desc*) ;

__attribute__((used)) static void FUNC_8(struct dw_edma_chan *VAR_3)
{
 struct dw_edma_desc *VAR_4;
 struct virt_dma_desc *VAR_5;
 unsigned long VAR_6;

 FUNC_1(VAR_3);

 FUNC_3(&VAR_3->vc.lock, VAR_6);
 VAR_5 = FUNC_6(&VAR_3->vc);
 if (VAR_5) {
  switch (VAR_3->request) {
  case 130:
   VAR_4 = FUNC_7(VAR_5);
   if (VAR_4->chunks_alloc) {
    VAR_3->status = VAR_0;
    FUNC_0(VAR_3);
   } else {
    FUNC_2(&VAR_5->node);
    FUNC_5(VAR_5);
    VAR_3->status = VAR_1;
   }
   break;

  case 128:
   FUNC_2(&VAR_5->node);
   FUNC_5(VAR_5);
   VAR_3->request = 130;
   VAR_3->status = VAR_1;
   break;

  case 129:
   VAR_3->request = 130;
   VAR_3->status = VAR_2;
   break;

  default:
   break;
  }
 }
 FUNC_4(&VAR_3->vc.lock, VAR_6);
}
