
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int dummy; } ;
struct crtc_position {void* nominal_vcount; void* vertical_count; void* horizontal_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_4(struct timing_generator *VAR_7,
 struct crtc_position *VAR_8)
{
 uint32_t VAR_9;
 struct dce110_timing_generator *VAR_10 = FUNC_1(VAR_7);

 VAR_9 = FUNC_2(VAR_7->ctx, FUNC_0(VAR_6));

 VAR_8->horizontal_count = FUNC_3(
   VAR_9,
   VAR_2,
   VAR_0);

 VAR_8->vertical_count = FUNC_3(
   VAR_9,
   VAR_2,
   VAR_3);

 VAR_9 = FUNC_2(VAR_7->ctx, FUNC_0(VAR_5));

 VAR_8->nominal_vcount = FUNC_3(
   VAR_9,
   VAR_1,
   VAR_4);
}
