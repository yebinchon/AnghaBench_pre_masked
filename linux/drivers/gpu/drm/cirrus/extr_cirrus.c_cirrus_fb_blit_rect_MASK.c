
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_rect {int dummy; } ;
struct drm_framebuffer {int * obj; TYPE_2__* format; TYPE_1__* dev; } ;
struct cirrus_device {int cpp; int pitch; int vram; } ;
struct TYPE_4__ {int* cpp; } ;
struct TYPE_3__ {struct cirrus_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,void*,struct drm_framebuffer*,struct drm_rect*) ;
 int FUNC_2 (int ,int ,void*,struct drm_framebuffer*,struct drm_rect*,int) ;
 int FUNC_3 (int ,int ,void*,struct drm_framebuffer*,struct drm_rect*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;

__attribute__((used)) static int FUNC_6(struct drm_framebuffer *VAR_1,
          struct drm_rect *VAR_2)
{
 struct cirrus_device *VAR_3 = VAR_1->dev->dev_private;
 void *VAR_4;

 VAR_4 = FUNC_4(VAR_1->obj[0]);
 if (!VAR_4)
  return -VAR_0;

 if (VAR_3->cpp == VAR_1->format->cpp[0])
  FUNC_1(VAR_3->vram,
          VAR_4, VAR_1, VAR_2);

 else if (VAR_1->format->cpp[0] == 4 && VAR_3->cpp == 2)
  FUNC_2(VAR_3->vram,
        VAR_3->pitch,
        VAR_4, VAR_1, VAR_2, 0);

 else if (VAR_1->format->cpp[0] == 4 && VAR_3->cpp == 3)
  FUNC_3(VAR_3->vram,
        VAR_3->pitch,
        VAR_4, VAR_1, VAR_2);

 else
  FUNC_0("cpp mismatch");

 FUNC_5(VAR_1->obj[0], VAR_4);
 return 0;
}
