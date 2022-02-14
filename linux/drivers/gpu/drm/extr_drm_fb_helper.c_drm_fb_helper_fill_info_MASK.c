
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct fb_info {TYPE_2__ fix; struct drm_fb_helper* par; } ;
struct drm_framebuffer {TYPE_1__* format; int * pitches; } ;
struct drm_fb_helper_surface_size {int fb_height; int fb_width; } ;
struct drm_fb_helper {TYPE_4__* dev; struct drm_framebuffer* fb; } ;
struct TYPE_8__ {TYPE_3__* driver; } ;
struct TYPE_7__ {char* name; } ;
struct TYPE_5__ {int depth; } ;


 int FUNC_0 (struct fb_info*,int ,int ) ;
 int FUNC_1 (struct fb_info*,struct drm_fb_helper*,int ,int ) ;
 int FUNC_2 (int ,int,char*,char*) ;

void FUNC_3(struct fb_info *VAR_0,
        struct drm_fb_helper *VAR_1,
        struct drm_fb_helper_surface_size *VAR_2)
{
 struct drm_framebuffer *VAR_3 = VAR_1->fb;

 FUNC_0(VAR_0, VAR_3->pitches[0], VAR_3->format->depth);
 FUNC_1(VAR_0, VAR_1,
          VAR_2->fb_width, VAR_2->fb_height);

 VAR_0->par = VAR_1;
 FUNC_2(VAR_0->fix.id, sizeof(VAR_0->fix.id), "%sdrmfb",
   VAR_1->dev->driver->name);

}
