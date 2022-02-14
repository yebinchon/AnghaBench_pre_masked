
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_oclass {TYPE_2__* engine; } ;
struct nvkm_object {int dummy; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int FUNC_0 (int ,struct nvkm_oclass const*,void*,int ,struct nvkm_object**) ;

__attribute__((used)) static int
FUNC_1(const struct nvkm_oclass *VAR_0, void *VAR_1, u32 VAR_2,
    struct nvkm_object **VAR_3)
{
 return FUNC_0(VAR_0->engine->subdev.device,
       VAR_0, VAR_1, VAR_2, VAR_3);
}
