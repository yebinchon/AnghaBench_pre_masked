
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * funcs; int * channel_idx_tbl; int channel_offs; int umc_inst_num; int channel_inst_num; int max_ras_err_cnt_per_query; } ;
struct amdgpu_device {int asic_type; TYPE_1__ umc; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_6)
{
 switch (VAR_6->asic_type) {
 case 128:
  VAR_6->umc.max_ras_err_cnt_per_query = VAR_2;
  VAR_6->umc.channel_inst_num = VAR_0;
  VAR_6->umc.umc_inst_num = VAR_3;
  VAR_6->umc.channel_offs = VAR_1;
  VAR_6->umc.channel_idx_tbl = &VAR_4[0][0];
  VAR_6->umc.funcs = &VAR_5;
  break;
 default:
  break;
 }
}
