
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_2__ {unsigned int num_hpd; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_3,
         struct amdgpu_irq_src *VAR_4,
         unsigned VAR_5,
         enum amdgpu_interrupt_state VAR_6)
{
 u32 VAR_7;

 if (VAR_5 >= VAR_3->mode_info.num_hpd) {
  FUNC_0("invalid hdp %d\n", VAR_5);
  return 0;
 }

 switch (VAR_6) {
 case 129:
  VAR_7 = FUNC_1(VAR_2 + VAR_1[VAR_5]);
  VAR_7 &= ~VAR_0;
  FUNC_2(VAR_2 + VAR_1[VAR_5], VAR_7);
  break;
 case 128:
  VAR_7 = FUNC_1(VAR_2 + VAR_1[VAR_5]);
  VAR_7 |= VAR_0;
  FUNC_2(VAR_2 + VAR_1[VAR_5], VAR_7);
  break;
 default:
  break;
 }

 return 0;
}
