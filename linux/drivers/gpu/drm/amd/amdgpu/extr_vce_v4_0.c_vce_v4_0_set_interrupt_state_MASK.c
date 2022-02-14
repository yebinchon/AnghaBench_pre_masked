
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_4,
     struct amdgpu_irq_src *VAR_5,
     unsigned VAR_6,
     enum amdgpu_interrupt_state VAR_7)
{
 uint32_t VAR_8 = 0;

 if (!FUNC_2(VAR_4)) {
  if (VAR_7 == VAR_0)
   VAR_8 |= VAR_2;

  FUNC_1(FUNC_0(VAR_1, 0, VAR_3), VAR_8,
    ~VAR_2);
 }
 return 0;
}
