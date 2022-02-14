
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_falcon {scalar_t__ has_emem; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void FUNC_1 (struct nvkm_falcon*,void*,int,int,int) ;
 int FUNC_2 (struct nvkm_falcon*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_falcon *VAR_1, void *VAR_2, u32 VAR_3,
        u32 VAR_4, u8 VAR_5)
{
 u8 VAR_6 = VAR_4 % 4;
 int VAR_7;

 if (VAR_3 >= VAR_0 && VAR_1->has_emem)
  return FUNC_1(VAR_1, VAR_2,
      VAR_3 - VAR_0, VAR_4,
      VAR_5);

 VAR_4 -= VAR_6;

 FUNC_2(VAR_1, 0x1c0 + (VAR_5 * 8), VAR_3 | (0x1 << 24));
 for (VAR_7 = 0; VAR_7 < VAR_4 / 4; VAR_7++)
  FUNC_2(VAR_1, 0x1c4 + (VAR_5 * 8), ((u32 *)VAR_2)[VAR_7]);





 if (VAR_6) {
  u32 VAR_8 = ((u32 *)VAR_2)[VAR_7];

  FUNC_2(VAR_1, 0x1c4 + (VAR_5 * 8),
     VAR_8 & (FUNC_0(VAR_6 * 8) - 1));
 }
}
