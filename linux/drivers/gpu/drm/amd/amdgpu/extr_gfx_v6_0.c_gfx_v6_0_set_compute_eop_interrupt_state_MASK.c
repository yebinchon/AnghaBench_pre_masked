
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_4,
           int VAR_5,
           enum amdgpu_interrupt_state VAR_6)
{
 u32 VAR_7;
 switch (VAR_6){
 case 129:
  if (VAR_5 == 0) {
   VAR_7 = FUNC_1(VAR_2);
   VAR_7 &= ~VAR_0;
   FUNC_2(VAR_2, VAR_7);
   break;
  } else {
   VAR_7 = FUNC_1(VAR_3);
   VAR_7 &= ~VAR_1;
   FUNC_2(VAR_3, VAR_7);
   break;

  }
 case 128:
  if (VAR_5 == 0) {
   VAR_7 = FUNC_1(VAR_2);
   VAR_7 |= VAR_0;
   FUNC_2(VAR_2, VAR_7);
   break;
  } else {
   VAR_7 = FUNC_1(VAR_3);
   VAR_7 |= VAR_1;
   FUNC_2(VAR_3, VAR_7);
   break;

  }

 default:
  FUNC_0();
  break;

 }
}
