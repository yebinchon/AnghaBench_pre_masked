
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_surface {int dummy; } ;
struct vmw_private {scalar_t__ active_display_unit; int dev; } ;
struct vmw_framebuffer {int unpin; int pin; } ;
struct vmw_buffer_object {int dummy; } ;
struct drm_mode_fb_cmd2 {int width; int height; } ;


 int FUNC_0 () ;
 struct vmw_framebuffer* FUNC_1 (int) ;
 int FUNC_2 (int ,struct drm_mode_fb_cmd2 const*,struct vmw_buffer_object*,struct vmw_surface**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct vmw_private*,struct vmw_buffer_object*,struct vmw_framebuffer**,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_4 (struct vmw_private*,struct vmw_surface*,struct vmw_framebuffer**,struct drm_mode_fb_cmd2 const*,int) ;
 scalar_t__ FUNC_5 (struct vmw_private*,int,int ) ;
 int FUNC_6 (struct vmw_surface**) ;

struct vmw_framebuffer *
FUNC_7(struct vmw_private *VAR_3,
   struct vmw_buffer_object *VAR_4,
   struct vmw_surface *VAR_5,
   bool VAR_6,
   const struct drm_mode_fb_cmd2 *VAR_7)
{
 struct vmw_framebuffer *VAR_8 = ((void*)0);
 bool VAR_9 = 0;
 int VAR_10;






 if (FUNC_5(VAR_3, VAR_7->width, VAR_7->height) &&
     VAR_4 && VAR_6 &&
     VAR_7->width > 64 &&
     VAR_3->active_display_unit == VAR_0) {
  VAR_10 = FUNC_2(VAR_3->dev, VAR_7,
       VAR_4, &VAR_5);
  if (VAR_10)
   return FUNC_1(VAR_10);

  VAR_9 = 1;
 }


 if (VAR_5) {
  VAR_10 = FUNC_4(VAR_3, VAR_5, &VAR_8,
            VAR_7,
            VAR_9);





  if (VAR_9)
   FUNC_6(&VAR_5);
 } else if (VAR_4) {
  VAR_10 = FUNC_3(VAR_3, VAR_4, &VAR_8,
       VAR_7);
 } else {
  FUNC_0();
 }

 if (VAR_10)
  return FUNC_1(VAR_10);

 VAR_8->pin = VAR_1;
 VAR_8->unpin = VAR_2;

 return VAR_8;
}
