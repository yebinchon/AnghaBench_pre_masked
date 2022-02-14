
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int dummy; } ;
struct crtc_position {int vertical_count; int horizontal_count; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (struct timing_generator*,struct crtc_position*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_3 ;

void FUNC_5(
 struct timing_generator *VAR_4,
 uint32_t *VAR_5,
 uint32_t *VAR_6,
 uint32_t *VAR_7,
 uint32_t *VAR_8)
{
 struct dce110_timing_generator *VAR_9 = FUNC_1(VAR_4);
 struct crtc_position VAR_10;

 uint32_t VAR_11 = FUNC_3(VAR_4->ctx,
   FUNC_0(VAR_3));

 *VAR_5 = FUNC_4(VAR_11,
          VAR_2,
          VAR_1);
 *VAR_6 = FUNC_4(VAR_11,
        VAR_2,
        VAR_0);

 FUNC_2(
   VAR_4, &VAR_10);

 *VAR_7 = VAR_10.horizontal_count;
 *VAR_8 = VAR_10.vertical_count;
}
