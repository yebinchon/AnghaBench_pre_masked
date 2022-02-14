
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_4__ subdev; } ;
struct TYPE_6__ {TYPE_1__ engine; } ;
struct gf100_gr {int sm_nr; TYPE_3__* sm; TYPE_2__ base; } ;
struct TYPE_7__ {int gpc; } ;


 int FUNC_0 (int const,int) ;
 int const FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

void
FUNC_3(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 const u8 VAR_2 = FUNC_1(VAR_1, 0x022430);
 const u8 VAR_3 = FUNC_1(VAR_1, 0x022434) * VAR_2;
 int VAR_4, VAR_5, VAR_6 = 0;
 u32 VAR_7;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3, 4); VAR_4++) {
  for (VAR_7 = 0, VAR_5 = 0; VAR_5 < 4; VAR_5++) {
   if (VAR_6 < VAR_0->sm_nr)
    VAR_7 |= VAR_0->sm[VAR_6++].gpc << (VAR_5 * 8);
   else
    VAR_7 |= 0x1f << (VAR_5 * 8);
  }
  FUNC_2(VAR_1, 0x4060a8 + (VAR_4 * 4), VAR_7);
 }
}
