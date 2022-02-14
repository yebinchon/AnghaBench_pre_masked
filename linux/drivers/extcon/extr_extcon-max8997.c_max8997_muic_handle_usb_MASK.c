
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_muic_info {int dev; int edev; int path_usb; } ;
typedef enum max8997_muic_usb_type { ____Placeholder_max8997_muic_usb_type } max8997_muic_usb_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct max8997_muic_info*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct max8997_muic_info *VAR_4,
   enum max8997_muic_usb_type VAR_5, bool VAR_6)
{
 int VAR_7 = 0;

 VAR_7 = FUNC_2(VAR_4, VAR_4->path_usb, VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4->dev, "failed to update muic register\n");
  return VAR_7;
 }

 switch (VAR_5) {
 case 128:
  FUNC_1(VAR_4->edev, VAR_3, VAR_6);
  break;
 case 129:
  FUNC_1(VAR_4->edev, VAR_2, VAR_6);
  FUNC_1(VAR_4->edev, VAR_1,
     VAR_6);
  break;
 default:
  FUNC_0(VAR_4->dev, "failed to detect %s usb cable\n",
   VAR_6 ? "attached" : "detached");
  return -VAR_0;
 }

 return 0;
}
