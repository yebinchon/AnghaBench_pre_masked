
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_i2c_bus_rec {int mask_clk_mask; int mask_data_mask; int en_clk_mask; int en_data_mask; int y_clk_mask; int y_data_mask; int a_clk_mask; int a_data_mask; int hw_capable; int mm_i2c; int i2c_id; int valid; void* mask_clk_reg; void* a_data_reg; void* a_clk_reg; void* y_data_reg; void* y_clk_reg; void* en_data_reg; void* en_clk_reg; void* mask_data_reg; } ;
struct TYPE_5__ {scalar_t__ bfHW_Capable; } ;
struct TYPE_6__ {int ucAccess; TYPE_1__ sbfAccess; } ;
struct TYPE_7__ {int ucClkMaskShift; int ucDataMaskShift; int ucClkEnShift; int ucDataEnShift; int ucClkY_Shift; int ucDataY_Shift; int ucClkA_Shift; int ucDataA_Shift; TYPE_2__ sucI2cId; int usDataA_RegisterIndex; int usClkA_RegisterIndex; int usDataY_RegisterIndex; int usClkY_RegisterIndex; int usDataEnRegisterIndex; int usClkEnRegisterIndex; int usDataMaskRegisterIndex; int usClkMaskRegisterIndex; } ;
typedef TYPE_3__ ATOM_GPIO_I2C_ASSIGMENT ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_i2c_bus_rec*,int ,int) ;

__attribute__((used)) static struct amdgpu_i2c_bus_rec FUNC_2(ATOM_GPIO_I2C_ASSIGMENT *VAR_0)
{
 struct amdgpu_i2c_bus_rec VAR_1;

 FUNC_1(&VAR_1, 0, sizeof(struct amdgpu_i2c_bus_rec));

 VAR_1.mask_clk_reg = FUNC_0(VAR_0->usClkMaskRegisterIndex);
 VAR_1.mask_data_reg = FUNC_0(VAR_0->usDataMaskRegisterIndex);
 VAR_1.en_clk_reg = FUNC_0(VAR_0->usClkEnRegisterIndex);
 VAR_1.en_data_reg = FUNC_0(VAR_0->usDataEnRegisterIndex);
 VAR_1.y_clk_reg = FUNC_0(VAR_0->usClkY_RegisterIndex);
 VAR_1.y_data_reg = FUNC_0(VAR_0->usDataY_RegisterIndex);
 VAR_1.a_clk_reg = FUNC_0(VAR_0->usClkA_RegisterIndex);
 VAR_1.a_data_reg = FUNC_0(VAR_0->usDataA_RegisterIndex);
 VAR_1.mask_clk_mask = (1 << VAR_0->ucClkMaskShift);
 VAR_1.mask_data_mask = (1 << VAR_0->ucDataMaskShift);
 VAR_1.en_clk_mask = (1 << VAR_0->ucClkEnShift);
 VAR_1.en_data_mask = (1 << VAR_0->ucDataEnShift);
 VAR_1.y_clk_mask = (1 << VAR_0->ucClkY_Shift);
 VAR_1.y_data_mask = (1 << VAR_0->ucDataY_Shift);
 VAR_1.a_clk_mask = (1 << VAR_0->ucClkA_Shift);
 VAR_1.a_data_mask = (1 << VAR_0->ucDataA_Shift);

 if (VAR_0->sucI2cId.sbfAccess.bfHW_Capable)
  VAR_1.hw_capable = 1;
 else
  VAR_1.hw_capable = 0;

 if (VAR_0->sucI2cId.ucAccess == 0xa0)
  VAR_1.mm_i2c = 1;
 else
  VAR_1.mm_i2c = 0;

 VAR_1.i2c_id = VAR_0->sucI2cId.ucAccess;

 if (VAR_1.mask_clk_reg)
  VAR_1.valid = 1;
 else
  VAR_1.valid = 0;

 return VAR_1;
}
