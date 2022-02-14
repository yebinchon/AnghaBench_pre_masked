
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int*,int*,int const*,unsigned int) ;
 int FUNC_2 (int*,unsigned int) ;
 int FUNC_3 (int*,int*,unsigned int) ;
 scalar_t__ FUNC_4 (int const*,unsigned int) ;
 int FUNC_5 (int*,unsigned int) ;
 int FUNC_6 (int*,int const*,unsigned int) ;
 int FUNC_7 (int*,int*,int*,unsigned int) ;

void FUNC_8(u64 *VAR_1, const u64 *VAR_2, const u64 *VAR_3,
   unsigned int VAR_4)
{
 u64 VAR_5[VAR_0], VAR_6[VAR_0];
 u64 VAR_7[VAR_0], VAR_8[VAR_0];
 u64 VAR_9;
 int VAR_10;

 if (FUNC_4(VAR_2, VAR_4)) {
  FUNC_2(VAR_1, VAR_4);
  return;
 }

 FUNC_6(VAR_5, VAR_2, VAR_4);
 FUNC_6(VAR_6, VAR_3, VAR_4);
 FUNC_2(VAR_7, VAR_4);
 VAR_7[0] = 1;
 FUNC_2(VAR_8, VAR_4);

 while ((VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_4)) != 0) {
  VAR_9 = 0;

  if (FUNC_0(VAR_5)) {
   FUNC_5(VAR_5, VAR_4);

   if (!FUNC_0(VAR_7))
    VAR_9 = FUNC_1(VAR_7, VAR_7, VAR_3, VAR_4);

   FUNC_5(VAR_7, VAR_4);
   if (VAR_9)
    VAR_7[VAR_4 - 1] |= 0x8000000000000000ull;
  } else if (FUNC_0(VAR_6)) {
   FUNC_5(VAR_6, VAR_4);

   if (!FUNC_0(VAR_8))
    VAR_9 = FUNC_1(VAR_8, VAR_8, VAR_3, VAR_4);

   FUNC_5(VAR_8, VAR_4);
   if (VAR_9)
    VAR_8[VAR_4 - 1] |= 0x8000000000000000ull;
  } else if (VAR_10 > 0) {
   FUNC_7(VAR_5, VAR_5, VAR_6, VAR_4);
   FUNC_5(VAR_5, VAR_4);

   if (FUNC_3(VAR_7, VAR_8, VAR_4) < 0)
    FUNC_1(VAR_7, VAR_7, VAR_3, VAR_4);

   FUNC_7(VAR_7, VAR_7, VAR_8, VAR_4);
   if (!FUNC_0(VAR_7))
    VAR_9 = FUNC_1(VAR_7, VAR_7, VAR_3, VAR_4);

   FUNC_5(VAR_7, VAR_4);
   if (VAR_9)
    VAR_7[VAR_4 - 1] |= 0x8000000000000000ull;
  } else {
   FUNC_7(VAR_6, VAR_6, VAR_5, VAR_4);
   FUNC_5(VAR_6, VAR_4);

   if (FUNC_3(VAR_8, VAR_7, VAR_4) < 0)
    FUNC_1(VAR_8, VAR_8, VAR_3, VAR_4);

   FUNC_7(VAR_8, VAR_8, VAR_7, VAR_4);
   if (!FUNC_0(VAR_8))
    VAR_9 = FUNC_1(VAR_8, VAR_8, VAR_3, VAR_4);

   FUNC_5(VAR_8, VAR_4);
   if (VAR_9)
    VAR_8[VAR_4 - 1] |= 0x8000000000000000ull;
  }
 }

 FUNC_6(VAR_1, VAR_7, VAR_4);
}
