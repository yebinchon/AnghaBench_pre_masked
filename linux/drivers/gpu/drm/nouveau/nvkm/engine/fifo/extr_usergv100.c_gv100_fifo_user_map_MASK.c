
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_object {TYPE_2__* engine; } ;
struct nvkm_device {TYPE_3__* func; } ;
typedef enum nvkm_object_map { ____Placeholder_nvkm_object_map } nvkm_object_map ;
struct TYPE_6__ {int (* resource_addr ) (struct nvkm_device*,int ) ;} ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int ) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_object *VAR_1, void *VAR_2, u32 VAR_3,
      enum nvkm_object_map *VAR_4, u64 *VAR_5, u64 *VAR_6)
{
 struct nvkm_device *VAR_7 = VAR_1->engine->subdev.device;
 *VAR_5 = 0x810000 + VAR_7->func->resource_addr(VAR_7, 0);
 *VAR_6 = 0x010000;
 *VAR_4 = VAR_0;
 return 0;
}
