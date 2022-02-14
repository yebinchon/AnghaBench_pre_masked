
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_memory {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gk104_fifo {TYPE_3__ base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_memory*) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct gk104_fifo *VAR_0, int VAR_1,
     struct nvkm_memory *VAR_2, int VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_0->base.engine.subdev.device;
 u64 VAR_5 = FUNC_1(VAR_2);


 FUNC_2(VAR_4, 0x002b00 + (VAR_1 * 0x10), FUNC_0(VAR_5));
 FUNC_2(VAR_4, 0x002b04 + (VAR_1 * 0x10), FUNC_3(VAR_5));
 FUNC_2(VAR_4, 0x002b08 + (VAR_1 * 0x10), VAR_3);


}
