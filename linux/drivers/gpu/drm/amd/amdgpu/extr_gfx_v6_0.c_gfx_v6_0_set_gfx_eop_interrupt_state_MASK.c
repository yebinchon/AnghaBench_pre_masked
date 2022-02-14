
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2,
       enum amdgpu_interrupt_state VAR_3)
{
 u32 VAR_4;

 switch (VAR_3) {
 case 129:
  VAR_4 = FUNC_0(VAR_1);
  VAR_4 &= ~VAR_0;
  FUNC_1(VAR_1, VAR_4);
  break;
 case 128:
  VAR_4 = FUNC_0(VAR_1);
  VAR_4 |= VAR_0;
  FUNC_1(VAR_1, VAR_4);
  break;
 default:
  break;
 }
}
