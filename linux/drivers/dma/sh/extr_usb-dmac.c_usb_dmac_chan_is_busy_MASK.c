
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_dmac_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_dmac_chan*,int ) ;

__attribute__((used)) static bool FUNC_1(struct usb_dmac_chan *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3, VAR_0);

 return (VAR_4 & (VAR_1 | VAR_2)) == VAR_1;
}
