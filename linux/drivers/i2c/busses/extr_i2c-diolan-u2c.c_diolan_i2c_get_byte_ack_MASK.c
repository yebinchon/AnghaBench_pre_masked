
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_diolan_u2c {int * ibuffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_diolan_u2c*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_diolan_u2c *VAR_2, bool VAR_3,
       u8 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_3, 1);
 if (VAR_5 > 0)
  *VAR_4 = VAR_2->ibuffer[0];
 else if (VAR_5 == 0)
  VAR_5 = -VAR_1;

 return VAR_5;
}
