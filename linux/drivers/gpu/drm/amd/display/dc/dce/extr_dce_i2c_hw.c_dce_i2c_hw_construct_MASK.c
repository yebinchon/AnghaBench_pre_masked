
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct dce_i2c_shift {int dummy; } ;
struct dce_i2c_registers {int dummy; } ;
struct dce_i2c_mask {int dummy; } ;
struct dce_i2c_hw {int reference_frequency; int engine_keep_power_up_count; int buffer_size; int setup_limit; scalar_t__ send_reset_length; void* default_speed; void* original_speed; scalar_t__ transaction_count; scalar_t__ buffer_used_bytes; struct dce_i2c_mask const* masks; struct dce_i2c_shift const* shifts; struct dce_i2c_registers const* regs; int engine_id; struct dc_context* ctx; } ;
struct dc_context {TYPE_3__* dc_bios; } ;
struct TYPE_4__ {int crystal_frequency; } ;
struct TYPE_5__ {TYPE_1__ pll_info; } ;
struct TYPE_6__ {TYPE_2__ fw_info; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(
 struct dce_i2c_hw *VAR_3,
 struct dc_context *VAR_4,
 uint32_t VAR_5,
 const struct dce_i2c_registers *VAR_6,
 const struct dce_i2c_shift *VAR_7,
 const struct dce_i2c_mask *VAR_8)
{
 VAR_3->ctx = VAR_4;
 VAR_3->engine_id = VAR_5;
 VAR_3->reference_frequency = (VAR_4->dc_bios->fw_info.pll_info.crystal_frequency) >> 1;
 VAR_3->regs = VAR_6;
 VAR_3->shifts = VAR_7;
 VAR_3->masks = VAR_8;
 VAR_3->buffer_used_bytes = 0;
 VAR_3->transaction_count = 0;
 VAR_3->engine_keep_power_up_count = 1;
 VAR_3->original_speed = VAR_0;
 VAR_3->default_speed = VAR_0;
 VAR_3->send_reset_length = 0;
 VAR_3->setup_limit = VAR_2;
 VAR_3->buffer_size = VAR_1;
}
