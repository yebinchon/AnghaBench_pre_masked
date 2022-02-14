
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_instmem {TYPE_1__* func; } ;
struct TYPE_2__ {int (* oneinit ) (struct nvkm_instmem*) ;} ;


 struct nvkm_instmem* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_instmem*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_subdev *VAR_0)
{
 struct nvkm_instmem *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->func->oneinit)
  return VAR_1->func->oneinit(VAR_1);
 return 0;
}
