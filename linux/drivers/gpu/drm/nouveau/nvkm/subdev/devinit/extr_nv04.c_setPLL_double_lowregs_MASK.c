
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct nvkm_pll_vals {int NM2; int NM1; int log2P; scalar_t__ N2; scalar_t__ M2; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_devinit {TYPE_1__ subdev; } ;
struct nvkm_device {int bios; } ;
struct nvbios_pll {int bias_p; int max_p; } ;


 scalar_t__ FUNC_0 (int ,int,struct nvbios_pll*) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

void
FUNC_3(struct nvkm_devinit *VAR_0, u32 VAR_1,
        struct nvkm_pll_vals *VAR_2)
{







 struct nvkm_device *VAR_3 = VAR_0->subdev.device;
 uint32_t VAR_4 = VAR_1 - 4;
 bool VAR_5 = VAR_4 == 0x4020;
 uint32_t VAR_6 = FUNC_1(VAR_3, VAR_4);
 uint32_t VAR_7 = VAR_2->NM2 << 16 | VAR_2->NM1;
 uint32_t VAR_8 = (VAR_6 & (VAR_5 ? ~(0x77 << 16) : ~(7 << 16))) |
   0xc << 28 | VAR_2->log2P << 16;
 uint32_t VAR_9 = 0;

 uint32_t VAR_10 = ~(3 << 14), VAR_11;
 bool VAR_12 = !VAR_2->NM2 || VAR_2->N2 == VAR_2->M2;

 if (FUNC_1(VAR_3, VAR_1) == VAR_7 && (VAR_6 & 0xc0070000) == VAR_8)
  return;

 if (VAR_4 == 0x4000)
  VAR_10 = ~0x333;
 if (VAR_4 == 0x4058)
  VAR_10 = ~(0xc << 24);

 if (VAR_5) {
  struct nvbios_pll VAR_13;
  uint8_t VAR_14;

  if (FUNC_0(VAR_3->bios, VAR_4, &VAR_13))
   return;

  VAR_14 = VAR_2->log2P + VAR_13.bias_p;
  if (VAR_14 > VAR_13.max_p)
   VAR_14 = VAR_13.max_p;
  VAR_8 |= 1 << 28 | VAR_14 << 20;

  VAR_9 = FUNC_1(VAR_3, 0x4600);
  FUNC_2(VAR_3, 0x4600, VAR_9 | 8 << 28);
 }
 if (VAR_12)
  VAR_8 |= VAR_5 ? 1 << 12 : 1 << 8;

 FUNC_2(VAR_3, VAR_4, VAR_6 | 1 << 28);
 FUNC_2(VAR_3, VAR_4, VAR_8 & ~(4 << 28));
 if (VAR_5) {
  VAR_8 |= 8 << 20;
  FUNC_2(VAR_3, 0x4020, VAR_8 & ~(0xc << 28));
  FUNC_2(VAR_3, 0x4038, VAR_8 & ~(0xc << 28));
 }

 VAR_11 = FUNC_1(VAR_3, 0xc040);
 FUNC_2(VAR_3, 0xc040, VAR_11 & VAR_10);

 FUNC_2(VAR_3, VAR_1, VAR_7);
 if (VAR_1 == 0x4024)
  FUNC_2(VAR_3, 0x403c, VAR_7);

 FUNC_2(VAR_3, VAR_4, VAR_8);
 if (VAR_5) {
  VAR_8 &= ~(8 << 20);
  FUNC_2(VAR_3, 0x4020, VAR_8);
  FUNC_2(VAR_3, 0x4038, VAR_8);
  FUNC_2(VAR_3, 0x4600, VAR_9);
 }

 FUNC_2(VAR_3, 0xc040, VAR_11);

 if (VAR_5) {
  FUNC_2(VAR_3, 0x4020, VAR_8 & ~(1 << 28));
  FUNC_2(VAR_3, 0x4038, VAR_8 & ~(1 << 28));
 }
}
