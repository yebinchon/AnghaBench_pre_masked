
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_irq_src {int dummy; } ;
struct TYPE_2__ {int dc; } ;
struct amdgpu_device {TYPE_1__ dm; } ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_1,
           struct amdgpu_irq_src *VAR_2,
           unsigned VAR_3,
           enum amdgpu_interrupt_state VAR_4)
{
 enum dc_irq_source VAR_5 = FUNC_0(VAR_3);
 bool VAR_6 = (VAR_4 == VAR_0);

 FUNC_1(VAR_1->dm.dc, VAR_5, VAR_6);
 return 0;
}
