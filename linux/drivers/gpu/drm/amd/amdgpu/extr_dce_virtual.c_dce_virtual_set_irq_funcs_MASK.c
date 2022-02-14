
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * funcs; scalar_t__ num_types; } ;
struct amdgpu_device {TYPE_1__ crtc_irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_2)
{
 VAR_2->crtc_irq.num_types = VAR_0 + 1;
 VAR_2->crtc_irq.funcs = &VAR_1;
}
