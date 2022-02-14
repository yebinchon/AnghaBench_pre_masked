
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_muic_info {int dev; int edev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct max8997_muic_info*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct max8997_muic_info *VAR_3,
   int VAR_4, bool VAR_5)
{
 int VAR_6 = 0;

 VAR_6 = FUNC_2(VAR_3, VAR_0, VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "failed to update muic register\n");
  return VAR_6;
 }

 switch (VAR_4) {
 case 129:
 case 128:
  FUNC_1(VAR_3->edev, VAR_2, VAR_5);
  break;
 default:
  FUNC_0(VAR_3->dev, "failed to detect %s dock device\n",
   VAR_5 ? "attached" : "detached");
  return -VAR_1;
 }

 return 0;
}
