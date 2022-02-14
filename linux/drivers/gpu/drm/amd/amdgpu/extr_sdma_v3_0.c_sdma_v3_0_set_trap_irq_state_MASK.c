
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;






 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_5,
     struct amdgpu_irq_src *VAR_6,
     unsigned VAR_7,
     enum amdgpu_interrupt_state VAR_8)
{
 u32 VAR_9;

 switch (VAR_7) {
 case 129:
  switch (VAR_8) {
  case 131:
   VAR_9 = FUNC_1(VAR_4 + VAR_1);
   VAR_9 = FUNC_0(VAR_9, VAR_0, VAR_3, 0);
   FUNC_2(VAR_4 + VAR_1, VAR_9);
   break;
  case 130:
   VAR_9 = FUNC_1(VAR_4 + VAR_1);
   VAR_9 = FUNC_0(VAR_9, VAR_0, VAR_3, 1);
   FUNC_2(VAR_4 + VAR_1, VAR_9);
   break;
  default:
   break;
  }
  break;
 case 128:
  switch (VAR_8) {
  case 131:
   VAR_9 = FUNC_1(VAR_4 + VAR_2);
   VAR_9 = FUNC_0(VAR_9, VAR_0, VAR_3, 0);
   FUNC_2(VAR_4 + VAR_2, VAR_9);
   break;
  case 130:
   VAR_9 = FUNC_1(VAR_4 + VAR_2);
   VAR_9 = FUNC_0(VAR_9, VAR_0, VAR_3, 1);
   FUNC_2(VAR_4 + VAR_2, VAR_9);
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
