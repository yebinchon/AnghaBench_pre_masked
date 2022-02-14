
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct parser_exec_state {scalar_t__ buf_addr_type; int workload; int ring_id; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int gvt; } ;
struct cmd_info {scalar_t__ opcode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct cmd_info* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct parser_exec_state *VAR_4, void *VAR_5)
{
 struct intel_vgpu *VAR_6 = VAR_4->vgpu;
 u32 VAR_7 = *(u32 *)VAR_5;
 const struct cmd_info *VAR_8;

 VAR_8 = FUNC_1(VAR_4->vgpu->gvt, VAR_7, VAR_4->ring_id);
 if (VAR_8 == ((void*)0)) {
  FUNC_3("unknown cmd 0x%x, opcode=0x%x, addr_type=%s, ring %d, workload=%p\n",
   VAR_7, FUNC_2(VAR_7, VAR_4->ring_id),
   (VAR_4->buf_addr_type == VAR_3) ?
   "ppgtt" : "ggtt", VAR_4->ring_id, VAR_4->workload);
  return -VAR_0;
 }

 if ((VAR_8->opcode == VAR_1) ||
     ((VAR_8->opcode == VAR_2) &&
      (FUNC_0(VAR_7) == 0)))
  return 0;

 return -VAR_0;
}
