
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_falcon {TYPE_2__* func; TYPE_1__* owner; } ;
struct nvkm_device {int dummy; } ;
typedef enum nvkm_devidx { ____Placeholder_nvkm_devidx } nvkm_devidx ;
struct TYPE_4__ {int (* enable ) (struct nvkm_falcon*) ;} ;
struct TYPE_3__ {int index; struct nvkm_device* device; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_falcon*) ;

int
FUNC_3(struct nvkm_falcon *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->owner->device;
 enum nvkm_devidx VAR_2 = VAR_0->owner->index;
 int VAR_3;

 FUNC_1(VAR_1, VAR_2);
 VAR_3 = VAR_0->func->enable(VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_1, VAR_2);
  return VAR_3;
 }

 return 0;
}
