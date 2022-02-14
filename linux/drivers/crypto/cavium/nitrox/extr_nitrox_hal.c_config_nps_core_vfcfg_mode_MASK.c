
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cfg; } ;
union nps_core_gbl_vfcfg {int value; TYPE_1__ s; } ;
struct nitrox_device {int dummy; } ;
typedef enum vf_mode { ____Placeholder_vf_mode } vf_mode ;


 int VAR_0 ;
 int FUNC_0 (struct nitrox_device*,int ) ;
 int FUNC_1 (struct nitrox_device*,int ,int ) ;

void FUNC_2(struct nitrox_device *VAR_1, enum vf_mode VAR_2)
{
 union nps_core_gbl_vfcfg VAR_3;

 VAR_3.value = FUNC_0(VAR_1, VAR_0);
 VAR_3.s.cfg = VAR_2 & 0x7;

 FUNC_1(VAR_1, VAR_0, VAR_3.value);
}
