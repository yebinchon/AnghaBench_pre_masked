
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int index; int device; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct nvkm_nvdec {int falcon; int addr; TYPE_1__ engine; } ;
struct nvkm_engine {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int ,int *) ;
 struct nvkm_nvdec* FUNC_1 (struct nvkm_engine*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_engine *VAR_1)
{
 struct nvkm_nvdec *VAR_2 = FUNC_1(VAR_1);
 struct nvkm_subdev *VAR_3 = &VAR_2->engine.subdev;

 VAR_2->addr = FUNC_2(VAR_3->device, VAR_3->index);
 if (!VAR_2->addr)
  return -VAR_0;


 return FUNC_0(VAR_3, "NVDEC", VAR_2->addr,
      &VAR_2->falcon);
}
