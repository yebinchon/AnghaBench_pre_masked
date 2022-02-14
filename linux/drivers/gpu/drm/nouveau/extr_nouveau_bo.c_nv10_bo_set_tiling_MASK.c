
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int regions; TYPE_2__* region; } ;
struct nvkm_fb {TYPE_3__ tile; } ;
struct nouveau_drm_tile {int dummy; } ;
struct TYPE_4__ {int device; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct drm_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ pitch; } ;


 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 struct nouveau_drm_tile* FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*,struct nouveau_drm_tile*,int *) ;
 int FUNC_3 (struct drm_device*,struct nouveau_drm_tile*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 struct nvkm_fb* FUNC_4 (int *) ;

__attribute__((used)) static struct nouveau_drm_tile *
FUNC_5(struct drm_device *VAR_0, u32 VAR_1,
     u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_0(VAR_0);
 struct nvkm_fb *VAR_6 = FUNC_4(&VAR_5->client.device);
 struct nouveau_drm_tile *VAR_7, *VAR_8 = ((void*)0);
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6->tile.regions; VAR_9++) {
  VAR_7 = FUNC_1(VAR_0, VAR_9);

  if (VAR_3 && !VAR_8) {
   VAR_8 = VAR_7;
   continue;

  } else if (VAR_7 && VAR_6->tile.region[VAR_9].pitch) {

   FUNC_3(VAR_0, VAR_7, 0, 0, 0, 0);
  }

  FUNC_2(VAR_0, VAR_7, ((void*)0));
 }

 if (VAR_8)
  FUNC_3(VAR_0, VAR_8, VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_8;
}
