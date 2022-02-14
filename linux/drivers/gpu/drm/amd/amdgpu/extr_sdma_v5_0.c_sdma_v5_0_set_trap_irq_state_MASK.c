
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct amdgpu_device*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_5,
     struct amdgpu_irq_src *VAR_6,
     unsigned VAR_7,
     enum amdgpu_interrupt_state VAR_8)
{
 u32 VAR_9;

 u32 VAR_10 = (VAR_7 == VAR_1) ?
  FUNC_3(VAR_5, 0, VAR_4) :
  FUNC_3(VAR_5, 1, VAR_4);

 VAR_9 = FUNC_1(VAR_10);
 VAR_9 = FUNC_0(VAR_9, VAR_2, VAR_3,
         VAR_8 == VAR_0 ? 1 : 0);
 FUNC_2(VAR_10, VAR_9);

 return 0;
}
