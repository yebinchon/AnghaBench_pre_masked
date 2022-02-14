
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_boostS {int min; int max; void* percent; void* domain; } ;


 int FUNC_0 (struct nvbios_boostS*,int,int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,int,scalar_t__,int *,int *,int ,int ) ;
 void* FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_3 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_4(struct nvkm_bios *VAR_0, int VAR_1,
        u32 VAR_2, u8 *VAR_3, u8 *VAR_4, u8 VAR_5, u8 VAR_6,
        struct nvbios_boostS *VAR_7)
{
 VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_7, 0x00, sizeof(*VAR_7));
 if (VAR_2) {
  VAR_7->domain = FUNC_2(VAR_0, VAR_2 + 0x00);
  VAR_7->percent = FUNC_2(VAR_0, VAR_2 + 0x01);
  VAR_7->min = FUNC_3(VAR_0, VAR_2 + 0x02) * 1000;
  VAR_7->max = FUNC_3(VAR_0, VAR_2 + 0x04) * 1000;
 }
 return VAR_2;
}
