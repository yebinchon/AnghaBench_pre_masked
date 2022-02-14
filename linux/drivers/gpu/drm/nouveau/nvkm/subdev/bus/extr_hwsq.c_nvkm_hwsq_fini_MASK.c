
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct TYPE_6__ {int size; scalar_t__ data; } ;
struct nvkm_hwsq {TYPE_3__ c; struct nvkm_subdev* subdev; } ;
struct nvkm_bus {TYPE_2__* func; } ;
struct TYPE_5__ {int hwsq_size; int (* hwsq_exec ) (struct nvkm_bus*,int*,int) ;} ;
struct TYPE_4__ {struct nvkm_bus* bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_hwsq*) ;
 int FUNC_1 (struct nvkm_subdev*,char*,...) ;
 int FUNC_2 (struct nvkm_bus*,int*,int) ;

int
FUNC_3(struct nvkm_hwsq **VAR_1, bool VAR_2)
{
 struct nvkm_hwsq *VAR_3 = *VAR_1;
 int VAR_4 = 0, VAR_5;
 if (VAR_3) {
  struct nvkm_subdev *VAR_6 = VAR_3->subdev;
  struct nvkm_bus *VAR_7 = VAR_6->device->bus;
  VAR_3->c.size = (VAR_3->c.size + 4) / 4;
  if (VAR_3->c.size <= VAR_7->func->hwsq_size) {
   if (VAR_2)
    VAR_4 = VAR_7->func->hwsq_exec(VAR_7,
          (u32 *)VAR_3->c.data,
          VAR_3->c.size);
   if (VAR_4)
    FUNC_1(VAR_6, "hwsq exec failed: %d\n", VAR_4);
  } else {
   FUNC_1(VAR_6, "hwsq ucode too large\n");
   VAR_4 = -VAR_0;
  }

  for (VAR_5 = 0; VAR_4 && VAR_5 < VAR_3->c.size; VAR_5++)
   FUNC_1(VAR_6, "\t%08x\n", ((u32 *)VAR_3->c.data)[VAR_5]);

  *VAR_1 = ((void*)0);
  FUNC_0(VAR_3);
 }
 return VAR_4;
}
