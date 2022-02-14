
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct gf100_grctx {int* buffer; TYPE_5__* mmio; scalar_t__ data; TYPE_4__* gr; } ;
struct TYPE_10__ {int addr; int data; int shift; int buffer; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;
struct TYPE_8__ {TYPE_2__ engine; } ;
struct TYPE_9__ {TYPE_3__ base; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

void
FUNC_1(struct gf100_grctx *VAR_0, u32 VAR_1, u32 VAR_2,
        int VAR_3, int VAR_4)
{
 struct nvkm_device *VAR_5 = VAR_0->gr->base.engine.subdev.device;
 if (VAR_0->data) {
  if (VAR_3 >= 0) {
   VAR_0->mmio->addr = VAR_1;
   VAR_0->mmio->data = VAR_2;
   VAR_0->mmio->shift = VAR_3;
   VAR_0->mmio->buffer = VAR_4;
   if (VAR_4 >= 0)
    VAR_2 |= VAR_0->buffer[VAR_4] >> VAR_3;
   VAR_0->mmio++;
  } else
   return;
 } else {
  if (VAR_4 >= 0)
   return;
 }

 FUNC_0(VAR_5, VAR_1, VAR_2);
}
