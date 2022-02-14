
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enable; } ;
union emu_se_enable {scalar_t__ value; TYPE_2__ s; } ;
struct TYPE_3__ {int enable; } ;
union emu_ae_enable {scalar_t__ value; TYPE_1__ s; } ;
struct nitrox_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct nitrox_device*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nitrox_device *VAR_1)
{
 union emu_se_enable VAR_2;
 union emu_ae_enable VAR_3;
 int VAR_4;


 VAR_3.value = 0;
 VAR_3.s.enable = 0xfffff;


 VAR_2.value = 0;
 VAR_2.s.enable = 0xffff;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_2(VAR_1, FUNC_0(VAR_4), VAR_3.value);
  FUNC_2(VAR_1, FUNC_1(VAR_4), VAR_2.value);
 }
}
