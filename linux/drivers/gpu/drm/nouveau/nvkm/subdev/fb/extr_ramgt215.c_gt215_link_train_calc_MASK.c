
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct gt215_ltrain {int r_100720; int r_1111e0; int r_111400; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(u32 *VAR_0, struct gt215_ltrain *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 u8 VAR_5[8], VAR_6[4] = {0, 0, 0, 0}, VAR_7 = 0, VAR_8 = 0;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < 0x40; VAR_3++) {
   if (!(VAR_0[VAR_3] & 0x80000000))
    continue;
   if (VAR_0[VAR_3] & (0x101 << VAR_2))
    break;
  }

  if (VAR_3 == 0x40)
   return;

  for (VAR_4 = VAR_3 + 1; VAR_4 < 0x40; VAR_4++) {
   if (!(VAR_0[VAR_3] & 0x80000000))
    continue;
   if (!(VAR_0[VAR_4] & (0x101 << VAR_2))) {
    VAR_4--;
    break;
   }
  }

  VAR_5[VAR_2] = ((VAR_4 - VAR_3) >> 1) + VAR_3;
  VAR_6[(VAR_5[VAR_2] & 0xf0) >> 4]++;
  VAR_5[VAR_2] += 0x30;
 }


 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  if (VAR_6[VAR_2] > VAR_8) {
   VAR_7 = VAR_2 + 3;
   VAR_8 = VAR_6[VAR_2];
  }
 }

 VAR_1->r_100720 = 0;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_5[VAR_2] = FUNC_0(VAR_5[VAR_2], (u8) (VAR_7 << 4));
  VAR_5[VAR_2] = FUNC_1(VAR_5[VAR_2], (u8) ((VAR_7 << 4) | 0xf));

  VAR_1->r_100720 |= ((VAR_5[VAR_2] & 0x0f) << (VAR_2 << 2));
 }

 VAR_1->r_1111e0 = 0x02000000 | (VAR_7 * 0x101);
 VAR_1->r_111400 = 0x0;
}
