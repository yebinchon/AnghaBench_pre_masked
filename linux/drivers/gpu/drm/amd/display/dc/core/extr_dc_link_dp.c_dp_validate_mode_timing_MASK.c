
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dc_link_settings {int dummy; } ;
struct dc_link {int dummy; } ;
struct dc_crtc_timing {int pix_clk_100hz; int h_addressable; int v_addressable; } ;


 int FUNC_0 (struct dc_crtc_timing const*) ;
 int FUNC_1 (struct dc_link*,struct dc_link_settings const*) ;
 struct dc_link_settings* FUNC_2 (struct dc_link*) ;

bool FUNC_3(
 struct dc_link *VAR_0,
 const struct dc_crtc_timing *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3;

 const struct dc_link_settings *VAR_4;


 if ((VAR_1->pix_clk_100hz / 10) == (uint32_t) 25175 &&
  VAR_1->h_addressable == (uint32_t) 640 &&
  VAR_1->v_addressable == (uint32_t) 480)
  return 1;

 VAR_4 = FUNC_2(VAR_0);







 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_0, VAR_4);

 if (VAR_2 <= VAR_3) {
  return 1;
 } else
  return 0;
}
