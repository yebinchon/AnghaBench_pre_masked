
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_7,
           int VAR_8, int VAR_9,
           enum amdgpu_interrupt_state VAR_10)
{
 u32 VAR_11, VAR_12;







 if (VAR_8 == 1) {
  switch (VAR_9) {
  case 0:
   VAR_12 = FUNC_3(VAR_1, 0, VAR_3);
   break;
  case 1:
   VAR_12 = FUNC_3(VAR_1, 0, VAR_4);
   break;
  case 2:
   VAR_12 = FUNC_3(VAR_1, 0, VAR_5);
   break;
  case 3:
   VAR_12 = FUNC_3(VAR_1, 0, VAR_6);
   break;
  default:
   FUNC_0("invalid pipe %d\n", VAR_9);
   return;
  }
 } else {
  FUNC_0("invalid me %d\n", VAR_8);
  return;
 }

 switch (VAR_10) {
 case 129:
  VAR_11 = FUNC_2(VAR_12);
  VAR_11 = FUNC_1(VAR_11, VAR_0,
          VAR_2, 0);
  FUNC_4(VAR_12, VAR_11);
  break;
 case 128:
  VAR_11 = FUNC_2(VAR_12);
  VAR_11 = FUNC_1(VAR_11, VAR_0,
          VAR_2, 1);
  FUNC_4(VAR_12, VAR_11);
  break;
 default:
  break;
 }
}
