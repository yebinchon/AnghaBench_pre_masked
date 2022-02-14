
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_au1550_data {int xfer_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_au1550_data*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct i2c_au1550_data *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < 2 * VAR_3->xfer_timeout; VAR_4++) {
  if ((FUNC_0(VAR_3, VAR_1) & VAR_2) != 0)
   return 0;
  FUNC_1(1);
 }

 return -VAR_0;
}
