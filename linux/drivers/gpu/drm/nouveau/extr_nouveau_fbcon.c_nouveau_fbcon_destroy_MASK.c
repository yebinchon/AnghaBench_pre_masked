
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_framebuffer {int base; scalar_t__ nvbo; int vma; } ;
struct TYPE_3__ {int fb; } ;
struct nouveau_fbdev {TYPE_1__ helper; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct nouveau_framebuffer* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct drm_device *VAR_0, struct nouveau_fbdev *VAR_1)
{
 struct nouveau_framebuffer *VAR_2 = FUNC_5(VAR_1->helper.fb);

 FUNC_1(&VAR_1->helper);
 FUNC_0(&VAR_1->helper);

 if (VAR_2 && VAR_2->nvbo) {
  FUNC_6(&VAR_2->vma);
  FUNC_3(VAR_2->nvbo);
  FUNC_4(VAR_2->nvbo);
  FUNC_2(&VAR_2->base);
 }

 return 0;
}
