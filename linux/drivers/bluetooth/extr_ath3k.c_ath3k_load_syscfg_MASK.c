
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct firmware {int dummy; } ;
struct ath3k_version {int ref_clock; int rom_version; } ;


 int VAR_0 ;



 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_device*,unsigned char*) ;
 int FUNC_2 (struct usb_device*,struct ath3k_version*) ;
 int FUNC_3 (struct usb_device*,struct firmware const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,char*,int *) ;
 int FUNC_7 (char*,int,char*,int,int,char*) ;

__attribute__((used)) static int FUNC_8(struct usb_device *VAR_2)
{
 unsigned char VAR_3;
 char VAR_4[VAR_0];
 const struct firmware *VAR_5;
 struct ath3k_version VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_2, &VAR_3);
 if (VAR_8 < 0) {
  FUNC_0("Can't get state to change to load configuration err");
  return -VAR_1;
 }

 VAR_8 = FUNC_2(VAR_2, &VAR_6);
 if (VAR_8 < 0) {
  FUNC_0("Can't get version to change to load ram patch err");
  return VAR_8;
 }

 switch (VAR_6.ref_clock) {

 case 129:
  VAR_7 = 26;
  break;
 case 128:
  VAR_7 = 40;
  break;
 case 130:
  VAR_7 = 19;
  break;
 default:
  VAR_7 = 0;
  break;
 }

 FUNC_7(VAR_4, VAR_0, "ar3k/ramps_0x%08x_%d%s",
  FUNC_4(VAR_6.rom_version), VAR_7, ".dfu");

 VAR_8 = FUNC_6(&VAR_5, VAR_4, &VAR_2->dev);
 if (VAR_8 < 0) {
  FUNC_0("Configuration file not found %s", VAR_4);
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_2, VAR_5);
 FUNC_5(VAR_5);

 return VAR_8;
}
