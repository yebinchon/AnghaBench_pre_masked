
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_irq_src {int dummy; } ;
struct TYPE_3__ {int dc; } ;
struct TYPE_4__ {struct amdgpu_crtc** crtcs; } ;
struct amdgpu_device {TYPE_1__ dm; TYPE_2__ mode_info; } ;
struct amdgpu_crtc {int otg_inst; } ;
typedef enum irq_type { ____Placeholder_irq_type } irq_type ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,unsigned int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static inline int FUNC_2(struct amdgpu_device *VAR_1,
          struct amdgpu_irq_src *VAR_2,
          unsigned VAR_3,
          enum amdgpu_interrupt_state VAR_4,
          const enum irq_type VAR_5,
          const char *VAR_6)
{
 bool VAR_7;
 enum dc_irq_source VAR_8;

 struct amdgpu_crtc *VAR_9 = VAR_1->mode_info.crtcs[VAR_3];

 if (!VAR_9) {
  FUNC_0(
   "%s: crtc is NULL at id :%d\n",
   VAR_6,
   VAR_3);
  return 0;
 }

 if (VAR_9->otg_inst == -1)
  return 0;

 VAR_8 = VAR_5 + VAR_9->otg_inst;

 VAR_7 = (VAR_4 == VAR_0);

 FUNC_1(VAR_1->dm.dc, VAR_8, VAR_7);
 return 0;
}
