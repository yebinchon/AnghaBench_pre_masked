
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_falcon {scalar_t__ has_emem; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_falcon*,int) ;
 void FUNC_1 (struct nvkm_falcon*,int,int,int,void*) ;
 int FUNC_2 (struct nvkm_falcon*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_falcon *VAR_1, u32 VAR_2, u32 VAR_3,
    u8 VAR_4, void *VAR_5)
{
 u8 VAR_6 = VAR_3 % 4;
 int VAR_7;

 if (VAR_2 >= VAR_0 && VAR_1->has_emem)
  return FUNC_1(VAR_1, VAR_2 - VAR_0,
      VAR_3, VAR_4, VAR_5);

 VAR_3 -= VAR_6;

 FUNC_2(VAR_1, 0x1c0 + (VAR_4 * 8), VAR_2 | (0x1 << 25));
 for (VAR_7 = 0; VAR_7 < VAR_3 / 4; VAR_7++)
  ((u32 *)VAR_5)[VAR_7] = FUNC_0(VAR_1, 0x1c4 + (VAR_4 * 8));





 if (VAR_6) {
  u32 VAR_8 = FUNC_0(VAR_1, 0x1c4 + (VAR_4 * 8));

  for (VAR_7 = VAR_3; VAR_7 < VAR_3 + VAR_6; VAR_7++) {
   ((u8 *)VAR_5)[VAR_7] = (u8)(VAR_8 & 0xff);
   VAR_8 >>= 8;
  }
 }
}
