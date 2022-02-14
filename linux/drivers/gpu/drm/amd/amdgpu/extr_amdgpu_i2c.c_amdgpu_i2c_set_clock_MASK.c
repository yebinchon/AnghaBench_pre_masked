
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_i2c_bus_rec {int en_clk_mask; int en_clk_reg; } ;
struct amdgpu_i2c_chan {struct amdgpu_i2c_bus_rec rec; TYPE_1__* dev; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {struct amdgpu_device* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1)
{
 struct amdgpu_i2c_chan *VAR_2 = VAR_0;
 struct amdgpu_device *VAR_3 = VAR_2->dev->dev_private;
 struct amdgpu_i2c_bus_rec *VAR_4 = &VAR_2->rec;
 uint32_t VAR_5;


 VAR_5 = FUNC_0(VAR_4->en_clk_reg) & ~VAR_4->en_clk_mask;
 VAR_5 |= VAR_1 ? 0 : VAR_4->en_clk_mask;
 FUNC_1(VAR_4->en_clk_reg, VAR_5);
}
