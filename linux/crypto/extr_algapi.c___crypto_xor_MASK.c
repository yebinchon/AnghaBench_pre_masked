
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

void FUNC_2(u8 *VAR_2, const u8 *VAR_3, const u8 *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = 0;

 if (!FUNC_0(VAR_1)) {
  int VAR_7 = sizeof(unsigned long);
  int VAR_8 = (((unsigned long)VAR_2 ^ (unsigned long)VAR_3) |
    ((unsigned long)VAR_2 ^ (unsigned long)VAR_4)) &
   (VAR_7 - 1);

  VAR_6 = VAR_8 ? 1 << FUNC_1(VAR_8) : VAR_7;







  while (((unsigned long)VAR_2 & (VAR_6 - 1)) && VAR_5 > 0) {
   *VAR_2++ = *VAR_3++ ^ *VAR_4++;
   VAR_5--;
  }
 }

 while (FUNC_0(VAR_0) && VAR_5 >= 8 && !(VAR_6 & 7)) {
  *(u64 *)VAR_2 = *(u64 *)VAR_3 ^ *(u64 *)VAR_4;
  VAR_2 += 8;
  VAR_3 += 8;
  VAR_4 += 8;
  VAR_5 -= 8;
 }

 while (VAR_5 >= 4 && !(VAR_6 & 3)) {
  *(u32 *)VAR_2 = *(u32 *)VAR_3 ^ *(u32 *)VAR_4;
  VAR_2 += 4;
  VAR_3 += 4;
  VAR_4 += 4;
  VAR_5 -= 4;
 }

 while (VAR_5 >= 2 && !(VAR_6 & 1)) {
  *(u16 *)VAR_2 = *(u16 *)VAR_3 ^ *(u16 *)VAR_4;
  VAR_2 += 2;
  VAR_3 += 2;
  VAR_4 += 2;
  VAR_5 -= 2;
 }

 while (VAR_5--)
  *VAR_2++ = *VAR_3++ ^ *VAR_4++;
}
