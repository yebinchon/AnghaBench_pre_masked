
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_2,
           struct amdgpu_irq_src *VAR_3,
           unsigned VAR_4,
           enum amdgpu_interrupt_state VAR_5)
{
 u32 VAR_6;

 switch (VAR_5) {
 case 129:
  VAR_6 = FUNC_0(VAR_1);
  VAR_6 &= ~VAR_0;
  FUNC_1(VAR_1, VAR_6);
  break;
 case 128:
  VAR_6 = FUNC_0(VAR_1);
  VAR_6 |= VAR_0;
  FUNC_1(VAR_1, VAR_6);
  break;
 default:
  break;
 }

 return 0;
}
