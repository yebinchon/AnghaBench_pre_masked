
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_ocfg {void** clkcmp; void* flags; int proto; } ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,scalar_t__,int ,int *,int *,int *,int *) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 void* FUNC_2 (struct nvkm_bios*,scalar_t__) ;

u16
FUNC_3(struct nvkm_bios *VAR_0, u16 VAR_1, u8 VAR_2,
    u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6, struct nvbios_ocfg *VAR_7)
{
 u16 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8) {
  VAR_7->proto = FUNC_1(VAR_0, VAR_8 + 0x00);
  VAR_7->flags = FUNC_2(VAR_0, VAR_8 + 0x01);
  VAR_7->clkcmp[0] = FUNC_2(VAR_0, VAR_8 + 0x02);
  VAR_7->clkcmp[1] = FUNC_2(VAR_0, VAR_8 + 0x04);
 }
 return VAR_8;
}
