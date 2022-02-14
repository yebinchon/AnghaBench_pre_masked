
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_fault_buffer {int mem; scalar_t__ addr; TYPE_2__* fault; } ;
struct nvkm_device {TYPE_3__* func; } ;
typedef enum nvkm_object_map { ____Placeholder_nvkm_object_map } nvkm_object_map ;
struct TYPE_6__ {scalar_t__ (* resource_addr ) (struct nvkm_device*,int) ;} ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;


 int VAR_0 ;
 struct nvkm_fault_buffer* FUNC_0 (struct nvkm_object*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nvkm_device*,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_object *VAR_1, void *VAR_2, u32 VAR_3,
  enum nvkm_object_map *VAR_4, u64 *VAR_5, u64 *VAR_6)
{
 struct nvkm_fault_buffer *VAR_7 = FUNC_0(VAR_1);
 struct nvkm_device *VAR_8 = VAR_7->fault->subdev.device;
 *VAR_4 = VAR_0;
 *VAR_5 = VAR_8->func->resource_addr(VAR_8, 3) + VAR_7->addr;
 *VAR_6 = FUNC_1(VAR_7->mem);
 return 0;
}
