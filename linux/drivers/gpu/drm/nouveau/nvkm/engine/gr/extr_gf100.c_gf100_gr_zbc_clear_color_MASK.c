
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gf100_gr {TYPE_4__* zbc_color; TYPE_3__ base; } ;
struct TYPE_8__ {int format; int* ds; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct gf100_gr *VAR_0, int VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->base.engine.subdev.device;
 if (VAR_0->zbc_color[VAR_1].format) {
  FUNC_0(VAR_2, 0x405804, VAR_0->zbc_color[VAR_1].ds[0]);
  FUNC_0(VAR_2, 0x405808, VAR_0->zbc_color[VAR_1].ds[1]);
  FUNC_0(VAR_2, 0x40580c, VAR_0->zbc_color[VAR_1].ds[2]);
  FUNC_0(VAR_2, 0x405810, VAR_0->zbc_color[VAR_1].ds[3]);
 }
 FUNC_0(VAR_2, 0x405814, VAR_0->zbc_color[VAR_1].format);
 FUNC_0(VAR_2, 0x405820, VAR_1);
 FUNC_0(VAR_2, 0x405824, 0x00000004);
}
