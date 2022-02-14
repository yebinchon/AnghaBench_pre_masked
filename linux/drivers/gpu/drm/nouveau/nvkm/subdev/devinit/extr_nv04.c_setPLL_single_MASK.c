
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct nvkm_pll_vals {int log2P; int NM1; int M1; int N1; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct nvkm_devinit {TYPE_1__ subdev; } ;
struct nvkm_device {TYPE_3__* bios; } ;
struct TYPE_5__ {int chip; } ;
struct TYPE_6__ {TYPE_2__ version; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;
 int FUNC_3 (int,int) ;

void
FUNC_4(struct nvkm_devinit *VAR_0, u32 VAR_1,
       struct nvkm_pll_vals *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->subdev.device;
 int VAR_4 = VAR_3->bios->version.chip;
 uint32_t VAR_5 = FUNC_1(VAR_3, VAR_1);
 int VAR_6 = (VAR_5 >> 8) & 0xff, VAR_7 = VAR_5 & 0xff;
 uint32_t VAR_8 = (VAR_5 & 0xfff80000) | VAR_2->log2P << 16 | VAR_2->NM1;
 uint32_t VAR_9 = 0;
 int VAR_10 = FUNC_3(VAR_4, VAR_1);

 if (VAR_5 == VAR_8)
  return;

 if (VAR_10 >= 0) {
  VAR_9 = FUNC_1(VAR_3, 0x001584);
  FUNC_2(VAR_3, 0x001584,
   (VAR_9 & ~(0xf << VAR_10)) |
   1 << VAR_10);
 }

 if (VAR_7 && VAR_2->M1 && (VAR_6 / VAR_7 < VAR_2->N1 / VAR_2->M1))

  FUNC_2(VAR_3, VAR_1, VAR_2->log2P << 16 | (VAR_5 & 0xffff));
 else

  FUNC_2(VAR_3, VAR_1, (VAR_5 & 0xffff0000) | VAR_2->NM1);

 if ((VAR_4 < 0x17 || VAR_4 == 0x1a) &&
     VAR_4 != 0x11)

  FUNC_0(64);
 FUNC_1(VAR_3, VAR_1);


 FUNC_2(VAR_3, VAR_1, VAR_8);

 if (VAR_10 >= 0)
  FUNC_2(VAR_3, 0x001584, VAR_9);
}
