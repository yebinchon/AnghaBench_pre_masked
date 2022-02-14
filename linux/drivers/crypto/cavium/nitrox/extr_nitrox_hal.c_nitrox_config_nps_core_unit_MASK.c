
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ilk_disable; int cfg; } ;
union nps_core_gbl_vfcfg {unsigned long long value; TYPE_1__ s; } ;
struct nitrox_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nitrox_device*) ;
 int FUNC_1 (struct nitrox_device*,int ,unsigned long long) ;

void FUNC_2(struct nitrox_device *VAR_3)
{
 union nps_core_gbl_vfcfg VAR_4;


 FUNC_1(VAR_3, VAR_0, 1ULL);


 VAR_4.value = 0;
 VAR_4.s.ilk_disable = 1;
 VAR_4.s.cfg = VAR_2;
 FUNC_1(VAR_3, VAR_1, VAR_4.value);


 FUNC_0(VAR_3);
}
