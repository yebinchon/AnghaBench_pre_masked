
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_2,
       struct amdgpu_irq_src *VAR_3,
       unsigned VAR_4,
       enum amdgpu_interrupt_state VAR_5)
{
 if (VAR_4 > VAR_0)
  return -VAR_1;

 FUNC_0(VAR_2, VAR_4, VAR_5);

 return 0;
}
