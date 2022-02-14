
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct pp_hwmgr {TYPE_1__* smumgr_funcs; } ;
struct TYPE_2__ {int (* send_msg_to_smc_with_parameter ) (struct pp_hwmgr*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ) ;

int FUNC_1(struct pp_hwmgr *VAR_1,
     uint16_t VAR_2, uint32_t VAR_3)
{
 if (VAR_1 == ((void*)0) ||
  VAR_1->smumgr_funcs->send_msg_to_smc_with_parameter == ((void*)0))
  return -VAR_0;
 return VAR_1->smumgr_funcs->send_msg_to_smc_with_parameter(
      VAR_1, VAR_2, VAR_3);
}
