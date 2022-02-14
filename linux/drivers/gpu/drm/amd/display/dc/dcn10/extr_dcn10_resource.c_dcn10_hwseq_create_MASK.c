
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int DEGVIDCN10_253; int false_optc_underflow; int DEGVIDCN10_254; } ;
struct dce_hwseq {TYPE_1__ wa; int * masks; int * shifts; int * regs; struct dc_context* ctx; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dce_hwseq* FUNC_0 (int,int ) ;

__attribute__((used)) static struct dce_hwseq *FUNC_1(
 struct dc_context *VAR_4)
{
 struct dce_hwseq *VAR_5 = FUNC_0(sizeof(struct dce_hwseq), VAR_0);

 if (VAR_5) {
  VAR_5->ctx = VAR_4;
  VAR_5->regs = &VAR_2;
  VAR_5->shifts = &VAR_3;
  VAR_5->masks = &VAR_1;
  VAR_5->wa.DEGVIDCN10_253 = 1;
  VAR_5->wa.false_optc_underflow = 1;
  VAR_5->wa.DEGVIDCN10_254 = 1;
 }
 return VAR_5;
}
