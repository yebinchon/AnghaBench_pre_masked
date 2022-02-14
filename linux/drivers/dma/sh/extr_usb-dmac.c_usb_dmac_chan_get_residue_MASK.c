
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct virt_dma_desc {int dummy; } ;
struct usb_dmac_desc {int sg_index; int sg_len; TYPE_1__* sg; } ;
struct usb_dmac_chan {int vc; struct usb_dmac_desc* desc; } ;
typedef int dma_cookie_t ;
struct TYPE_2__ {scalar_t__ size; } ;


 struct usb_dmac_desc* FUNC_0 (struct virt_dma_desc*) ;
 scalar_t__ FUNC_1 (struct usb_dmac_chan*,struct usb_dmac_desc*,int) ;
 struct virt_dma_desc* FUNC_2 (int *,int ) ;

__attribute__((used)) static u32 FUNC_3(struct usb_dmac_chan *VAR_0,
         dma_cookie_t VAR_1)
{
 u32 VAR_2 = 0;
 struct virt_dma_desc *VAR_3;
 struct usb_dmac_desc *VAR_4 = VAR_0->desc;
 int VAR_5;

 if (!VAR_4) {
  VAR_3 = FUNC_2(&VAR_0->vc, VAR_1);
  if (!VAR_3)
   return 0;
  VAR_4 = FUNC_0(VAR_3);
 }


 for (VAR_5 = VAR_4->sg_index + 1; VAR_5 < VAR_4->sg_len; VAR_5++)
  VAR_2 += VAR_4->sg[VAR_5].size;


 VAR_2 += FUNC_1(VAR_0, VAR_4, VAR_4->sg_index);

 return VAR_2;
}
