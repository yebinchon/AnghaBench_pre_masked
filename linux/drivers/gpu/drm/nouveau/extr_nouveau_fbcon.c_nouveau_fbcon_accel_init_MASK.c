
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct fb_info* fbdev; } ;
struct nouveau_fbdev {TYPE_1__ helper; } ;
struct TYPE_6__ {scalar_t__ family; } ;
struct TYPE_8__ {TYPE_2__ info; } ;
struct TYPE_7__ {TYPE_4__ device; } ;
struct nouveau_drm {TYPE_3__ client; struct nouveau_fbdev* fbcon; } ;
struct fb_info {int * fbops; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;

__attribute__((used)) static void
FUNC_4(struct drm_device *VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_0(VAR_3);
 struct nouveau_fbdev *VAR_5 = VAR_4->fbcon;
 struct fb_info *VAR_6 = VAR_5->helper.fbdev;
 int VAR_7;

 if (VAR_4->client.device.info.family < VAR_1)
  VAR_7 = FUNC_1(VAR_6);
 else
 if (VAR_4->client.device.info.family < VAR_0)
  VAR_7 = FUNC_2(VAR_6);
 else
  VAR_7 = FUNC_3(VAR_6);

 if (VAR_7 == 0)
  VAR_6->fbops = &VAR_2;
}
