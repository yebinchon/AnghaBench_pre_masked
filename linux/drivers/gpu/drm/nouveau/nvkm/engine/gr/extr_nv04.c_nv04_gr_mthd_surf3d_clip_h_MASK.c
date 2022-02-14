
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

__attribute__((used)) static bool
FUNC_1(struct nvkm_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = VAR_2 & 0xffff, VAR_4;
 u32 VAR_5 = VAR_2 >> 16;
 if (VAR_3 & 0x8000)

  return 0;
 if (VAR_5 & 0x8000)

  VAR_5 |= 0xffff0000;
 VAR_4 = VAR_3 + VAR_5;
 VAR_4 &= 0x3ffff;
 FUNC_0(VAR_0, 0x40053c, VAR_3);
 FUNC_0(VAR_0, 0x400544, VAR_4);
 return 1;
}
