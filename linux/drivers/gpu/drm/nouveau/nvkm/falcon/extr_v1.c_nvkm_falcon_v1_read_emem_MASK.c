
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_falcon {int dummy; } ;


 int FUNC_0 (struct nvkm_falcon*,int) ;
 int FUNC_1 (struct nvkm_falcon*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_falcon *VAR_0, u32 VAR_1, u32 VAR_2,
    u8 VAR_3, void *VAR_4)
{
 u8 VAR_5 = VAR_2 % 4;
 int VAR_6;

 VAR_2 -= VAR_5;

 FUNC_1(VAR_0, 0xac0 + (VAR_3 * 8), VAR_1 | (0x1 << 25));
 for (VAR_6 = 0; VAR_6 < VAR_2 / 4; VAR_6++)
  ((u32 *)VAR_4)[VAR_6] = FUNC_0(VAR_0, 0xac4 + (VAR_3 * 8));





 if (VAR_5) {
  u32 VAR_7 = FUNC_0(VAR_0, 0xac4 + (VAR_3 * 8));

  for (VAR_6 = VAR_2; VAR_6 < VAR_2 + VAR_5; VAR_6++) {
   ((u8 *)VAR_4)[VAR_6] = (u8)(VAR_7 & 0xff);
   VAR_7 >>= 8;
  }
 }
}
