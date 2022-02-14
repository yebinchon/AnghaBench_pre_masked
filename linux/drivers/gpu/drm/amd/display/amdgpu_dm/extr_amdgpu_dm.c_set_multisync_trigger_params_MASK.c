
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int delay; int event; scalar_t__ enabled; } ;
struct dc_stream_state {TYPE_1__ triggered_crtc_reset; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(
  struct dc_stream_state *VAR_2)
{
 if (VAR_2->triggered_crtc_reset.enabled) {
  VAR_2->triggered_crtc_reset.event = VAR_0;
  VAR_2->triggered_crtc_reset.delay = VAR_1;
 }
}
