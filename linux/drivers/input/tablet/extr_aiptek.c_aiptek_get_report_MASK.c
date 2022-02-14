
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct aiptek {int ifnum; int intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_device* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,unsigned char,int ,void*,int,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int
FUNC_3(struct aiptek *VAR_4,
    unsigned char VAR_5,
    unsigned char VAR_6, void *VAR_7, int VAR_8)
{
 struct usb_device *VAR_9 = FUNC_0(VAR_4->intf);

 return FUNC_1(VAR_9,
          FUNC_2(VAR_9, 0),
          VAR_2,
          VAR_3 | VAR_1 |
          VAR_0, (VAR_5 << 8) + VAR_6,
          VAR_4->ifnum, VAR_7, VAR_8, 5000);
}
