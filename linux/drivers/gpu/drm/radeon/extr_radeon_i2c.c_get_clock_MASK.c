
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_i2c_bus_rec {int y_clk_mask; int y_clk_reg; } ;
struct radeon_i2c_chan {struct radeon_i2c_bus_rec rec; TYPE_1__* dev; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 struct radeon_i2c_chan *VAR_1 = VAR_0;
 struct radeon_device *VAR_2 = VAR_1->dev->dev_private;
 struct radeon_i2c_bus_rec *VAR_3 = &VAR_1->rec;
 uint32_t VAR_4;


 VAR_4 = FUNC_0(VAR_3->y_clk_reg);
 VAR_4 &= VAR_3->y_clk_mask;

 return (VAR_4 != 0);
}
