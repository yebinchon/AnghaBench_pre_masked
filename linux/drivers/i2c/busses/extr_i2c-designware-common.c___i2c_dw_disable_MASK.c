
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct dw_i2c_dev*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dw_i2c_dev*,int ) ;
 int FUNC_3 (int,int) ;

void FUNC_4(struct dw_i2c_dev *VAR_1)
{
 int VAR_2 = 100;

 do {
  FUNC_0(VAR_1);




  if ((FUNC_2(VAR_1, VAR_0) & 1) == 0)
   return;






  FUNC_3(25, 250);
 } while (VAR_2--);

 FUNC_1(VAR_1->dev, "timeout in disabling adapter\n");
}
