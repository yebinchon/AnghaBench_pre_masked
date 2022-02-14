
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_audio_shift {int dummy; } ;
struct dce_audio_registers {int dummy; } ;
struct dce_audio_mask {int dummy; } ;
struct audio {unsigned int inst; int * funcs; struct dc_context* ctx; } ;
struct dce_audio {struct audio base; struct dce_audio_mask const* masks; struct dce_audio_shift const* shifts; struct dce_audio_registers const* regs; } ;
struct dc_context {int dummy; } ;


 int FUNC_0 (struct dce_audio*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dce_audio* FUNC_1 (int,int ) ;

struct audio *FUNC_2(
  struct dc_context *VAR_2,
  unsigned int VAR_3,
  const struct dce_audio_registers *VAR_4,
  const struct dce_audio_shift *VAR_5,
  const struct dce_audio_mask *VAR_6
  )
{
 struct dce_audio *VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);

 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_7);
  return ((void*)0);
 }

 VAR_7->base.ctx = VAR_2;
 VAR_7->base.inst = VAR_3;
 VAR_7->base.funcs = &VAR_1;

 VAR_7->regs = VAR_4;
 VAR_7->shifts = VAR_5;
 VAR_7->masks = VAR_6;
 return &VAR_7->base;
}
