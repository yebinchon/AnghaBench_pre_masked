
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_desc {int node; } ;
struct usb_dmac_chan {TYPE_1__* desc; int vc; } ;
struct TYPE_2__ {scalar_t__ sg_index; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct virt_dma_desc*) ;
 int FUNC_2 (struct usb_dmac_chan*,int ) ;
 struct virt_dma_desc* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usb_dmac_chan *VAR_0)
{
 struct virt_dma_desc *VAR_1;

 VAR_1 = FUNC_3(&VAR_0->vc);
 if (!VAR_1) {
  VAR_0->desc = ((void*)0);
  return;
 }






 FUNC_0(&VAR_1->node);

 VAR_0->desc = FUNC_1(VAR_1);
 VAR_0->desc->sg_index = 0;
 FUNC_2(VAR_0, 0);
}
