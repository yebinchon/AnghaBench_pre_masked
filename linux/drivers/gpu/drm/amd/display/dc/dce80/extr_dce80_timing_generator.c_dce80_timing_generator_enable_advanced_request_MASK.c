
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int dummy; } ;
struct dc_crtc_timing {int v_sync_width; int v_front_porch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(
 struct timing_generator *VAR_7,
 bool VAR_8,
 const struct dc_crtc_timing *VAR_9)
{
 struct dce110_timing_generator *VAR_10 = FUNC_1(VAR_7);
 uint32_t VAR_11 = FUNC_0(VAR_6);
 uint32_t VAR_12 = FUNC_2(VAR_7->ctx, VAR_11);

 if (VAR_8) {
  FUNC_4(
   VAR_12,
   0,
   VAR_5,
   VAR_2);
 } else {
  FUNC_4(
   VAR_12,
   1,
   VAR_5,
   VAR_2);
 }

 if ((VAR_9->v_sync_width + VAR_9->v_front_porch) <= 3) {
  FUNC_4(
   VAR_12,
   3,
   VAR_5,
   VAR_0);
  FUNC_4(
   VAR_12,
   0,
   VAR_5,
   VAR_3);
 } else {
  FUNC_4(
   VAR_12,
   4,
   VAR_5,
   VAR_0);
  FUNC_4(
   VAR_12,
   1,
   VAR_5,
   VAR_3);
 }

 FUNC_4(
  VAR_12,
  1,
  VAR_5,
  VAR_4);

 FUNC_4(
  VAR_12,
  1,
  VAR_5,
  VAR_1);

 FUNC_3(VAR_7->ctx, VAR_11, VAR_12);
}
