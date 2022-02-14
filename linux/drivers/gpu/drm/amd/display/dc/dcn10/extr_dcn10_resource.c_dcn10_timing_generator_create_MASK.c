
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct timing_generator {size_t inst; struct dc_context* ctx; } ;
struct optc {struct timing_generator base; int * tg_mask; int * tg_shift; int * tg_regs; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct optc*) ;
 struct optc* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct timing_generator *FUNC_2(
  struct dc_context *VAR_4,
  uint32_t VAR_5)
{
 struct optc *VAR_6 =
  FUNC_1(sizeof(struct optc), VAR_0);

 if (!VAR_6)
  return ((void*)0);

 VAR_6->base.inst = VAR_5;
 VAR_6->base.ctx = VAR_4;

 VAR_6->tg_regs = &VAR_2[VAR_5];
 VAR_6->tg_shift = &VAR_3;
 VAR_6->tg_mask = &VAR_1;

 FUNC_0(VAR_6);

 return &VAR_6->base;
}
