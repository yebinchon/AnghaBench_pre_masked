
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_falcon {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_falcon*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_falcon *VAR_0, void *VAR_1, u32 VAR_2,
    u32 VAR_3, u8 VAR_4)
{
 u8 VAR_5 = VAR_3 % 4;
 int VAR_6;

 VAR_3 -= VAR_5;

 FUNC_1(VAR_0, 0xac0 + (VAR_4 * 8), VAR_2 | (0x1 << 24));
 for (VAR_6 = 0; VAR_6 < VAR_3 / 4; VAR_6++)
  FUNC_1(VAR_0, 0xac4 + (VAR_4 * 8), ((u32 *)VAR_1)[VAR_6]);





 if (VAR_5) {
  u32 VAR_7 = ((u32 *)VAR_1)[VAR_6];

  FUNC_1(VAR_0, 0xac4 + (VAR_4 * 8),
     VAR_7 & (FUNC_0(VAR_5 * 8) - 1));
 }
}
