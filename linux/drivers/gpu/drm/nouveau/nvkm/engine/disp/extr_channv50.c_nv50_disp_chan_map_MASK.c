
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_device {TYPE_6__* func; } ;
struct nv50_disp_chan {TYPE_1__* func; TYPE_5__* disp; } ;
typedef enum nvkm_object_map { ____Placeholder_nvkm_object_map } nvkm_object_map ;
struct TYPE_12__ {scalar_t__ (* resource_addr ) (struct nvkm_device*,int ) ;} ;
struct TYPE_8__ {struct nvkm_device* device; } ;
struct TYPE_9__ {TYPE_2__ subdev; } ;
struct TYPE_10__ {TYPE_3__ engine; } ;
struct TYPE_11__ {TYPE_4__ base; } ;
struct TYPE_7__ {scalar_t__ const (* user ) (struct nv50_disp_chan*,scalar_t__*) ;} ;


 int VAR_0 ;
 struct nv50_disp_chan* FUNC_0 (struct nvkm_object*) ;
 scalar_t__ FUNC_1 (struct nvkm_device*,int ) ;
 scalar_t__ const FUNC_2 (struct nv50_disp_chan*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_object *VAR_1, void *VAR_2, u32 VAR_3,
     enum nvkm_object_map *VAR_4, u64 *VAR_5, u64 *VAR_6)
{
 struct nv50_disp_chan *VAR_7 = FUNC_0(VAR_1);
 struct nvkm_device *VAR_8 = VAR_7->disp->base.engine.subdev.device;
 const u64 VAR_9 = VAR_8->func->resource_addr(VAR_8, 0);
 *VAR_4 = VAR_0;
 *VAR_5 = VAR_9 + VAR_7->func->user(VAR_7, VAR_6);
 return 0;
}
