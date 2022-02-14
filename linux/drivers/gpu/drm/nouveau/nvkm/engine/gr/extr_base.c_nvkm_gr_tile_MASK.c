
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_gr {TYPE_1__* func; } ;
struct nvkm_fb_tile {int dummy; } ;
struct nvkm_engine {int dummy; } ;
struct TYPE_2__ {int (* tile ) (struct nvkm_gr*,int,struct nvkm_fb_tile*) ;} ;


 struct nvkm_gr* FUNC_0 (struct nvkm_engine*) ;
 int FUNC_1 (struct nvkm_gr*,int,struct nvkm_fb_tile*) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_engine *VAR_0, int VAR_1, struct nvkm_fb_tile *VAR_2)
{
 struct nvkm_gr *VAR_3 = FUNC_0(VAR_0);
 if (VAR_3->func->tile)
  VAR_3->func->tile(VAR_3, VAR_1, VAR_2);
}
