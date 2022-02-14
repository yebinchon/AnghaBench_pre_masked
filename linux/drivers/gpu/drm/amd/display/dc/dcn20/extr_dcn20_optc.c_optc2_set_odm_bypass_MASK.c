
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int inst; } ;
struct optc {int opp_count; } ;
struct dc_crtc_timing {int dummy; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct dc_crtc_timing const*) ;

void FUNC_6(struct timing_generator *VAR_8,
  const struct dc_crtc_timing *VAR_9)
{
 struct optc *VAR_10 = FUNC_0(VAR_8);
 uint32_t VAR_11 = 0;

 FUNC_2(VAR_0, 0,
   VAR_3, 0,
   VAR_4, VAR_8->inst,
   VAR_5, 0xf);
 FUNC_4(VAR_6, 0);

 VAR_11 = FUNC_5(VAR_9);
 FUNC_3(VAR_6,
   VAR_7, VAR_11);
 FUNC_1(VAR_1, 0,
   VAR_2, 0);
 VAR_10->opp_count = 1;
}
