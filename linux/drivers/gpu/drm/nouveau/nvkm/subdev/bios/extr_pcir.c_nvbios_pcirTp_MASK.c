
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_pcirT {int vendor_id; int device_id; int* class_code; int image_size; int image_rev; int image_type; int last; } ;


 int FUNC_0 (struct nvbios_pcirT*,int,int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,scalar_t__,int *,int *) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_3 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_4(struct nvkm_bios *VAR_0, u32 VAR_1, u8 *VAR_2, u16 *VAR_3,
       struct nvbios_pcirT *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4, 0x00, sizeof(*VAR_4));
 if (VAR_5) {
  VAR_4->vendor_id = FUNC_3(VAR_0, VAR_5 + 0x04);
  VAR_4->device_id = FUNC_3(VAR_0, VAR_5 + 0x06);
  VAR_4->class_code[0] = FUNC_2(VAR_0, VAR_5 + 0x0d);
  VAR_4->class_code[1] = FUNC_2(VAR_0, VAR_5 + 0x0e);
  VAR_4->class_code[2] = FUNC_2(VAR_0, VAR_5 + 0x0f);
  VAR_4->image_size = FUNC_3(VAR_0, VAR_5 + 0x10) * 512;
  VAR_4->image_rev = FUNC_3(VAR_0, VAR_5 + 0x12);
  VAR_4->image_type = FUNC_2(VAR_0, VAR_5 + 0x14);
  VAR_4->last = FUNC_2(VAR_0, VAR_5 + 0x15) & 0x80;
 }
 return VAR_5;
}
