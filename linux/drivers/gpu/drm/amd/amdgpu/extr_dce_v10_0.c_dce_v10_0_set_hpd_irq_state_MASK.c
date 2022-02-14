
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
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_4,
           struct amdgpu_irq_src *VAR_5,
           unsigned VAR_6,
           enum amdgpu_interrupt_state VAR_7)
{
 u32 VAR_8;

 if (VAR_6 >= VAR_4->mode_info.num_hpd) {
  FUNC_0("invalid hdp %d\n", VAR_6);
  return 0;
 }

 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_2(VAR_3 + VAR_2[VAR_6]);
  VAR_8 = FUNC_1(VAR_8, VAR_0, VAR_1, 0);
  FUNC_3(VAR_3 + VAR_2[VAR_6], VAR_8);
  break;
 case 128:
  VAR_8 = FUNC_2(VAR_3 + VAR_2[VAR_6]);
  VAR_8 = FUNC_1(VAR_8, VAR_0, VAR_1, 1);
  FUNC_3(VAR_3 + VAR_2[VAR_6], VAR_8);
  break;
 default:
  break;
 }

 return 0;
}
