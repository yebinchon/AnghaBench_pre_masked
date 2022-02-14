
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_udevice {struct nvkm_device* device; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_device {TYPE_1__* func; } ;
typedef enum nvkm_object_map { ____Placeholder_nvkm_object_map } nvkm_object_map ;
struct TYPE_2__ {int (* resource_size ) (struct nvkm_device*,int ) ;int (* resource_addr ) (struct nvkm_device*,int ) ;} ;


 int VAR_0 ;
 struct nvkm_udevice* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (struct nvkm_device*,int ) ;
 int FUNC_2 (struct nvkm_device*,int ) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_object *VAR_1, void *VAR_2, u32 VAR_3,
   enum nvkm_object_map *VAR_4, u64 *VAR_5, u64 *VAR_6)
{
 struct nvkm_udevice *VAR_7 = FUNC_0(VAR_1);
 struct nvkm_device *VAR_8 = VAR_7->device;
 *VAR_4 = VAR_0;
 *VAR_5 = VAR_8->func->resource_addr(VAR_8, 0);
 *VAR_6 = VAR_8->func->resource_size(VAR_8, 0);
 return 0;
}
