
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_muic_info {int edev; int dev; int path_usb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,unsigned int,int) ;
 int FUNC_4 (struct max77693_muic_info*,int ,int*) ;
 int FUNC_5 (struct max77693_muic_info*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct max77693_muic_info *VAR_7,
  int VAR_8, bool VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;
 bool VAR_12;
 unsigned int VAR_13;

 FUNC_1(VAR_7->dev,
  "external connector is %s (adc:0x%02x)\n",
  VAR_9 ? "attached" : "detached", VAR_8);

 switch (VAR_8) {
 case 128:






  VAR_11 = FUNC_4(VAR_7,
    VAR_5, &VAR_12);
  if (VAR_9 && !VAR_11) {
   FUNC_2(VAR_7->dev,
    "Cannot detect external power supply\n");
   return 0;
  }
  VAR_10 = FUNC_5(VAR_7, VAR_7->path_usb, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  FUNC_3(VAR_7->edev, VAR_3, VAR_9);
  FUNC_3(VAR_7->edev, VAR_2, VAR_9);
  goto out;
 case 130:
  VAR_13 = VAR_3;
  break;
 case 129:
  VAR_13 = VAR_3;
  if (!VAR_9) {
   FUNC_3(VAR_7->edev, VAR_4, 0);
   FUNC_3(VAR_7->edev, VAR_1,
      0);
  }
  break;
 default:
  FUNC_0(VAR_7->dev, "failed to detect %s dock device\n",
   VAR_9 ? "attached" : "detached");
  return -VAR_0;
 }


 VAR_10 = FUNC_5(VAR_7, VAR_6,
     VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_3(VAR_7->edev, VAR_13, VAR_9);

out:
 return 0;
}
