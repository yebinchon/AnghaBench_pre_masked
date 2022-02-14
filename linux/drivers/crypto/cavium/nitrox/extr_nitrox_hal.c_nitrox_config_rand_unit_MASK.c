
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ent_en; int rng_en; } ;
union efl_rnm_ctl_status {int value; TYPE_1__ s; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nitrox_device*,int ) ;
 int FUNC_1 (struct nitrox_device*,int ,int ) ;

void FUNC_2(struct nitrox_device *VAR_1)
{
 union efl_rnm_ctl_status VAR_2;
 u64 VAR_3;

 VAR_3 = VAR_0;
 VAR_2.value = FUNC_0(VAR_1, VAR_3);
 VAR_2.s.ent_en = 1;
 VAR_2.s.rng_en = 1;
 FUNC_1(VAR_1, VAR_3, VAR_2.value);
}
