
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_dmac_desc {int node; } ;
struct TYPE_2__ {int lock; } ;
struct usb_dmac_chan {TYPE_1__ vc; int desc_freed; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct usb_dmac_chan *VAR_0,
         struct usb_dmac_desc *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->vc.lock, VAR_2);
 FUNC_0(&VAR_1->node, &VAR_0->desc_freed);
 FUNC_2(&VAR_0->vc.lock, VAR_2);
}
