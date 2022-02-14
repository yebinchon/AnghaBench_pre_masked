
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce_i2c_shift {int dummy; } ;
struct dce_i2c_registers {int dummy; } ;
struct dce_i2c_mask {int dummy; } ;
struct dce_i2c_hw {int reference_frequency; int buffer_size; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int VAR_2 ;
 int FUNC_1 (struct dce_i2c_hw*,struct dc_context*,int,struct dce_i2c_registers const*,struct dce_i2c_shift const*,struct dce_i2c_mask const*) ;

void FUNC_2(
 struct dce_i2c_hw *VAR_3,
 struct dc_context *VAR_4,
 uint32_t VAR_5,
 const struct dce_i2c_registers *VAR_6,
 const struct dce_i2c_shift *VAR_7,
 const struct dce_i2c_mask *VAR_8)
{

 uint32_t VAR_9 = 0;

 FUNC_1(VAR_3,
   VAR_4,
   VAR_5,
   VAR_6,
   VAR_7,
   VAR_8);
 VAR_3->buffer_size = VAR_0;

 FUNC_0(VAR_1, VAR_2, &VAR_9);

 if (VAR_9 == 0)
  VAR_9 = 2;
 VAR_3->reference_frequency =
  (VAR_3->reference_frequency * 2) / VAR_9;
}
