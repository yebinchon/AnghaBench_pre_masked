
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_0,
        unsigned long VAR_1,
        u8 *VAR_2,
        bool *VAR_3)
{
 unsigned long VAR_4 = 0;
 u8 VAR_5 = 0, VAR_6;
 bool VAR_7;

 for (VAR_6 = 1; VAR_6 < 16; VAR_6++) {
  u8 VAR_8;

  for (VAR_8 = 1; VAR_8 < 3; VAR_8++) {
   unsigned long VAR_9;

   VAR_9 = VAR_1 / VAR_6 / VAR_8;

   if (VAR_9 > VAR_0)
    continue;

   if (!VAR_4 ||
       (VAR_0 - VAR_9) < (VAR_0 - VAR_4)) {
    VAR_4 = VAR_9;
    VAR_5 = VAR_6;
    VAR_7 = VAR_8;
   }
  }
 }

 if (VAR_2 && VAR_3) {
  *VAR_2 = VAR_5;
  *VAR_3 = VAR_7;
 }

 return VAR_4;
}
