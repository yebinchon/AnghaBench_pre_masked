
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint32_t ;
struct TYPE_2__ {int h_total; unsigned long pix_clk_100hz; } ;
struct dc_stream_state {TYPE_1__ timing; } ;
struct bw_fixed {int value; } ;



__attribute__((used)) static uint32_t FUNC_0(
 struct bw_fixed VAR_0,
 const struct dc_stream_state *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3;

 VAR_3 = 1000 * VAR_0.value >> 24;

 VAR_2 = 1000000UL *
  (VAR_1->timing.h_total * 10) /
  VAR_1->timing.pix_clk_100hz +
  VAR_3;

 return VAR_2;
}
