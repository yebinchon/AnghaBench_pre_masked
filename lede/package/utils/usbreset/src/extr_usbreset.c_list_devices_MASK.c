
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbentry {int bus_num; int dev_num; int vendor_id; int product_id; char* product_name; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 struct usbentry* FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int,int,int,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 DIR *VAR_0 = FUNC_1("/sys/bus/usb/devices");
 struct usbentry *VAR_1;

 if (!VAR_0)
  return;

 while ((VAR_1 = FUNC_2(VAR_0)) != ((void*)0))
 {
  FUNC_3("  Number %03d/%03d  ID %04x:%04x  %s\n",
      VAR_1->bus_num, VAR_1->dev_num,
      VAR_1->vendor_id, VAR_1->product_id,
      VAR_1->product_name);
 }

 FUNC_0(VAR_0);
}
