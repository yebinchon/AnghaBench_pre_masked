
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct parser_exec_state {scalar_t__ buf_addr_type; TYPE_2__* workload; int ring_id; struct intel_vgpu* vgpu; } ;
struct intel_vgpu_mm {int dummy; } ;
struct TYPE_3__ {struct intel_vgpu_mm* ggtt_mm; } ;
struct intel_vgpu {int gvt; TYPE_1__ gtt; } ;
struct cmd_info {scalar_t__ opcode; } ;
struct TYPE_4__ {struct intel_vgpu_mm* shadow_mm; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long FUNC_1 (struct parser_exec_state*,int ) ;
 scalar_t__ FUNC_2 (struct intel_vgpu*,struct intel_vgpu_mm*,unsigned long,unsigned long,unsigned long*) ;
 struct cmd_info* FUNC_3 (int ,unsigned long,int ) ;
 int FUNC_4 (struct cmd_info const*,unsigned long) ;
 unsigned long FUNC_5 (struct parser_exec_state*,int) ;
 int FUNC_6 (unsigned long,int ) ;
 int FUNC_7 (char*,unsigned long,int ,char*,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct parser_exec_state *VAR_7,
   unsigned long *VAR_8,
   unsigned long *VAR_9)
{
 unsigned long VAR_10 = 0;
 const struct cmd_info *VAR_11;
 u32 VAR_12 = 0;
 bool VAR_13 = 0;
 struct intel_vgpu *VAR_14 = VAR_7->vgpu;
 u32 VAR_15;
 struct intel_vgpu_mm *VAR_16 = (VAR_7->buf_addr_type == VAR_2) ?
  VAR_7->vgpu->gtt.ggtt_mm : VAR_7->workload->shadow_mm;

 *VAR_8 = 0;
 *VAR_9 = 0;


 VAR_10 = FUNC_5(VAR_7, 1);
 if (VAR_10 == VAR_3)
  return -VAR_1;

 VAR_15 = FUNC_1(VAR_7, 0);
 VAR_11 = FUNC_3(VAR_7->vgpu->gvt, VAR_15, VAR_7->ring_id);
 if (VAR_11 == ((void*)0)) {
  FUNC_7("unknown cmd 0x%x, opcode=0x%x, addr_type=%s, ring %d, workload=%p\n",
    VAR_15, FUNC_6(VAR_15, VAR_7->ring_id),
    (VAR_7->buf_addr_type == VAR_6) ?
    "ppgtt" : "ggtt", VAR_7->ring_id, VAR_7->workload);
  return -VAR_0;
 }
 do {
  if (FUNC_2(VAR_7->vgpu, VAR_16,
    VAR_10, VAR_10 + 4, &VAR_15) < 0)
   return -VAR_1;
  VAR_11 = FUNC_3(VAR_7->vgpu->gvt, VAR_15, VAR_7->ring_id);
  if (VAR_11 == ((void*)0)) {
   FUNC_7("unknown cmd 0x%x, opcode=0x%x, addr_type=%s, ring %d, workload=%p\n",
    VAR_15, FUNC_6(VAR_15, VAR_7->ring_id),
    (VAR_7->buf_addr_type == VAR_6) ?
    "ppgtt" : "ggtt", VAR_7->ring_id, VAR_7->workload);
   return -VAR_0;
  }

  if (VAR_11->opcode == VAR_4) {
   VAR_13 = 1;
  } else if (VAR_11->opcode == VAR_5) {
   if (FUNC_0(VAR_15) == 0)

    VAR_13 = 1;
  }

  if (VAR_13)
   *VAR_9 = *VAR_8;

  VAR_12 = FUNC_4(VAR_11, VAR_15) << 2;
  *VAR_8 += VAR_12;
  VAR_10 += VAR_12;
 } while (!VAR_13);

 return 0;
}
