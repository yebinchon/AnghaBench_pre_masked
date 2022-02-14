
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct i2c_adapter {int dummy; } ;
struct amdgpu_i2c_bus_rec {int mask_clk_mask; int mask_data_mask; int mask_data_reg; int mask_clk_reg; } ;
struct amdgpu_i2c_chan {int mutex; struct amdgpu_i2c_bus_rec rec; TYPE_1__* dev; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {struct amdgpu_device* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct amdgpu_i2c_chan* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct i2c_adapter *VAR_0)
{
 struct amdgpu_i2c_chan *VAR_1 = FUNC_2(VAR_0);
 struct amdgpu_device *VAR_2 = VAR_1->dev->dev_private;
 struct amdgpu_i2c_bus_rec *VAR_3 = &VAR_1->rec;
 uint32_t VAR_4;


 VAR_4 = FUNC_0(VAR_3->mask_clk_reg) & ~VAR_3->mask_clk_mask;
 FUNC_1(VAR_3->mask_clk_reg, VAR_4);
 VAR_4 = FUNC_0(VAR_3->mask_clk_reg);

 VAR_4 = FUNC_0(VAR_3->mask_data_reg) & ~VAR_3->mask_data_mask;
 FUNC_1(VAR_3->mask_data_reg, VAR_4);
 VAR_4 = FUNC_0(VAR_3->mask_data_reg);

 FUNC_3(&VAR_1->mutex);
}
