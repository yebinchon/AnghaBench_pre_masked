
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_fb_tile {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct nvkm_fb {TYPE_3__* func; TYPE_1__ subdev; } ;
struct nvkm_device {int * mpeg; TYPE_4__* gr; } ;
struct TYPE_8__ {int engine; } ;
struct TYPE_6__ {int (* prog ) (struct nvkm_fb*,int,struct nvkm_fb_tile*) ;} ;
struct TYPE_7__ {TYPE_2__ tile; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nvkm_fb*,int,struct nvkm_fb_tile*) ;

void
FUNC_2(struct nvkm_fb *VAR_0, int VAR_1, struct nvkm_fb_tile *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->subdev.device;
 if (VAR_0->func->tile.prog) {
  VAR_0->func->tile.prog(VAR_0, VAR_1, VAR_2);
  if (VAR_3->gr)
   FUNC_0(&VAR_3->gr->engine, VAR_1);
  if (VAR_3->mpeg)
   FUNC_0(VAR_3->mpeg, VAR_1);
 }
}
