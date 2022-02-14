
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_dmac_sg {int mem_addr; unsigned int size; } ;
struct usb_dmac_desc {scalar_t__ direction; struct usb_dmac_sg* sg; } ;
struct usb_dmac_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_dmac_chan*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct usb_dmac_chan *VAR_3,
       struct usb_dmac_desc *VAR_4,
       int VAR_5)
{
 struct usb_dmac_sg *VAR_6 = VAR_4->sg + VAR_5;
 u32 VAR_7 = VAR_6->mem_addr & 0xffffffff;
 unsigned int VAR_8 = VAR_6->size;





 if (VAR_4->direction == VAR_0)
  VAR_8 -= FUNC_0(VAR_3, VAR_1) - VAR_7;
 else
  VAR_8 -= FUNC_0(VAR_3, VAR_2) - VAR_7;

 return VAR_8;
}
