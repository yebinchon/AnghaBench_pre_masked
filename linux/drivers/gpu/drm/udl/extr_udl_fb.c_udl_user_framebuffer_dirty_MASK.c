
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udl_framebuffer {TYPE_3__* obj; int active_16; } ;
struct drm_framebuffer {int dev; } ;
struct drm_file {int dummy; } ;
struct drm_clip_rect {scalar_t__ y1; scalar_t__ y2; scalar_t__ x1; scalar_t__ x2; } ;
struct TYPE_5__ {TYPE_1__* import_attach; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct TYPE_4__ {int dmabuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct udl_framebuffer* FUNC_4 (struct drm_framebuffer*) ;
 int FUNC_5 (struct udl_framebuffer*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct drm_framebuffer *VAR_1,
          struct drm_file *VAR_2,
          unsigned VAR_3, unsigned VAR_4,
          struct drm_clip_rect *VAR_5,
          unsigned VAR_6)
{
 struct udl_framebuffer *VAR_7 = FUNC_4(VAR_1);
 int VAR_8;
 int VAR_9 = 0;

 FUNC_2(VAR_1->dev);

 if (!VAR_7->active_16)
  goto unlock;

 if (VAR_7->obj->base.import_attach) {
  VAR_9 = FUNC_0(VAR_7->obj->base.import_attach->dmabuf,
            VAR_0);
  if (VAR_9)
   goto unlock;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_9 = FUNC_5(VAR_7, VAR_5[VAR_8].x1, VAR_5[VAR_8].y1,
      VAR_5[VAR_8].x2 - VAR_5[VAR_8].x1,
      VAR_5[VAR_8].y2 - VAR_5[VAR_8].y1);
  if (VAR_9)
   break;
 }

 if (VAR_7->obj->base.import_attach) {
  VAR_9 = FUNC_1(VAR_7->obj->base.import_attach->dmabuf,
          VAR_0);
 }

 unlock:
 FUNC_3(VAR_1->dev);

 return VAR_9;
}
