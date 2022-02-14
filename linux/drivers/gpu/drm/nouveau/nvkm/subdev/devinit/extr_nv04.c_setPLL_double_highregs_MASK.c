
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct nvkm_pll_vals {int log2P; int NM1; int NM2; int N2; int M2; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct nvkm_devinit {TYPE_1__ subdev; } ;
struct nvkm_device {TYPE_3__* bios; } ;
struct TYPE_5__ {int chip; } ;
struct TYPE_6__ {TYPE_2__ version; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;
 int FUNC_3 (int,int) ;

void
FUNC_4(struct nvkm_devinit *VAR_0, u32 VAR_1,
         struct nvkm_pll_vals *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->subdev.device;
 int VAR_4 = VAR_3->bios->version.chip;
 bool VAR_5 = VAR_4 == 0x30 || VAR_4 == 0x35;
 uint32_t VAR_6 = VAR_1 + ((VAR_1 == 0x680520) ? 0x5c : 0x70);
 uint32_t VAR_7 = FUNC_1(VAR_3, VAR_1);
 uint32_t VAR_8 = !VAR_5 ? FUNC_1(VAR_3, VAR_6) : 0;
 uint32_t VAR_9 = (VAR_7 & 0xfff80000) | VAR_2->log2P << 16 | VAR_2->NM1;
 uint32_t VAR_10 = (VAR_8 & 0x7fff0000) | 1 << 31 | VAR_2->NM2;
 uint32_t VAR_11 = 0, VAR_12 = 0;
 bool VAR_13 = !VAR_2->NM2 || VAR_2->N2 == VAR_2->M2;
 uint32_t VAR_14 = 0, VAR_15 = 0;
 int VAR_16 = FUNC_3(VAR_4, VAR_1);


 if (VAR_5) {
  VAR_9 = (VAR_9 & 0xfcc7ffff) | (VAR_2->N2 & 0x18) << 21 |
         (VAR_2->N2 & 0x7) << 19 | 8 << 4 | (VAR_2->M2 & 7) << 4;
  VAR_10 = 0;
 }
 if (VAR_4 > 0x40 && VAR_1 >= 0x680508) {
  VAR_11 = FUNC_1(VAR_3, 0x680580);
  VAR_12 = FUNC_0(VAR_1, VAR_13, VAR_11);
  if (VAR_11 != VAR_12)
   VAR_7 = ~0;
  if (VAR_13)

   VAR_10 |= 0x011f;
 }
 if (VAR_4 > 0x70)

  VAR_9 = (VAR_9 & 0x7fffffff) | (VAR_13 ? 0x4 : 0xc) << 28;

 if (VAR_7 == VAR_9 && VAR_8 == VAR_10)
  return;

 if (VAR_16 >= 0) {
  VAR_14 = FUNC_1(VAR_3, 0x001584);
  FUNC_2(VAR_3, 0x001584,
   (VAR_14 & ~(0xf << VAR_16)) |
   1 << VAR_16);
 }

 if (VAR_4 >= 0x40) {
  int VAR_17 = 14;

  switch (VAR_1) {
  case 0x680504:
   VAR_17 += 2;
  case 0x680500:
   VAR_17 += 2;
  case 0x680520:
   VAR_17 += 2;
  case 0x680508:
   VAR_17 += 2;
  }

  VAR_15 = FUNC_1(VAR_3, 0xc040);
  if (VAR_17 != 14)
   FUNC_2(VAR_3, 0xc040, VAR_15 & ~(3 << VAR_17));
 }

 if (VAR_11 != VAR_12)
  FUNC_2(VAR_3, 0x680580, VAR_12);

 if (!VAR_5)
  FUNC_2(VAR_3, VAR_6, VAR_10);
 FUNC_2(VAR_3, VAR_1, VAR_9);

 if (VAR_16 >= 0)
  FUNC_2(VAR_3, 0x001584, VAR_14);
 if (VAR_4 >= 0x40)
  FUNC_2(VAR_3, 0xc040, VAR_15);
}
