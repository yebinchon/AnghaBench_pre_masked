
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {scalar_t__ active_display_unit; } ;
struct drm_framebuffer {int dev; } ;
struct drm_file {int dummy; } ;
struct drm_clip_rect {int dummy; } ;


 int FUNC_0 (struct drm_framebuffer*,struct drm_file*,unsigned int,unsigned int,struct drm_clip_rect*,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct drm_framebuffer*,struct drm_file*,unsigned int,unsigned int,struct drm_clip_rect*,unsigned int) ;
 struct vmw_private* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct drm_framebuffer *VAR_1,
     struct drm_file *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4,
     struct drm_clip_rect *VAR_5,
     unsigned int VAR_6)
{
 struct vmw_private *VAR_7 = FUNC_2(VAR_1->dev);

 if (VAR_7->active_display_unit == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6);
}
