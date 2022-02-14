
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_npdeT {int image_size; int last; } ;


 int FUNC_0 (struct nvbios_npdeT*,int,int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_3 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_4(struct nvkm_bios *VAR_0, u32 VAR_1, struct nvbios_npdeT *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2, 0x00, sizeof(*VAR_2));
 if (VAR_3) {
  VAR_2->image_size = FUNC_3(VAR_0, VAR_3 + 0x08) * 512;
  VAR_2->last = FUNC_2(VAR_0, VAR_3 + 0x0a) & 0x80;
 }
 return VAR_3;
}
