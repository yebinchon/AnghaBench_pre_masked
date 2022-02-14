
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_device {int chipset; } ;



__attribute__((used)) static inline int
FUNC_0(struct nvkm_device *VAR_0)
{
 if ((VAR_0->chipset & 0xf0) == 0x60)
  return 1;

 return !(0x0aaf & (1 << (VAR_0->chipset & 0x0f)));
}
