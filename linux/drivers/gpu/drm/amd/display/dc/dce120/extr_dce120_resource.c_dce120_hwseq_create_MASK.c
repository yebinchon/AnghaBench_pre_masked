
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_hwseq {int * masks; int * shifts; int * regs; struct dc_context* ctx; } ;
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
 }
 return VAR_5;
}
