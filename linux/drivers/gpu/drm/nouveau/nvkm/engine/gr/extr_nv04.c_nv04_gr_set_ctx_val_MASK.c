
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_device *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 1;
 u32 VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_0, 0x700000 + VAR_1);
 VAR_4 = VAR_8 & 0xff;
 VAR_5 = (VAR_8 >> 15) & 7;

 VAR_7 = FUNC_1(VAR_0, 0x70000c + VAR_1);
 VAR_7 &= ~VAR_2;
 VAR_7 |= VAR_3;
 FUNC_2(VAR_0, 0x70000c + VAR_1, VAR_7);


 if (!(VAR_7 & 0x02000000))
  VAR_6 = 0;

 if ((VAR_4 == 0x1f || VAR_4 == 0x48) && !(VAR_7 & 0x04000000))
  VAR_6 = 0;

 switch (VAR_5) {

 case 0:
 case 3:
  break;

 case 1:
  if (!(VAR_7 & 0x18000000))
   VAR_6 = 0;
  break;

 case 2:
  if (!(VAR_7 & 0x20000000))
   VAR_6 = 0;
  break;

 case 4:
 case 5:
  if (!(VAR_7 & 0x40000000))
   VAR_6 = 0;
  break;
 }

 FUNC_0(VAR_0, VAR_1, 0x01000000, VAR_6 << 24);
}
