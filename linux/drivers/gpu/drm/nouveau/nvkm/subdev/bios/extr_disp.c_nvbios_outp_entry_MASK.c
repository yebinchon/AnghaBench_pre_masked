
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_disp {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,int,int*,int*,int*,struct nvbios_disp*) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;

u16
FUNC_2(struct nvkm_bios *VAR_0, u8 VAR_1,
    u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 struct nvbios_disp VAR_6;
 u16 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_3, &VAR_6);
 if (VAR_7) {
  *VAR_4 = FUNC_1(VAR_0, VAR_6.data + 0x05);
  *VAR_5 = 0x06;
  VAR_7 = VAR_6.data;
 }
 return VAR_7;
}
