
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_muic_info {int edev; int dev; int path_uart; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct max8997_muic_info*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct max8997_muic_info *VAR_1,
   bool VAR_2)
{
 int VAR_3 = 0;


 VAR_3 = FUNC_2(VAR_1, VAR_1->path_uart, VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_1->dev, "failed to update muic register\n");
  return VAR_3;
 }

 FUNC_1(VAR_1->edev, VAR_0, VAR_2);

 return 0;
}
