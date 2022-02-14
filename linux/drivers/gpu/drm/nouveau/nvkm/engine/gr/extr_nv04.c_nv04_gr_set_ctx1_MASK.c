
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_device *VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7 = (FUNC_0(VAR_3, VAR_2) >> 13) & 0x7;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_3, 0x700000 + VAR_4);
 VAR_8 &= ~VAR_5;
 VAR_8 |= VAR_6;
 FUNC_1(VAR_3, 0x700000 + VAR_4, VAR_8);

 FUNC_1(VAR_3, VAR_1, VAR_8);
 FUNC_1(VAR_3, VAR_0 + (VAR_7 << 2), VAR_8);
}
