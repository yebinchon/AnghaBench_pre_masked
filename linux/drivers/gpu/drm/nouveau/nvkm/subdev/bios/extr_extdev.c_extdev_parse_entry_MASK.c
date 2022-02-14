
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_extdev_func {int type; int addr; int bus; } ;


 int FUNC_0 (struct nvkm_bios*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_bios *VAR_0, u16 VAR_1,
     struct nvbios_extdev_func *VAR_2)
{
 VAR_2->type = FUNC_0(VAR_0, VAR_1 + 0);
 VAR_2->addr = FUNC_0(VAR_0, VAR_1 + 1);
 VAR_2->bus = (FUNC_0(VAR_0, VAR_1 + 2) >> 4) & 1;
}
