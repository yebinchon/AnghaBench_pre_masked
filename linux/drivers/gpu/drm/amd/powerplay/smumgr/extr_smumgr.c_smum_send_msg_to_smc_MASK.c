
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct pp_hwmgr {TYPE_1__* smumgr_funcs; } ;
struct TYPE_2__ {int (* send_msg_to_smc ) (struct pp_hwmgr*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ) ;

int FUNC_1(struct pp_hwmgr *VAR_1, uint16_t VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_1->smumgr_funcs->send_msg_to_smc == ((void*)0))
  return -VAR_0;

 return VAR_1->smumgr_funcs->send_msg_to_smc(VAR_1, VAR_2);
}
