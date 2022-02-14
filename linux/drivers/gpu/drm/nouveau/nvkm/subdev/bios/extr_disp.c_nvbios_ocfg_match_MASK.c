
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_ocfg {scalar_t__ proto; scalar_t__ flags; } ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,scalar_t__,int ,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,struct nvbios_ocfg*) ;

u16
FUNC_1(struct nvkm_bios *VAR_0, u16 VAR_1, u8 VAR_2, u8 VAR_3,
    u8 *VAR_4, u8 *VAR_5, u8 *VAR_6, u8 *VAR_7, struct nvbios_ocfg *VAR_8)
{
 u16 VAR_9, VAR_10 = 0;
 while ((VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_10++, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8))) {
  if ((VAR_8->proto == VAR_2 || VAR_8->proto == 0xff) &&
      (VAR_8->flags == VAR_3))
   break;
 }
 return VAR_9;
}
