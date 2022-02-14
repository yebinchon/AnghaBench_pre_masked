
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* obj; } ;
struct psb_framebuffer {TYPE_1__ base; } ;
struct psb_fbdev {int psb_fb_helper; struct psb_framebuffer pfb; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_0, struct psb_fbdev *VAR_1)
{
 struct psb_framebuffer *VAR_2 = &VAR_1->pfb;

 FUNC_1(&VAR_1->psb_fb_helper);

 FUNC_0(&VAR_1->psb_fb_helper);
 FUNC_3(&VAR_2->base);
 FUNC_2(&VAR_2->base);

 if (VAR_2->base.obj[0])
  FUNC_4(VAR_2->base.obj[0]);
 return 0;
}
