
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_au1550_data {int xfer_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (struct i2c_au1550_data*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i2c_au1550_data*) ;

__attribute__((used)) static int FUNC_3(struct i2c_au1550_data *VAR_4, unsigned char *VAR_5)
{
 int VAR_6;

 if (FUNC_2(VAR_4))
  return -VAR_0;

 VAR_6 = VAR_4->xfer_timeout * 100;
 do {
  VAR_6--;
  if (VAR_6 <= 0)
   return -VAR_0;

  if ((FUNC_0(VAR_4, VAR_1) & VAR_2) == 0)
   VAR_6 = 0;
  else
   FUNC_1(1);
 } while (VAR_6 > 0);

 *VAR_5 = FUNC_0(VAR_4, VAR_3);

 return 0;
}
