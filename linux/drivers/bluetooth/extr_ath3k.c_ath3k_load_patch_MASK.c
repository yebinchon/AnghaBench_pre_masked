
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct firmware {scalar_t__ size; scalar_t__ data; } ;
struct ath3k_version {int build_version; int rom_version; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int FUNC_2 (struct usb_device*,unsigned char*) ;
 int FUNC_3 (struct usb_device*,struct ath3k_version*) ;
 int FUNC_4 (struct usb_device*,struct firmware const*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,char*,int *) ;
 int FUNC_9 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct usb_device *VAR_3)
{
 unsigned char VAR_4;
 char VAR_5[VAR_0];
 const struct firmware *VAR_6;
 struct ath3k_version VAR_7;
 __u32 VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_3, &VAR_4);
 if (VAR_10 < 0) {
  FUNC_1("Can't get state to change to load ram patch err");
  return VAR_10;
 }

 if (VAR_4 & VAR_1) {
  FUNC_0("Patch was already downloaded");
  return 0;
 }

 VAR_10 = FUNC_3(VAR_3, &VAR_7);
 if (VAR_10 < 0) {
  FUNC_1("Can't get version to change to load ram patch err");
  return VAR_10;
 }

 FUNC_9(VAR_5, VAR_0, "ar3k/AthrBT_0x%08x.dfu",
   FUNC_6(VAR_7.rom_version));

 VAR_10 = FUNC_8(&VAR_6, VAR_5, &VAR_3->dev);
 if (VAR_10 < 0) {
  FUNC_1("Patch file not found %s", VAR_5);
  return VAR_10;
 }

 VAR_8 = FUNC_5(VAR_6->data +
         VAR_6->size - 8);
 VAR_9 = FUNC_5(VAR_6->data +
           VAR_6->size - 4);

 if (VAR_8 != FUNC_6(VAR_7.rom_version) ||
     VAR_9 <= FUNC_6(VAR_7.build_version)) {
  FUNC_1("Patch file version did not match with firmware");
  FUNC_7(VAR_6);
  return -VAR_2;
 }

 VAR_10 = FUNC_4(VAR_3, VAR_6);
 FUNC_7(VAR_6);

 return VAR_10;
}
