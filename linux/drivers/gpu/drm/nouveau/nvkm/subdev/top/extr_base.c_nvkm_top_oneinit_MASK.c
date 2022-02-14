
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_top {TYPE_1__* func; } ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {int (* oneinit ) (struct nvkm_top*) ;} ;


 struct nvkm_top* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_top*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_subdev *VAR_0)
{
 struct nvkm_top *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->func->oneinit(VAR_1);
}
