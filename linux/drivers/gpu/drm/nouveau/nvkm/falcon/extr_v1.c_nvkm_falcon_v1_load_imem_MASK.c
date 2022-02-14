
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvkm_falcon {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_falcon*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_falcon *VAR_0, void *VAR_1, u32 VAR_2,
    u32 VAR_3, u16 VAR_4, u8 VAR_5, bool VAR_6)
{
 u8 VAR_7 = VAR_3 % 4;
 u32 VAR_8;
 int VAR_9;

 VAR_3 -= VAR_7;

 VAR_8 = VAR_2 | FUNC_0(24) | (VAR_6 ? FUNC_0(28) : 0);
 FUNC_1(VAR_0, 0x180 + (VAR_5 * 16), VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_3 / 4; VAR_9++) {

  if ((VAR_9 & 0x3f) == 0)
   FUNC_1(VAR_0, 0x188 + (VAR_5 * 16), VAR_4++);
  FUNC_1(VAR_0, 0x184 + (VAR_5 * 16), ((u32 *)VAR_1)[VAR_9]);
 }





 if (VAR_7) {
  u32 VAR_10 = ((u32 *)VAR_1)[VAR_9];


  if ((VAR_9 & 0x3f) == 0)
   FUNC_1(VAR_0, 0x188 + (VAR_5 * 16), VAR_4++);
  FUNC_1(VAR_0, 0x184 + (VAR_5 * 16),
     VAR_10 & (FUNC_0(VAR_7 * 8) - 1));
  ++VAR_9;
 }


 for (; VAR_9 & 0x3f; VAR_9++)
  FUNC_1(VAR_0, 0x184 + (VAR_5 * 16), 0);
}
