
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_crtc; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_4,
           int VAR_5,
           enum amdgpu_interrupt_state VAR_6)
{
 u32 VAR_7;

 if (VAR_5 >= VAR_4->mode_info.num_crtc) {
  FUNC_0("invalid crtc %d\n", VAR_5);
  return;
 }

 switch (VAR_6) {
 case 129:
  VAR_7 = FUNC_2(VAR_3 + VAR_2[VAR_5]);
  VAR_7 = FUNC_1(VAR_7, VAR_0,
        VAR_1, 0);
  FUNC_3(VAR_3 + VAR_2[VAR_5], VAR_7);
  break;
 case 128:
  VAR_7 = FUNC_2(VAR_3 + VAR_2[VAR_5]);
  VAR_7 = FUNC_1(VAR_7, VAR_0,
        VAR_1, 1);
  FUNC_3(VAR_3 + VAR_2[VAR_5], VAR_7);
  break;
 default:
  break;
 }
}
