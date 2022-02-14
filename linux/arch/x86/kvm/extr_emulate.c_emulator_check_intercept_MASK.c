
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct x86_instruction_info {int intercept; int next_rip; int ad_bytes; int dst_bytes; int src_bytes; int dst_val; int src_val; int modrm_rm; int modrm_reg; int modrm_mod; int rep_prefix; } ;
struct TYPE_5__ {int bytes; int val64; } ;
struct TYPE_4__ {int bytes; int val64; } ;
struct x86_emulate_ctxt {TYPE_3__* ops; int eip; int ad_bytes; TYPE_2__ dst; TYPE_1__ src; int modrm_rm; int modrm_reg; int modrm_mod; int rep_prefix; } ;
typedef enum x86_intercept_stage { ____Placeholder_x86_intercept_stage } x86_intercept_stage ;
typedef enum x86_intercept { ____Placeholder_x86_intercept } x86_intercept ;
struct TYPE_6__ {int (* intercept ) (struct x86_emulate_ctxt*,struct x86_instruction_info*,int) ;} ;


 int FUNC_0 (struct x86_emulate_ctxt*,struct x86_instruction_info*,int) ;

__attribute__((used)) static int FUNC_1(struct x86_emulate_ctxt *VAR_0,
        enum x86_intercept VAR_1,
        enum x86_intercept_stage VAR_2)
{
 struct x86_instruction_info VAR_3 = {
  .intercept = VAR_1,
  .rep_prefix = VAR_0->rep_prefix,
  .modrm_mod = VAR_0->modrm_mod,
  .modrm_reg = VAR_0->modrm_reg,
  .modrm_rm = VAR_0->modrm_rm,
  .src_val = VAR_0->src.val64,
  .dst_val = VAR_0->dst.val64,
  .src_bytes = VAR_0->src.bytes,
  .dst_bytes = VAR_0->dst.bytes,
  .ad_bytes = VAR_0->ad_bytes,
  .next_rip = VAR_0->eip,
 };

 return VAR_0->ops->intercept(VAR_0, &VAR_3, VAR_2);
}
