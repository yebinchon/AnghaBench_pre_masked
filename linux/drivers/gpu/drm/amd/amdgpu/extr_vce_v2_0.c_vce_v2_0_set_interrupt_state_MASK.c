
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_3,
     struct amdgpu_irq_src *VAR_4,
     unsigned VAR_5,
     enum amdgpu_interrupt_state VAR_6)
{
 uint32_t VAR_7 = 0;

 if (VAR_6 == VAR_0)
  VAR_7 |= VAR_1;

 FUNC_0(VAR_2, VAR_7, ~VAR_1);
 return 0;
}
