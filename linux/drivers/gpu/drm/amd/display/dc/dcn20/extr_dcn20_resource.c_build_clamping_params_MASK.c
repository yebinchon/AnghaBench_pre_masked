
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pixel_encoding; int display_color_depth; } ;
struct TYPE_3__ {int pixel_encoding; int c_depth; int clamping_level; } ;
struct dc_stream_state {TYPE_2__ timing; TYPE_1__ clamping; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dc_stream_state *VAR_1)
{
 VAR_1->clamping.clamping_level = VAR_0;
 VAR_1->clamping.c_depth = VAR_1->timing.display_color_depth;
 VAR_1->clamping.pixel_encoding = VAR_1->timing.pixel_encoding;
}
