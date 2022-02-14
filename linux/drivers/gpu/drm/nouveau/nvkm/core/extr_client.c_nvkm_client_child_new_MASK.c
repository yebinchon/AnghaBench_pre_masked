
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* ctor ) (struct nvkm_oclass const*,void*,int ,struct nvkm_object**) ;} ;
struct nvkm_oclass {TYPE_1__ base; } ;
struct nvkm_object {int dummy; } ;


 int FUNC_0 (struct nvkm_oclass const*,void*,int ,struct nvkm_object**) ;

__attribute__((used)) static int
FUNC_1(const struct nvkm_oclass *VAR_0,
        void *VAR_1, u32 VAR_2, struct nvkm_object **VAR_3)
{
 return VAR_0->base.ctor(VAR_0, VAR_1, VAR_2, VAR_3);
}
