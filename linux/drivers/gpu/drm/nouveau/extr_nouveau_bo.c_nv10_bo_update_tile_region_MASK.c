
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_fb_tile {scalar_t__ pitch; } ;
struct TYPE_5__ {struct nvkm_fb_tile* region; } ;
struct nvkm_fb {TYPE_2__ tile; } ;
struct nouveau_drm_tile {int fence; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_6__ {struct nouveau_drm_tile* reg; } ;
struct nouveau_drm {TYPE_1__ client; TYPE_3__ tile; } ;
struct drm_device {int dummy; } ;


 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_fb*,int,struct nvkm_fb_tile*) ;
 int FUNC_3 (struct nvkm_fb*,int,int ,int ,int ,int ,struct nvkm_fb_tile*) ;
 int FUNC_4 (struct nvkm_fb*,int,struct nvkm_fb_tile*) ;
 struct nvkm_fb* FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct drm_device *VAR_0, struct nouveau_drm_tile *VAR_1,
      u32 VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_0(VAR_0);
 int VAR_7 = VAR_1 - VAR_6->tile.reg;
 struct nvkm_fb *VAR_8 = FUNC_5(&VAR_6->client.device);
 struct nvkm_fb_tile *VAR_9 = &VAR_8->tile.region[VAR_7];

 FUNC_1(&VAR_1->fence);

 if (VAR_9->pitch)
  FUNC_2(VAR_8, VAR_7, VAR_9);

 if (VAR_4)
  FUNC_3(VAR_8, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_9);

 FUNC_4(VAR_8, VAR_7, VAR_9);
}
