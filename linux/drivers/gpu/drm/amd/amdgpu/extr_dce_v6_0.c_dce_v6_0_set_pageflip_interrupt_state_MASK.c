
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_2__ {unsigned int num_crtc; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_5,
       struct amdgpu_irq_src *VAR_6,
       unsigned VAR_7,
       enum amdgpu_interrupt_state VAR_8)
{
 u32 VAR_9;

 if (VAR_7 >= VAR_5->mode_info.num_crtc) {
  FUNC_0("invalid pageflip crtc %d\n", VAR_7);
  return -VAR_1;
 }

 VAR_9 = FUNC_1(VAR_4 + VAR_3[VAR_7]);
 if (VAR_8 == VAR_0)
  FUNC_2(VAR_4 + VAR_3[VAR_7],
         VAR_9 & ~VAR_2);
 else
  FUNC_2(VAR_4 + VAR_3[VAR_7],
         VAR_9 | VAR_2);

 return 0;
}
