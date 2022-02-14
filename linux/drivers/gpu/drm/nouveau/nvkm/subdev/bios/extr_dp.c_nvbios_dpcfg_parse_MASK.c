
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_dpcfg {void* tx_pu; void* pe; void* dc; void* pc; } ;


 int FUNC_0 (struct nvbios_dpcfg*,int,int) ;
 int FUNC_1 (struct nvkm_bios*,int,int,int*,int*,int*,int*) ;
 void* FUNC_2 (struct nvkm_bios*,int) ;

u16
FUNC_3(struct nvkm_bios *VAR_0, u16 VAR_1, u8 VAR_2,
     u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6,
     struct nvbios_dpcfg *VAR_7)
{
 u16 VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_7, 0x00, sizeof(*VAR_7));
 if (VAR_8) {
  switch (*VAR_3) {
  case 0x20:
  case 0x21:
   VAR_7->dc = FUNC_2(VAR_0, VAR_8 + 0x02);
   VAR_7->pe = FUNC_2(VAR_0, VAR_8 + 0x03);
   VAR_7->tx_pu = FUNC_2(VAR_0, VAR_8 + 0x04);
   break;
  case 0x30:
  case 0x40:
  case 0x41:
   VAR_7->pc = FUNC_2(VAR_0, VAR_8 + 0x00);
   VAR_7->dc = FUNC_2(VAR_0, VAR_8 + 0x01);
   VAR_7->pe = FUNC_2(VAR_0, VAR_8 + 0x02);
   VAR_7->tx_pu = FUNC_2(VAR_0, VAR_8 + 0x03);
   break;
  case 0x42:
   VAR_7->dc = FUNC_2(VAR_0, VAR_8 + 0x00);
   VAR_7->pe = FUNC_2(VAR_0, VAR_8 + 0x01);
   VAR_7->tx_pu = FUNC_2(VAR_0, VAR_8 + 0x02);
   break;
  default:
   VAR_8 = 0x0000;
   break;
  }
 }
 return VAR_8;
}
