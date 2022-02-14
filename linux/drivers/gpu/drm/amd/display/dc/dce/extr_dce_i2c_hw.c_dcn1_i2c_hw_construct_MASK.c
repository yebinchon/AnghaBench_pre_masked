
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce_i2c_shift {int dummy; } ;
struct dce_i2c_registers {int dummy; } ;
struct dce_i2c_mask {int dummy; } ;
struct dce_i2c_hw {int setup_limit; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dce_i2c_hw*,struct dc_context*,int ,struct dce_i2c_registers const*,struct dce_i2c_shift const*,struct dce_i2c_mask const*) ;

void FUNC_1(
 struct dce_i2c_hw *VAR_1,
 struct dc_context *VAR_2,
 uint32_t VAR_3,
 const struct dce_i2c_registers *VAR_4,
 const struct dce_i2c_shift *VAR_5,
 const struct dce_i2c_mask *VAR_6)
{
 FUNC_0(VAR_1,
   VAR_2,
   VAR_3,
   VAR_4,
   VAR_5,
   VAR_6);
 VAR_1->setup_limit = VAR_0;
}
