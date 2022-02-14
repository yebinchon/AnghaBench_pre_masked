
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int width; } ;
struct tpg_data {int scaled_width; int src_width; int max_line_width; int recalc_lines; struct v4l2_rect crop; struct v4l2_rect compose; } ;



void FUNC_0(struct tpg_data *VAR_0, const struct v4l2_rect *VAR_1,
  const struct v4l2_rect *VAR_2)
{
 VAR_0->crop = *VAR_1;
 VAR_0->compose = *VAR_2;
 VAR_0->scaled_width = (VAR_0->src_width * VAR_0->compose.width +
     VAR_0->crop.width - 1) / VAR_0->crop.width;
 VAR_0->scaled_width &= ~1;
 if (VAR_0->scaled_width > VAR_0->max_line_width)
  VAR_0->scaled_width = VAR_0->max_line_width;
 if (VAR_0->scaled_width < 2)
  VAR_0->scaled_width = 2;
 VAR_0->recalc_lines = 1;
}
