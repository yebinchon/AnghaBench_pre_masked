
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int se_wd; } ;
union emu_wd_int_ena_w1s {scalar_t__ value; TYPE_1__ s; } ;
struct TYPE_4__ {int se_ge; int ae_ge; } ;
union emu_ge_int_ena_w1s {scalar_t__ value; TYPE_2__ s; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct nitrox_device*) ;
 int FUNC_3 (struct nitrox_device*,int ,scalar_t__) ;

void FUNC_4(struct nitrox_device *VAR_1)
{
 union emu_wd_int_ena_w1s VAR_2;
 union emu_ge_int_ena_w1s VAR_3;
 u64 VAR_4;
 int VAR_5;


 FUNC_2(VAR_1);


 VAR_3.value = 0;
 VAR_3.s.se_ge = 0xffff;
 VAR_3.s.ae_ge = 0xfffff;
 VAR_2.value = 0;
 VAR_2.s.se_wd = 1;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_1(VAR_5);
  FUNC_3(VAR_1, VAR_4, VAR_2.value);
  VAR_4 = FUNC_0(VAR_5);
  FUNC_3(VAR_1, VAR_4, VAR_3.value);
 }
}
