
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 size_t FUNC_0 (size_t*) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (size_t,size_t) ;
 size_t* VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_2,
  struct amdgpu_irq_src *VAR_3,
  unsigned VAR_4,
  enum amdgpu_interrupt_state VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = 0x7f;

 switch (VAR_5) {
 case 129:
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
   VAR_9 = VAR_0[VAR_7];
   VAR_8 = FUNC_1(VAR_9);
   VAR_8 &= ~VAR_6;
   FUNC_2(VAR_9, VAR_8);
  }
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
   VAR_9 = VAR_1[VAR_7];
   VAR_8 = FUNC_1(VAR_9);
   VAR_8 &= ~VAR_6;
   FUNC_2(VAR_9, VAR_8);
  }
  break;
 case 128:
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
   VAR_9 = VAR_0[VAR_7];
   VAR_8 = FUNC_1(VAR_9);
   VAR_8 |= VAR_6;
   FUNC_2(VAR_9, VAR_8);
  }
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
   VAR_9 = VAR_1[VAR_7];
   VAR_8 = FUNC_1(VAR_9);
   VAR_8 |= VAR_6;
   FUNC_2(VAR_9, VAR_8);
  }
  break;
 default:
  break;
 }

 return 0;
}
