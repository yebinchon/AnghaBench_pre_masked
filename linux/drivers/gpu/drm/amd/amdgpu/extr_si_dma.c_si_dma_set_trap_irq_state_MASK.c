
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_4,
     struct amdgpu_irq_src *VAR_5,
     unsigned VAR_6,
     enum amdgpu_interrupt_state VAR_7)
{
 u32 VAR_8;

 switch (VAR_6) {
 case 129:
  switch (VAR_7) {
  case 131:
   VAR_8 = FUNC_0(VAR_2 + VAR_0);
   VAR_8 &= ~VAR_3;
   FUNC_1(VAR_2 + VAR_0, VAR_8);
   break;
  case 130:
   VAR_8 = FUNC_0(VAR_2 + VAR_0);
   VAR_8 |= VAR_3;
   FUNC_1(VAR_2 + VAR_0, VAR_8);
   break;
  default:
   break;
  }
  break;
 case 128:
  switch (VAR_7) {
  case 131:
   VAR_8 = FUNC_0(VAR_2 + VAR_1);
   VAR_8 &= ~VAR_3;
   FUNC_1(VAR_2 + VAR_1, VAR_8);
   break;
  case 130:
   VAR_8 = FUNC_0(VAR_2 + VAR_1);
   VAR_8 |= VAR_3;
   FUNC_1(VAR_2 + VAR_1, VAR_8);
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
