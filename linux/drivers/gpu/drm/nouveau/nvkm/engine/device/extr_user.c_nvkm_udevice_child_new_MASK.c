
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_udevice {int device; } ;
struct nvkm_oclass {struct nvkm_device_oclass* priv; int parent; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_device_oclass {int (* ctor ) (int ,struct nvkm_oclass const*,void*,int ,struct nvkm_object**) ;} ;


 struct nvkm_udevice* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct nvkm_oclass const*,void*,int ,struct nvkm_object**) ;

__attribute__((used)) static int
FUNC_2(const struct nvkm_oclass *VAR_0,
         void *VAR_1, u32 VAR_2, struct nvkm_object **VAR_3)
{
 struct nvkm_udevice *VAR_4 = FUNC_0(VAR_0->parent);
 const struct nvkm_device_oclass *VAR_5 = VAR_0->priv;
 return VAR_5->ctor(VAR_4->device, VAR_0, VAR_1, VAR_2, VAR_3);
}
