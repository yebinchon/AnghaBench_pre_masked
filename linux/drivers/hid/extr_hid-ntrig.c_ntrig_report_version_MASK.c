
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hid_device*,char*,char*,unsigned char,unsigned char,unsigned char,unsigned char) ;
 struct usb_device* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned char*,char*) ;
 int FUNC_5 (struct usb_device*,int ,int ,int,int,int,unsigned char*,int,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_7(struct hid_device *VAR_6)
{
 int VAR_7;
 char VAR_8[20];
 struct usb_device *VAR_9 = FUNC_1(VAR_6);
 unsigned char *VAR_10 = FUNC_3(8, VAR_0);

 if (!VAR_10)
  goto err_free;

 VAR_7 = FUNC_5(VAR_9, FUNC_6(VAR_9, 0),
         VAR_4,
         VAR_5 | VAR_3 |
         VAR_2,
         0x30c, 1, VAR_10, 8,
         VAR_1);

 if (VAR_7 == 8) {
  VAR_7 = FUNC_4(&VAR_10[2], VAR_8);

  FUNC_0(VAR_6, "Firmware version: %s (%02x%02x %02x%02x)\n",
    VAR_8, VAR_10[2], VAR_10[3], VAR_10[4], VAR_10[5]);
 }

err_free:
 FUNC_2(VAR_10);
}
