
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fifo {int dummy; } ;
struct nvkm_device {struct nvkm_fifo* fifo; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_clk {TYPE_1__ subdev; } ;


 int FUNC_0 (struct nvkm_fifo*,unsigned long*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;

void
FUNC_2(struct nvkm_clk *VAR_0, unsigned long *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;
 struct nvkm_fifo *VAR_3 = VAR_2->fifo;

 if (VAR_3 && VAR_1)
  FUNC_0(VAR_3, VAR_1);

 FUNC_1(VAR_2, 0x002504, 0x00000001, 0x00000000);
 FUNC_1(VAR_2, 0x020060, 0x00070000, 0x00040000);
}
