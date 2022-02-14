
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int ) ;

__attribute__((used)) static bool
FUNC_1(struct nvkm_device *VAR_0, u16 VAR_1, u32 VAR_2, u32 VAR_3)
{
 switch (VAR_1 & 0x00ff) {
 case 0x97:
 case 0xc0:
  switch (VAR_2) {
  case 0x1528:
   FUNC_0(VAR_0, VAR_3);
   return 1;
  default:
   break;
  }
  break;
 default:
  break;
 }
 return 0;
}
