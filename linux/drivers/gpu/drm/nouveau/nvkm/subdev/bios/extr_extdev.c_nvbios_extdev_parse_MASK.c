
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_extdev_func {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_bios*,int ,struct nvbios_extdev_func*) ;
 int FUNC_1 (struct nvkm_bios*,int,int *,int *) ;

int
FUNC_2(struct nvkm_bios *VAR_1, int VAR_2,
      struct nvbios_extdev_func *VAR_3)
{
 u8 VAR_4, VAR_5;
 u16 VAR_6;

 if (!(VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_4, &VAR_5)))
  return -VAR_0;

 FUNC_0(VAR_1, VAR_6, VAR_3);
 return 0;
}
