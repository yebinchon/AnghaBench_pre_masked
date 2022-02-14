
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct video_info {int color_fmt; int color_depth; } ;
struct drm_display_mode {int dummy; } ;


 int VAR_0 ;






__attribute__((used)) static int FUNC_0(struct video_info *VAR_1,
          struct drm_display_mode *VAR_2)
{
 u32 VAR_3;
 u8 VAR_4[2] = {0};

 switch (VAR_1->color_fmt) {
 case 132:
 case 128:
  VAR_4[0] = 0;
  break;

 case 129:
  VAR_4[0] = 6 + VAR_0 * 8;
  break;
 case 130:
  VAR_4[0] = 5 + VAR_0 * 8;
  break;
 case 131:
  VAR_4[0] = 5;
  break;
 };

 switch (VAR_1->color_depth) {
 case 6:
  VAR_4[1] = 0;
  break;
 case 8:
  VAR_4[1] = 1;
  break;
 case 10:
  VAR_4[1] = 2;
  break;
 case 12:
  VAR_4[1] = 3;
  break;
 case 16:
  VAR_4[1] = 4;
  break;
 };

 VAR_3 = 2 * VAR_4[0] + 32 * VAR_4[1] +
     ((VAR_1->color_fmt == 128) ? (1 << 14) : 0);

 return VAR_3;
}
