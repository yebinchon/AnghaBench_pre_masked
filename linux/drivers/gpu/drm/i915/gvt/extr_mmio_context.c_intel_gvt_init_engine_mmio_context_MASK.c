
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ctx_mmio_count; struct engine_mmio* mmio; void* tlb_mmio_offset_list_cnt; void* tlb_mmio_offset_list; void* mocs_mmio_offset_list_cnt; void* mocs_mmio_offset_list; } ;
struct intel_gvt {TYPE_1__ engine_mmio_list; int dev_priv; } ;
struct TYPE_4__ {int reg; } ;
struct engine_mmio {size_t ring_id; TYPE_2__ reg; scalar_t__ in_context; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 struct engine_mmio* VAR_0 ;
 void* VAR_1 ;
 struct engine_mmio* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__) ;
 int FUNC_3 (struct intel_gvt*,int ) ;

void FUNC_4(struct intel_gvt *VAR_4)
{
 struct engine_mmio *VAR_5;

 if (FUNC_1(VAR_4->dev_priv) >= 9) {
  VAR_4->engine_mmio_list.mmio = VAR_2;
  VAR_4->engine_mmio_list.tlb_mmio_offset_list = VAR_1;
  VAR_4->engine_mmio_list.tlb_mmio_offset_list_cnt = FUNC_0(VAR_1);
  VAR_4->engine_mmio_list.mocs_mmio_offset_list = VAR_3;
  VAR_4->engine_mmio_list.mocs_mmio_offset_list_cnt = FUNC_0(VAR_3);
 } else {
  VAR_4->engine_mmio_list.mmio = VAR_0;
  VAR_4->engine_mmio_list.tlb_mmio_offset_list = VAR_1;
  VAR_4->engine_mmio_list.tlb_mmio_offset_list_cnt = FUNC_0(VAR_1);
 }

 for (VAR_5 = VAR_4->engine_mmio_list.mmio;
      FUNC_2(VAR_5->reg); VAR_5++) {
  if (VAR_5->in_context) {
   VAR_4->engine_mmio_list.ctx_mmio_count[VAR_5->ring_id]++;
   FUNC_3(VAR_4, VAR_5->reg.reg);
  }
 }
}
