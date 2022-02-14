
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ) ;

bool FUNC_3(u32 *VAR_1, void *VAR_2, int *VAR_3)
{
 u32 VAR_4, VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = -1;
 *VAR_3 = -1;

 for (VAR_4 = VAR_5 = 0; VAR_4 <= 7; VAR_4++, VAR_5 += 32) {
  VAR_6 = FUNC_0(VAR_1[VAR_4]);
  VAR_7 = *((u32 *)(VAR_2 + VAR_0 + VAR_4 * 0x10));
  if (VAR_6) {
   VAR_8 = VAR_7;
   VAR_7 |= FUNC_2(&VAR_1[VAR_4], 0);
   *((u32 *)(VAR_2 + VAR_0 + VAR_4 * 0x10)) = VAR_7;
   if (VAR_8 != VAR_7) {
    VAR_9 =
     FUNC_1(VAR_7 ^ VAR_8) + VAR_5;
   }
  }
  if (VAR_7)
   *VAR_3 = FUNC_1(VAR_7) + VAR_5;
 }

 return ((VAR_9 != -1) &&
  (VAR_9 == *VAR_3));
}
