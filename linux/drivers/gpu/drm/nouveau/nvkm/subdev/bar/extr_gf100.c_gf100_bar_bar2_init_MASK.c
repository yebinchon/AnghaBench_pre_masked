
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct nvkm_bar {TYPE_1__ subdev; } ;
struct gf100_bar {scalar_t__ bar2_halve; TYPE_2__* bar; } ;
struct TYPE_4__ {int inst; } ;


 struct gf100_bar* FUNC_0 (struct nvkm_bar*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

void
FUNC_3(struct nvkm_bar *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 struct gf100_bar *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = FUNC_1(VAR_2->bar[0].inst) >> 12;
 if (VAR_2->bar2_halve)
  VAR_3 |= 0x40000000;
 FUNC_2(VAR_1, 0x001714, 0x80000000 | VAR_3);
}
