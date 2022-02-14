
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct drm_i915_error_state_buf {int i915; } ;
struct TYPE_6__ {int gfx_mode; int pp_dir_base; int * pdp; } ;
struct drm_i915_error_engine {int start; int ctl; int mode; int hws; int acthd; int ipeir; int ipehr; int bbaddr; int bbstate; int instps; int instpm; int rc_psmi; int fault_reg; int cpu_ring_head; int cpu_ring_tail; unsigned long const hangcheck_timestamp; int reset_count; int num_ports; int context; int * execlist; TYPE_3__ vm_info; scalar_t__ faddr; TYPE_2__* batchbuffer; int rq_tail; int rq_post; int tail; int rq_head; int head; int idle; TYPE_1__* engine; } ;
struct TYPE_5__ {scalar_t__ gtt_size; scalar_t__ gtt_offset; } ;
struct TYPE_4__ {int name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_error_state_buf*,char*,int,...) ;
 int FUNC_3 (struct drm_i915_error_state_buf*,char*,int *) ;
 int FUNC_4 (struct drm_i915_error_state_buf*,struct drm_i915_error_engine const*) ;
 int FUNC_5 (struct drm_i915_error_state_buf*,char*,int *,unsigned long const) ;
 int FUNC_6 (unsigned long const) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct drm_i915_error_state_buf *VAR_0,
          const struct drm_i915_error_engine *VAR_1,
          const unsigned long VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_0, "%s command stream:\n", VAR_1->engine->name);
 FUNC_2(VAR_0, "  IDLE?: %s\n", FUNC_9(VAR_1->idle));
 FUNC_2(VAR_0, "  START: 0x%08x\n", VAR_1->start);
 FUNC_2(VAR_0, "  HEAD:  0x%08x [0x%08x]\n", VAR_1->head, VAR_1->rq_head);
 FUNC_2(VAR_0, "  TAIL:  0x%08x [0x%08x, 0x%08x]\n",
     VAR_1->tail, VAR_1->rq_post, VAR_1->rq_tail);
 FUNC_2(VAR_0, "  CTL:   0x%08x\n", VAR_1->ctl);
 FUNC_2(VAR_0, "  MODE:  0x%08x\n", VAR_1->mode);
 FUNC_2(VAR_0, "  HWS:   0x%08x\n", VAR_1->hws);
 FUNC_2(VAR_0, "  ACTHD: 0x%08x %08x\n",
     (u32)(VAR_1->acthd>>32), (u32)VAR_1->acthd);
 FUNC_2(VAR_0, "  IPEIR: 0x%08x\n", VAR_1->ipeir);
 FUNC_2(VAR_0, "  IPEHR: 0x%08x\n", VAR_1->ipehr);

 FUNC_4(VAR_0, VAR_1);

 if (VAR_1->batchbuffer) {
  u64 VAR_4 = VAR_1->batchbuffer->gtt_offset;
  u64 VAR_5 = VAR_4 + VAR_1->batchbuffer->gtt_size;

  FUNC_2(VAR_0, "  batch: [0x%08x_%08x, 0x%08x_%08x]\n",
      FUNC_8(VAR_4), FUNC_7(VAR_4),
      FUNC_8(VAR_5), FUNC_7(VAR_5));
 }
 if (FUNC_1(VAR_0->i915) >= 4) {
  FUNC_2(VAR_0, "  BBADDR: 0x%08x_%08x\n",
      (u32)(VAR_1->bbaddr>>32), (u32)VAR_1->bbaddr);
  FUNC_2(VAR_0, "  BB_STATE: 0x%08x\n", VAR_1->bbstate);
  FUNC_2(VAR_0, "  INSTPS: 0x%08x\n", VAR_1->instps);
 }
 FUNC_2(VAR_0, "  INSTPM: 0x%08x\n", VAR_1->instpm);
 FUNC_2(VAR_0, "  FADDR: 0x%08x %08x\n", FUNC_8(VAR_1->faddr),
     FUNC_7(VAR_1->faddr));
 if (FUNC_1(VAR_0->i915) >= 6) {
  FUNC_2(VAR_0, "  RC PSMI: 0x%08x\n", VAR_1->rc_psmi);
  FUNC_2(VAR_0, "  FAULT_REG: 0x%08x\n", VAR_1->fault_reg);
 }
 if (FUNC_0(VAR_0->i915)) {
  FUNC_2(VAR_0, "  GFX_MODE: 0x%08x\n", VAR_1->vm_info.gfx_mode);

  if (FUNC_1(VAR_0->i915) >= 8) {
   int VAR_6;
   for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
    FUNC_2(VAR_0, "  PDP%d: 0x%016llx\n",
        VAR_6, VAR_1->vm_info.pdp[VAR_6]);
  } else {
   FUNC_2(VAR_0, "  PP_DIR_BASE: 0x%08x\n",
       VAR_1->vm_info.pp_dir_base);
  }
 }
 FUNC_2(VAR_0, "  ring->head: 0x%08x\n", VAR_1->cpu_ring_head);
 FUNC_2(VAR_0, "  ring->tail: 0x%08x\n", VAR_1->cpu_ring_tail);
 FUNC_2(VAR_0, "  hangcheck timestamp: %dms (%lu%s)\n",
     FUNC_6(VAR_1->hangcheck_timestamp - VAR_2),
     VAR_1->hangcheck_timestamp,
     VAR_1->hangcheck_timestamp == VAR_2 ? "; epoch" : "");
 FUNC_2(VAR_0, "  engine reset count: %u\n", VAR_1->reset_count);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_ports; VAR_3++) {
  FUNC_2(VAR_0, "  ELSP[%d]:", VAR_3);
  FUNC_5(VAR_0, " ", &VAR_1->execlist[VAR_3], VAR_2);
 }

 FUNC_3(VAR_0, "  Active context: ", &VAR_1->context);
}
