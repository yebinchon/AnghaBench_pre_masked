
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {int adapter; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_i2c_dev*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct dw_i2c_dev *VAR_4)
{
 int VAR_5 = VAR_3;

 while (FUNC_1(VAR_4, VAR_0) & VAR_1) {
  if (VAR_5 <= 0) {
   FUNC_0(VAR_4->dev, "timeout waiting for bus ready\n");
   FUNC_2(&VAR_4->adapter);

   if (FUNC_1(VAR_4, VAR_0) & VAR_1)
    return -VAR_2;
   return 0;
  }
  VAR_5--;
  FUNC_3(1000, 1100);
 }

 return 0;
}
