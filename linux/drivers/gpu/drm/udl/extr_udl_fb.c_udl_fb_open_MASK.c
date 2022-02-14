
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_3__ {TYPE_2__ base; } ;
struct udl_fbdev {int fb_count; TYPE_1__ ufb; } ;
struct udl_device {int drm; } ;
struct fb_info {int node; struct fb_deferred_io* fbdefio; struct udl_fbdev* par; } ;
struct fb_deferred_io {int deferred_io; int delay; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct fb_info*) ;
 scalar_t__ VAR_4 ;
 struct fb_deferred_io* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ,int,struct fb_info*,int ) ;
 struct udl_device* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_5, int VAR_6)
{
 struct udl_fbdev *VAR_7 = VAR_5->par;
 struct drm_device *VAR_8 = VAR_7->ufb.base.dev;
 struct udl_device *VAR_9 = FUNC_4(VAR_8);


 if (FUNC_0(&VAR_9->drm))
  return -VAR_1;

 VAR_7->fb_count++;
 FUNC_3("open /dev/fb%d user=%d fb_info=%p count=%d\n",
    VAR_5->node, VAR_6, VAR_5, VAR_7->fb_count);

 return 0;
}
