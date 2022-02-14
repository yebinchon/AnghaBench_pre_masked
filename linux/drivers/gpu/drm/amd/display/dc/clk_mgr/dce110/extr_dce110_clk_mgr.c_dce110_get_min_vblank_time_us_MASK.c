
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int v_total; int h_total; int v_addressable; int pix_clk_100hz; } ;
struct dc_crtc_timing_adjust {scalar_t__ v_total_max; scalar_t__ v_total_min; } ;
struct dc_stream_state {TYPE_1__ timing; struct dc_crtc_timing_adjust adjust; } ;
struct dc_state {size_t stream_count; struct dc_stream_state** streams; } ;



uint32_t FUNC_0(const struct dc_state *VAR_0)
{
 uint8_t VAR_1;
 uint32_t VAR_2 = -1;

 for (VAR_1 = 0; VAR_1 < VAR_0->stream_count; VAR_1++) {
  struct dc_stream_state *VAR_3 = VAR_0->streams[VAR_1];
  uint32_t VAR_4 = 0;
  uint32_t VAR_5 = 0;
  uint32_t VAR_6 = VAR_3->timing.v_total;
  struct dc_crtc_timing_adjust VAR_7 = VAR_3->adjust;
  if (VAR_7.v_total_max != VAR_7.v_total_min)
   VAR_6 = VAR_7.v_total_min;

  VAR_4 = VAR_3->timing.h_total *
   (VAR_6
    - VAR_3->timing.v_addressable);
  VAR_5 = VAR_4
   * 10000 / VAR_3->timing.pix_clk_100hz;

  if (VAR_2 > VAR_5)
   VAR_2 = VAR_5;
 }

 return VAR_2;
}
