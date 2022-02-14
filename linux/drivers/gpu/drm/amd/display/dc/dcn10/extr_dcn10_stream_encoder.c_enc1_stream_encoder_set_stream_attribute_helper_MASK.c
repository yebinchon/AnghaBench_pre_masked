
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcn10_stream_encoder {int dummy; } ;
struct dc_crtc_timing {int pixel_encoding; } ;


 int VAR_0 ;

 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(
  struct dcn10_stream_encoder *VAR_3,
  struct dc_crtc_timing *VAR_4)
{
 switch (VAR_4->pixel_encoding) {
 case 128:
  FUNC_0(VAR_0, VAR_2, 1);
  break;
 default:
  FUNC_0(VAR_0, VAR_2, 0);
  break;
 }
 FUNC_0(VAR_0, VAR_1, 0);
}
