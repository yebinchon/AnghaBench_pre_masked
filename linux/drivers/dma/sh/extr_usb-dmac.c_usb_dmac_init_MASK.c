
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_dmac {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usb_dmac*,int ) ;
 int FUNC_2 (struct usb_dmac*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct usb_dmac *VAR_4)
{
 u16 VAR_5;


 FUNC_2(VAR_4, VAR_1, VAR_3);

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if ((VAR_5 & (VAR_2 | VAR_3)) != VAR_3) {
  FUNC_0(VAR_4->dev, "DMAOR initialization failed.\n");
  return -VAR_0;
 }

 return 0;
}
