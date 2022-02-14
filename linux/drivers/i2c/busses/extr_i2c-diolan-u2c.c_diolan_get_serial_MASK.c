
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_diolan_u2c {TYPE_1__* interface; scalar_t__ ibuffer; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i2c_diolan_u2c*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_diolan_u2c *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_1(VAR_1, VAR_0, 1);
 if (VAR_2 >= 4) {
  VAR_3 = FUNC_2(*(u32 *)VAR_1->ibuffer);
  FUNC_0(&VAR_1->interface->dev,
    "Diolan U2C serial number %u\n", VAR_3);
 }
}
