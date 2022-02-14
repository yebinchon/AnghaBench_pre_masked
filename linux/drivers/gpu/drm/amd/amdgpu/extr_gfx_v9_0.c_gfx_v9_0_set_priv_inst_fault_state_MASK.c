
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_3,
           struct amdgpu_irq_src *VAR_4,
           unsigned VAR_5,
           enum amdgpu_interrupt_state VAR_6)
{
 switch (VAR_6) {
 case 129:
 case 128:
  FUNC_0(VAR_1, 0, VAR_0,
          VAR_2,
          VAR_6 == 128 ? 1 : 0);
 default:
  break;
 }

 return 0;
}
