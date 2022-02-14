
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int* modifier; int pixel_format; } ;
struct drm_format_info {int dummy; } ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 struct drm_format_info const* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static const struct drm_format_info *
FUNC_2(const struct drm_mode_fb_cmd2 *VAR_1)
{
 switch (VAR_1->modifier[0]) {
 case 129:
 case 128:
  return FUNC_1(VAR_0,
       FUNC_0(VAR_0),
       VAR_1->pixel_format);
 default:
  return ((void*)0);
 }
}
