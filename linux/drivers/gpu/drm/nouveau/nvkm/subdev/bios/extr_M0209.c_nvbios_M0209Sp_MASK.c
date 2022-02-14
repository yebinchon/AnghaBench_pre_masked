
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_M0209S {int* data; } ;
struct nvbios_M0209E {int modulo; int bits; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct nvbios_M0209S*,int,int) ;
 int FUNC_2 (struct nvkm_bios*,int,int*,int*,int*,int*,struct nvbios_M0209E*) ;
 int FUNC_3 (struct nvkm_bios*,int,int,int*,int*) ;
 int FUNC_4 (struct nvkm_bios*,int) ;

u32
FUNC_5(struct nvkm_bios *VAR_0, int VAR_1, int VAR_2, u8 *VAR_3, u8 *VAR_4,
        struct nvbios_M0209S *VAR_5)
{
 struct nvbios_M0209E VAR_6;
 u8 VAR_7, VAR_8;
 u32 VAR_9 = FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4, &VAR_7, &VAR_8, &VAR_6);
 if (VAR_9) {
  u32 VAR_10, VAR_11 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_1(VAR_5, 0x00, sizeof(*VAR_5));
  switch (!!VAR_11 * *VAR_3) {
  case 0x10:
   for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5->data); VAR_10++) {
    u32 VAR_12 = (VAR_10 % VAR_6.modulo) * VAR_6.bits;
    u32 VAR_13 = (1ULL << VAR_6.bits) - 1;
    u16 VAR_14 = VAR_12 / 8;
    u8 VAR_15 = VAR_12 % 8;
    VAR_5->data[VAR_10] = FUNC_4(VAR_0, VAR_11 + VAR_14);
    VAR_5->data[VAR_10] = VAR_5->data[VAR_10] >> VAR_15;
    VAR_5->data[VAR_10] = VAR_5->data[VAR_10] & VAR_13;
   }
   return VAR_11;
  default:
   break;
  }
 }
 return 0x00000000;
}
