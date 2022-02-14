
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct amdgpu_vmhub {size_t vm_context0_cntl; } ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {size_t num_vmhubs; struct amdgpu_vmhub* vmhub; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (size_t,size_t) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_7,
     struct amdgpu_irq_src *VAR_8,
     unsigned VAR_9,
     enum amdgpu_interrupt_state VAR_10)
{
 struct amdgpu_vmhub *VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_14 = VAR_3 |
  VAR_0 |
  VAR_2 |
  VAR_5 |
  VAR_4 |
  VAR_6 |
  VAR_1;

 switch (VAR_10) {
 case 129:
  for (VAR_16 = 0; VAR_16 < VAR_7->num_vmhubs; VAR_16++) {
   VAR_11 = &VAR_7->vmhub[VAR_16];
   for (VAR_15 = 0; VAR_15 < 16; VAR_15++) {
    VAR_13 = VAR_11->vm_context0_cntl + VAR_15;
    VAR_12 = FUNC_0(VAR_13);
    VAR_12 &= ~VAR_14;
    FUNC_1(VAR_13, VAR_12);
   }
  }
  break;
 case 128:
  for (VAR_16 = 0; VAR_16 < VAR_7->num_vmhubs; VAR_16++) {
   VAR_11 = &VAR_7->vmhub[VAR_16];
   for (VAR_15 = 0; VAR_15 < 16; VAR_15++) {
    VAR_13 = VAR_11->vm_context0_cntl + VAR_15;
    VAR_12 = FUNC_0(VAR_13);
    VAR_12 |= VAR_14;
    FUNC_1(VAR_13, VAR_12);
   }
  }
 default:
  break;
 }

 return 0;
}
