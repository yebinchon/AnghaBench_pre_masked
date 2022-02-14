
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_fb_tile {int dummy; } ;
struct nvkm_fb {TYPE_2__* func; } ;
struct TYPE_3__ {int (* fini ) (struct nvkm_fb*,int,struct nvkm_fb_tile*) ;} ;
struct TYPE_4__ {TYPE_1__ tile; } ;


 int FUNC_0 (struct nvkm_fb*,int,struct nvkm_fb_tile*) ;

void
FUNC_1(struct nvkm_fb *VAR_0, int VAR_1, struct nvkm_fb_tile *VAR_2)
{
 VAR_0->func->tile.fini(VAR_0, VAR_1, VAR_2);
}
