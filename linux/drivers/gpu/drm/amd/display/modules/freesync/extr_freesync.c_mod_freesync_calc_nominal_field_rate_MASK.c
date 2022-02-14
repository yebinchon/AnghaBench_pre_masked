
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix_clk_100hz; int v_total; int h_total; } ;
struct dc_stream_state {TYPE_1__ timing; } ;


 unsigned long long FUNC_0 (unsigned long long,int ) ;

unsigned long long FUNC_1(
   const struct dc_stream_state *VAR_0)
{
 unsigned long long VAR_1 = 0;


 VAR_1 = VAR_0->timing.pix_clk_100hz / 10;
 VAR_1 *= 1000ULL * 1000ULL * 1000ULL;
 VAR_1 = FUNC_0(VAR_1,
      VAR_0->timing.h_total);
 VAR_1 = FUNC_0(VAR_1,
      VAR_0->timing.v_total);

 return VAR_1;
}
