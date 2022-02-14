
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_vmhub {int vm_context0_cntl; } ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {struct amdgpu_vmhub* vmhub; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;


 size_t VAR_0 ;


 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2(struct amdgpu_device *VAR_17,
       struct amdgpu_irq_src *VAR_18, unsigned VAR_19,
       enum amdgpu_interrupt_state VAR_20)
{
 struct amdgpu_vmhub *VAR_21;
 u32 VAR_22, VAR_23, VAR_24[VAR_1], VAR_25;

 VAR_24[VAR_0] = VAR_6 |
  VAR_3 |
  VAR_5 |
  VAR_8 |
  VAR_7 |
  VAR_9 |
  VAR_4;

 VAR_24[VAR_2] = VAR_13 |
  VAR_10 |
  VAR_12 |
  VAR_15 |
  VAR_14 |
  VAR_16 |
  VAR_11;

 switch (VAR_20) {
 case 129:

  VAR_21 = &VAR_17->vmhub[VAR_2];
  for (VAR_25 = 0; VAR_25 < 16; VAR_25++) {
   VAR_23 = VAR_21->vm_context0_cntl + VAR_25;
   VAR_22 = FUNC_0(VAR_23);
   VAR_22 &= ~VAR_24[VAR_2];
   FUNC_1(VAR_23, VAR_22);
  }


  VAR_21 = &VAR_17->vmhub[VAR_0];
  for (VAR_25 = 0; VAR_25 < 16; VAR_25++) {
   VAR_23 = VAR_21->vm_context0_cntl + VAR_25;
   VAR_22 = FUNC_0(VAR_23);
   VAR_22 &= ~VAR_24[VAR_0];
   FUNC_1(VAR_23, VAR_22);
  }
  break;
 case 128:

  VAR_21 = &VAR_17->vmhub[VAR_2];
  for (VAR_25 = 0; VAR_25 < 16; VAR_25++) {
   VAR_23 = VAR_21->vm_context0_cntl + VAR_25;
   VAR_22 = FUNC_0(VAR_23);
   VAR_22 |= VAR_24[VAR_2];
   FUNC_1(VAR_23, VAR_22);
  }


  VAR_21 = &VAR_17->vmhub[VAR_0];
  for (VAR_25 = 0; VAR_25 < 16; VAR_25++) {
   VAR_23 = VAR_21->vm_context0_cntl + VAR_25;
   VAR_22 = FUNC_0(VAR_23);
   VAR_22 |= VAR_24[VAR_0];
   FUNC_1(VAR_23, VAR_22);
  }
  break;
 default:
  break;
 }

 return 0;
}
