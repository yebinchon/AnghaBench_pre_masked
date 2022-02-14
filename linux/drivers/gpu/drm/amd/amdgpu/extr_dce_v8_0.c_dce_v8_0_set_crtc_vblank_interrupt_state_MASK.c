
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int num_crtc; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_8,
           int VAR_9,
           enum amdgpu_interrupt_state VAR_10)
{
 u32 VAR_11, VAR_12;

 if (VAR_9 >= VAR_8->mode_info.num_crtc) {
  FUNC_0("invalid crtc %d\n", VAR_9);
  return;
 }

 switch (VAR_9) {
 case 0:
  VAR_11 = VAR_0;
  break;
 case 1:
  VAR_11 = VAR_1;
  break;
 case 2:
  VAR_11 = VAR_2;
  break;
 case 3:
  VAR_11 = VAR_3;
  break;
 case 4:
  VAR_11 = VAR_4;
  break;
 case 5:
  VAR_11 = VAR_5;
  break;
 default:
  FUNC_0("invalid crtc %d\n", VAR_9);
  return;
 }

 switch (VAR_10) {
 case 129:
  VAR_12 = FUNC_1(VAR_7 + VAR_11);
  VAR_12 &= ~VAR_6;
  FUNC_2(VAR_7 + VAR_11, VAR_12);
  break;
 case 128:
  VAR_12 = FUNC_1(VAR_7 + VAR_11);
  VAR_12 |= VAR_6;
  FUNC_2(VAR_7 + VAR_11, VAR_12);
  break;
 default:
  break;
 }
}
