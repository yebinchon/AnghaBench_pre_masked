
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*) ;

__attribute__((used)) static inline void FUNC_1(u32 *VAR_0, const void *VAR_1,
        size_t VAR_2)
{
 for (; VAR_2 >= 4; VAR_1 += 4, VAR_2 -= 4)
  *VAR_0++ = FUNC_0((u32 *) VAR_1);

 if (VAR_2) {
  const u8 *VAR_3 = (u8 *)VAR_1;

  switch (VAR_2) {
  case 3:
   *VAR_0 = (VAR_3[2] << 16) |
          (VAR_3[1] << 8) |
          VAR_3[0];
   break;
  case 2:
   *VAR_0 = (VAR_3[1] << 8) |
          VAR_3[0];
   break;
  case 1:
   *VAR_0 = VAR_3[0];
   break;
  default:
   break;
  }
 }
}
