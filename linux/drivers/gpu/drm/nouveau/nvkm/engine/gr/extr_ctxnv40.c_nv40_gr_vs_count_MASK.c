
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_device {int chipset; } ;



__attribute__((used)) static int
FUNC_0(struct nvkm_device *VAR_0)
{

 switch (VAR_0->chipset) {
 case 0x47:
 case 0x49:
 case 0x4b:
  return 8;
 case 0x40:
  return 6;
 case 0x41:
 case 0x42:
  return 5;
 case 0x43:
 case 0x44:
 case 0x46:
 case 0x4a:
  return 3;
 case 0x4c:
 case 0x4e:
 case 0x67:
 default:
  return 1;
 }
}
