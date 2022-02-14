
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int active_display_unit; int dev; int reservation_sem; } ;
struct vmw_framebuffer_bo {int base; } ;
struct drm_framebuffer {int height; int width; int dev; } ;
struct drm_file {int dummy; } ;
struct drm_clip_rect {int y2; int x2; scalar_t__ y1; scalar_t__ x1; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

 int FUNC_6 (struct vmw_private*,int) ;
 struct vmw_framebuffer_bo* FUNC_7 (struct drm_framebuffer*) ;
 int FUNC_8 (struct vmw_private*,int *,int ,int ,struct drm_clip_rect*,unsigned int,int) ;
 struct vmw_private* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct drm_framebuffer *VAR_2,
        struct drm_file *VAR_3,
        unsigned int VAR_4, unsigned int VAR_5,
        struct drm_clip_rect *VAR_6,
        unsigned int VAR_7)
{
 struct vmw_private *VAR_8 = FUNC_9(VAR_2->dev);
 struct vmw_framebuffer_bo *VAR_9 =
  FUNC_7(VAR_2);
 struct drm_clip_rect VAR_10;
 int VAR_11, VAR_12 = 1;

 FUNC_1(VAR_8->dev);

 VAR_11 = FUNC_3(&VAR_8->reservation_sem, 1);
 if (FUNC_5(VAR_11 != 0)) {
  FUNC_2(VAR_8->dev);
  return VAR_11;
 }

 if (!VAR_7) {
  VAR_7 = 1;
  VAR_6 = &VAR_10;
  VAR_10.x1 = VAR_10.y1 = 0;
  VAR_10.x2 = VAR_2->width;
  VAR_10.y2 = VAR_2->height;
 } else if (VAR_4 & VAR_0) {
  VAR_7 /= 2;
  VAR_12 = 2;
 }

 switch (VAR_8->active_display_unit) {
 case 128:
  VAR_11 = FUNC_8(VAR_8, &VAR_9->base, 0, 0,
           VAR_6, VAR_7, VAR_12);
  break;
 default:
  VAR_11 = -VAR_1;
  FUNC_0(1, "Dirty called with invalid display system.\n");
  break;
 }

 FUNC_6(VAR_8, 0);
 FUNC_4(&VAR_8->reservation_sem);

 FUNC_2(VAR_8->dev);

 return VAR_11;
}
