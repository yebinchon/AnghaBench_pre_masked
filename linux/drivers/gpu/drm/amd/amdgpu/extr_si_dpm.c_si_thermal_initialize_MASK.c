
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ fan_pulses_per_revolution; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->pm.fan_pulses_per_revolution) {
  VAR_5 = FUNC_1(VAR_1) & ~VAR_2;
  VAR_5 |= FUNC_0(VAR_4->pm.fan_pulses_per_revolution -1);
  FUNC_3(VAR_1, VAR_5);
 }

 VAR_5 = FUNC_1(VAR_0) & ~VAR_3;
 VAR_5 |= FUNC_2(0x28);
 FUNC_3(VAR_0, VAR_5);
}
