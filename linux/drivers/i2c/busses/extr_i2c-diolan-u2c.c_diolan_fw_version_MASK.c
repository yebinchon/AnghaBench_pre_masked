
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_diolan_u2c {scalar_t__* ibuffer; TYPE_1__* interface; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct i2c_diolan_u2c*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct i2c_diolan_u2c *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0, 1);
 if (VAR_2 >= 2)
  FUNC_0(&VAR_1->interface->dev,
    "Diolan U2C firmware version %u.%u\n",
    (unsigned int)VAR_1->ibuffer[0],
    (unsigned int)VAR_1->ibuffer[1]);
}
