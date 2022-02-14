
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pix_clk_100hz; int display_color_depth; int pixel_encoding; int v_total; int h_total; } ;
struct TYPE_6__ {int height; int width; int y; int x; } ;
struct TYPE_5__ {int height; int width; int y; int x; } ;
struct dc_stream_state {TYPE_4__* link; TYPE_3__ timing; int output_color_space; TYPE_2__ dst; TYPE_1__ src; } ;
struct dc {int dummy; } ;
struct TYPE_8__ {int link_index; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(const struct dc *VAR_0, const struct dc_stream_state *VAR_1)
{
 FUNC_0(
   "core_stream 0x%p: src: %d, %d, %d, %d; dst: %d, %d, %d, %d, colorSpace:%d\n",
   VAR_1,
   VAR_1->src.x,
   VAR_1->src.y,
   VAR_1->src.width,
   VAR_1->src.height,
   VAR_1->dst.x,
   VAR_1->dst.y,
   VAR_1->dst.width,
   VAR_1->dst.height,
   VAR_1->output_color_space);
 FUNC_0(
   "\tpix_clk_khz: %d, h_total: %d, v_total: %d, pixelencoder:%d, displaycolorDepth:%d\n",
   VAR_1->timing.pix_clk_100hz / 10,
   VAR_1->timing.h_total,
   VAR_1->timing.v_total,
   VAR_1->timing.pixel_encoding,
   VAR_1->timing.display_color_depth);
 FUNC_0(
   "\tlink: %d\n",
   VAR_1->link->link_index);
}
