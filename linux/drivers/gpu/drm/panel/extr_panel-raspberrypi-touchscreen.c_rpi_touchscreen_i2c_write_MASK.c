
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rpi_touchscreen {TYPE_1__* dsi; int i2c; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rpi_touchscreen *VAR_0,
          u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->i2c, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_0(&VAR_0->dsi->dev, "I2C write failed: %d\n", VAR_3);
}
