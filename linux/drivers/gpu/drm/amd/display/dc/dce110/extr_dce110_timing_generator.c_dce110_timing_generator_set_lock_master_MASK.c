
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {struct dc_context* ctx; } ;
struct dce110_timing_generator {int dummy; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int VAR_1 ;
 int FUNC_2 (struct dc_context*,int ) ;
 int FUNC_3 (struct dc_context*,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int,int ,int ) ;

void FUNC_5(struct timing_generator *VAR_3,
  bool VAR_4)
{
 struct dc_context *VAR_5 = VAR_3->ctx;
 struct dce110_timing_generator *VAR_6 = FUNC_1(VAR_3);
 uint32_t VAR_7 = FUNC_0(VAR_2);
 uint32_t VAR_8 = FUNC_2(VAR_5, VAR_7);

 FUNC_4(
  VAR_8,
  VAR_4 ? 1 : 0,
  VAR_0,
  VAR_1);

 FUNC_3(VAR_5, VAR_7, VAR_8);
}
