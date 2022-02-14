
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_3,
          struct amdgpu_irq_src *VAR_4,
          unsigned VAR_5,
          enum amdgpu_interrupt_state VAR_6)
{
 u32 VAR_7;

 switch (VAR_5) {
 case 128:
  switch (VAR_6) {
  case 131:
   VAR_7 = FUNC_0(VAR_2);
   VAR_7 &= ~VAR_0;
   FUNC_1(VAR_2, VAR_7);
   break;
  case 130:
   VAR_7 = FUNC_0(VAR_2);
   VAR_7 |= VAR_0;
   FUNC_1(VAR_2, VAR_7);
   break;
  default:
   break;
  }
  break;

 case 129:
  switch (VAR_6) {
  case 131:
   VAR_7 = FUNC_0(VAR_2);
   VAR_7 &= ~VAR_1;
   FUNC_1(VAR_2, VAR_7);
   break;
  case 130:
   VAR_7 = FUNC_0(VAR_2);
   VAR_7 |= VAR_1;
   FUNC_1(VAR_2, VAR_7);
   break;
  default:
   break;
  }
  break;

 default:
  break;
 }
 return 0;
}
