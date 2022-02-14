
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blnd_crtc_trigger; } ;
struct dce_hwseq {TYPE_1__ wa; int * masks; int * shifts; int * regs; struct dc_context* ctx; } ;
struct TYPE_4__ {int hw_internal_rev; } ;
struct dc_context {TYPE_2__ asic_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dce_hwseq* FUNC_1 (int,int ) ;

__attribute__((used)) static struct dce_hwseq *FUNC_2(
 struct dc_context *VAR_5)
{
 struct dce_hwseq *VAR_6 = FUNC_1(sizeof(struct dce_hwseq), VAR_0);

 if (VAR_6) {
  VAR_6->ctx = VAR_5;
  VAR_6->regs = FUNC_0(VAR_5->asic_id.hw_internal_rev) ?
    &VAR_4 : &VAR_1;
  VAR_6->shifts = &VAR_3;
  VAR_6->masks = &VAR_2;
  VAR_6->wa.blnd_crtc_trigger = 1;
 }
 return VAR_6;
}
