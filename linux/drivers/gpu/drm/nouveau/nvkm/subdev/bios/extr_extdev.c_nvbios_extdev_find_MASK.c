
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_extdev_func {int type; } ;
typedef enum nvbios_extdev_type { ____Placeholder_nvbios_extdev_type } nvbios_extdev_type ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_bios*,int ,struct nvbios_extdev_func*) ;
 int FUNC_1 (struct nvkm_bios*,int ,scalar_t__*,scalar_t__*) ;

int
FUNC_2(struct nvkm_bios *VAR_1, enum nvbios_extdev_type VAR_2,
     struct nvbios_extdev_func *VAR_3)
{
 u8 VAR_4, VAR_5, VAR_6;
 u16 VAR_7;

 VAR_6 = 0;
 while ((VAR_7 = FUNC_1(VAR_1, VAR_6++, &VAR_4, &VAR_5))) {
  FUNC_0(VAR_1, VAR_7, VAR_3);
  if (VAR_3->type == VAR_2)
   return 0;
 }

 return -VAR_0;
}
