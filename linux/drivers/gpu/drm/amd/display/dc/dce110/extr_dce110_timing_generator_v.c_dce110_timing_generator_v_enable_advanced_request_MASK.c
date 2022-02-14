
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct dc_crtc_timing {int v_sync_width; int v_front_porch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(
 struct timing_generator *VAR_4,
 bool VAR_5,
 const struct dc_crtc_timing *VAR_6)
{
 uint32_t VAR_7 = VAR_3;
 uint32_t VAR_8 = FUNC_0(VAR_4->ctx, VAR_7);

 if (VAR_5) {
  if ((VAR_6->v_sync_width + VAR_6->v_front_porch) <= 3) {
   FUNC_2(
    VAR_8,
    3,
    VAR_0,
    VAR_1);
  } else {
   FUNC_2(
    VAR_8,
    4,
    VAR_0,
    VAR_1);
  }
  FUNC_2(
   VAR_8,
   0,
   VAR_0,
   VAR_2);
 } else {
  FUNC_2(
   VAR_8,
   2,
   VAR_0,
   VAR_1);
  FUNC_2(
   VAR_8,
   1,
   VAR_0,
   VAR_2);
 }

 FUNC_1(VAR_4->ctx, VAR_7, VAR_8);
}
