
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct parser_exec_state {scalar_t__ buf_type; scalar_t__ ip_va; scalar_t__ ret_bb_va; scalar_t__ ip_gma; scalar_t__ ret_ip_gma_bb; scalar_t__ ret_ip_gma_ring; int buf_addr_type; int saved_buf_addr_type; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct parser_exec_state*) ;
 scalar_t__ FUNC_2 (struct parser_exec_state*) ;
 int FUNC_3 (struct parser_exec_state*) ;
 int FUNC_4 (struct parser_exec_state*) ;
 int FUNC_5 (struct parser_exec_state*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct parser_exec_state*) ;

__attribute__((used)) static int FUNC_8(struct parser_exec_state *VAR_4)
{
 bool VAR_5;
 int VAR_6 = 0;
 struct intel_vgpu *VAR_7 = VAR_4->vgpu;

 if (VAR_4->buf_type == VAR_0) {
  FUNC_6("Found MI_BATCH_BUFFER_START in 2nd level BB\n");
  return -VAR_2;
 }

 VAR_5 = FUNC_0(FUNC_5(VAR_4, 0)) == 1;
 if (VAR_5 && (VAR_4->buf_type != VAR_1)) {
  FUNC_6("Jumping to 2nd level BB from RB is not allowed\n");
  return -VAR_2;
 }

 VAR_4->saved_buf_addr_type = VAR_4->buf_addr_type;
 FUNC_1(VAR_4);
 if (VAR_4->buf_type == VAR_3) {
  VAR_4->ret_ip_gma_ring = VAR_4->ip_gma + FUNC_4(VAR_4) * sizeof(u32);
  VAR_4->buf_type = VAR_1;
 } else if (VAR_5) {
  VAR_4->buf_type = VAR_0;
  VAR_4->ret_ip_gma_bb = VAR_4->ip_gma + FUNC_4(VAR_4) * sizeof(u32);
  VAR_4->ret_bb_va = VAR_4->ip_va + FUNC_4(VAR_4) * sizeof(u32);
 }

 if (FUNC_2(VAR_4)) {
  VAR_6 = FUNC_7(VAR_4);
  if (VAR_6 < 0)
   FUNC_6("invalid shadow batch buffer\n");
 } else {

  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
 }
 return VAR_6;
}
