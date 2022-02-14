
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gf100_gr {TYPE_4__* zbc_color; TYPE_3__ base; } ;
struct TYPE_8__ {int format; int * ds; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int const) ;
 int FUNC_1 (struct nvkm_device*,int const,int ) ;

void
FUNC_2(struct gf100_gr *VAR_0, int VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->base.engine.subdev.device;
 const int VAR_3 = VAR_1 - 1;
 const u32 VAR_4 = VAR_3 * 4;

 if (VAR_0->zbc_color[VAR_1].format) {
  FUNC_1(VAR_2, 0x418010 + VAR_4, VAR_0->zbc_color[VAR_1].ds[0]);
  FUNC_1(VAR_2, 0x41804c + VAR_4, VAR_0->zbc_color[VAR_1].ds[1]);
  FUNC_1(VAR_2, 0x418088 + VAR_4, VAR_0->zbc_color[VAR_1].ds[2]);
  FUNC_1(VAR_2, 0x4180c4 + VAR_4, VAR_0->zbc_color[VAR_1].ds[3]);
 }

 FUNC_0(VAR_2, 0x418100 + ((VAR_3 / 4) * 4),
     0x0000007f << ((VAR_3 % 4) * 7),
     VAR_0->zbc_color[VAR_1].format << ((VAR_3 % 4) * 7));
}
