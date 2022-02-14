
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_framebuffer {scalar_t__ width; scalar_t__ height; struct drm_format_info* format; } ;
struct komeda_fb {struct drm_framebuffer base; } ;
struct drm_format_info {scalar_t__ hsub; scalar_t__ vsub; int format; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_format_info*,int ) ;
 scalar_t__ FUNC_2 (struct drm_format_info*,int ) ;

int FUNC_3(const struct komeda_fb *VAR_1,
          u32 VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 const struct drm_framebuffer *VAR_6 = &VAR_1->base;
 const struct drm_format_info *VAR_7 = VAR_6->format;
 u32 VAR_8 = FUNC_2(VAR_6->format, 0);
 u32 VAR_9 = FUNC_1(VAR_6->format, 0);

 if ((VAR_2 + VAR_4 > VAR_6->width) || (VAR_3 + VAR_5 > VAR_6->height)) {
  FUNC_0("Invalid source coordinate.\n");
  return -VAR_0;
 }

 if ((VAR_2 % VAR_7->hsub) || (VAR_4 % VAR_7->hsub) ||
     (VAR_3 % VAR_7->vsub) || (VAR_5 % VAR_7->vsub)) {
  FUNC_0("Wrong subsampling dimension x:%d, y:%d, w:%d, h:%d for format: %x.\n",
     VAR_2, VAR_3, VAR_4, VAR_5, VAR_7->format);
  return -VAR_0;
 }

 if ((VAR_2 % VAR_8) || (VAR_4 % VAR_8) ||
     (VAR_3 % VAR_9) || (VAR_5 % VAR_9)) {
  FUNC_0("x:%d, y:%d, w:%d, h:%d should be multiple of block_w/h for format: %x.\n",
     VAR_2, VAR_3, VAR_4, VAR_5, VAR_7->format);
  return -VAR_0;
 }

 return 0;
}
