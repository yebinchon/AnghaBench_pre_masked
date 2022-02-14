
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct psb_framebuffer {TYPE_1__ base; } ;
struct psb_fbdev {struct psb_framebuffer pfb; } ;
struct fb_info {struct psb_fbdev* par; } ;
struct drm_psb_private {int lock_2d; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 unsigned long VAR_6 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;

int FUNC_5(struct fb_info *VAR_7)
{
 struct psb_fbdev *VAR_8 = VAR_7->par;
 struct psb_framebuffer *VAR_9 = &VAR_8->pfb;
 struct drm_device *VAR_10 = VAR_9->base.dev;
 struct drm_psb_private *VAR_11 = VAR_10->dev_private;
 unsigned long VAR_12 = VAR_6 + VAR_1;
 int VAR_13 = 0;
 unsigned long VAR_14;

 FUNC_2(&VAR_11->lock_2d, VAR_14);




 if ((FUNC_0(VAR_3) == VAR_5) &&
     ((FUNC_0(VAR_2) & VAR_4) == 0))
  goto out;

 do {
  VAR_13 = (FUNC_0(VAR_3) != VAR_5);
  FUNC_1();
 } while (VAR_13 && !FUNC_4(VAR_6, VAR_12));

 if (VAR_13)
  VAR_13 = (FUNC_0(VAR_3) != VAR_5);
 if (VAR_13)
  goto out;

 do {
  VAR_13 = ((FUNC_0(VAR_2) &
      VAR_4) != 0);
  FUNC_1();
 } while (VAR_13 && !FUNC_4(VAR_6, VAR_12));
 if (VAR_13)
  VAR_13 = ((FUNC_0(VAR_2) &
     VAR_4) != 0);

out:
 FUNC_3(&VAR_11->lock_2d, VAR_14);
 return (VAR_13) ? -VAR_0 : 0;
}
