
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_5,
     struct amdgpu_irq_src *VAR_6,
     unsigned VAR_7,
     enum amdgpu_interrupt_state VAR_8)
{
 u32 VAR_9 = FUNC_1(FUNC_2(VAR_3, 0, VAR_4));

 VAR_9 = FUNC_0(VAR_9, VAR_2, VAR_0,
    (VAR_8 == VAR_1) ? 1 : 0);
 FUNC_3(FUNC_2(VAR_3, 0, VAR_4), VAR_9);

 return 0;
}
