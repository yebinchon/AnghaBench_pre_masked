
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct dc_stream_state* event_source; scalar_t__ enabled; } ;
struct TYPE_3__ {int pix_clk_100hz; int h_total; int v_total; } ;
struct dc_stream_state {TYPE_2__ triggered_crtc_reset; TYPE_1__ timing; } ;



__attribute__((used)) static void FUNC_0(struct dc_stream_state *VAR_0[],
         int VAR_1)
{
 int VAR_2, VAR_3 = 0, VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2] && VAR_0[VAR_2]->triggered_crtc_reset.enabled) {
   int VAR_5 = 0;

   VAR_5 = (VAR_0[VAR_2]->timing.pix_clk_100hz*100)/
    (VAR_0[VAR_2]->timing.h_total*VAR_0[VAR_2]->timing.v_total);
   if (VAR_5 > VAR_3) {
    VAR_3 = VAR_5;
    VAR_4 = VAR_2;
   }
  }
 }
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2])
   VAR_0[VAR_2]->triggered_crtc_reset.event_source = VAR_0[VAR_4];
 }
}
