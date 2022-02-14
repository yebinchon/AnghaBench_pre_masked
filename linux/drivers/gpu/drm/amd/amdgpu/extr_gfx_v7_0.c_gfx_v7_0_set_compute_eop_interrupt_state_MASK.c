
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_5,
           int VAR_6, int VAR_7,
           enum amdgpu_interrupt_state VAR_8)
{
 u32 VAR_9, VAR_10;







 if (VAR_6 == 1) {
  switch (VAR_7) {
  case 0:
   VAR_10 = VAR_1;
   break;
  case 1:
   VAR_10 = VAR_2;
   break;
  case 2:
   VAR_10 = VAR_3;
   break;
  case 3:
   VAR_10 = VAR_4;
   break;
  default:
   FUNC_0("invalid pipe %d\n", VAR_7);
   return;
  }
 } else {
  FUNC_0("invalid me %d\n", VAR_6);
  return;
 }

 switch (VAR_8) {
 case 129:
  VAR_9 = FUNC_1(VAR_10);
  VAR_9 &= ~VAR_0;
  FUNC_2(VAR_10, VAR_9);
  break;
 case 128:
  VAR_9 = FUNC_1(VAR_10);
  VAR_9 |= VAR_0;
  FUNC_2(VAR_10, VAR_9);
  break;
 default:
  break;
 }
}
