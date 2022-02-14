
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_0,
         unsigned long VAR_1,
         const u8 VAR_2,
         const u8 VAR_3,
         u8 *VAR_4, u8 *VAR_5)
{
 unsigned long VAR_6 = 0;
 u8 VAR_7 = 0, VAR_8 = 0, VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
   unsigned long VAR_11;

   VAR_11 = (((VAR_1 / VAR_2) / 10) >> VAR_10) /
    (VAR_9 + VAR_3);

   if (VAR_11 > VAR_0)
    continue;

   if (FUNC_0(VAR_0 - VAR_11) < FUNC_0(VAR_0 - VAR_6)) {
    VAR_6 = VAR_11;
    VAR_7 = VAR_9;
    VAR_8 = VAR_10;
   }
  }
 }

 if (VAR_4 && VAR_5) {
  *VAR_4 = VAR_7;
  *VAR_5 = VAR_8;
 }

 return VAR_6;
}
