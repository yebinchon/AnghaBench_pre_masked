
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int dummy; } ;
struct dce110_timing_generator_offsets {int dummy; } ;
struct dce110_timing_generator {struct timing_generator base; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dce110_timing_generator*,struct dc_context*,int ,struct dce110_timing_generator_offsets const*) ;
 struct dce110_timing_generator* FUNC_1 (int,int ) ;

__attribute__((used)) static struct timing_generator *FUNC_2(
  struct dc_context *VAR_1,
  uint32_t VAR_2,
  const struct dce110_timing_generator_offsets *VAR_3)
{
 struct dce110_timing_generator *VAR_4 =
  FUNC_1(sizeof(struct dce110_timing_generator), VAR_0);

 if (!VAR_4)
  return ((void*)0);

 FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
 return &VAR_4->base;
}
