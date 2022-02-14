
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* irq_warn_once; } ;
struct intel_vgpu {TYPE_1__ irq; int id; } ;
struct intel_gvt_irq {int dummy; } ;
typedef enum intel_gvt_event_type { ____Placeholder_intel_gvt_event_type } intel_gvt_event_type ;


 int FUNC_0 (char*,int ,int,int ) ;
 int * VAR_0 ;
 int FUNC_1 (struct intel_gvt_irq*,int,struct intel_vgpu*) ;

__attribute__((used)) static void FUNC_2(struct intel_gvt_irq *VAR_1,
 enum intel_gvt_event_type VAR_2, struct intel_vgpu *VAR_3)
{
 if (!VAR_3->irq.irq_warn_once[VAR_2]) {
  FUNC_0("vgpu%d: IRQ receive event %d (%s)\n",
   VAR_3->id, VAR_2, VAR_0[VAR_2]);
  VAR_3->irq.irq_warn_once[VAR_2] = 1;
 }
 FUNC_1(VAR_1, VAR_2, VAR_3);
}
