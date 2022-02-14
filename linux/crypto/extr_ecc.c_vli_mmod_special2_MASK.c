
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int*,unsigned int) ;
 int FUNC_1 (int*,unsigned int) ;
 scalar_t__ FUNC_2 (int*,int*,unsigned int) ;
 int FUNC_3 (int*,unsigned int) ;
 int FUNC_4 (int*,unsigned int) ;
 int FUNC_5 (int*,int const*,unsigned int) ;
 int FUNC_6 (int*,int*,int*,unsigned int) ;
 int FUNC_7 (int*,int*,int const,unsigned int) ;
 int FUNC_8 (int*,int*,int,unsigned int) ;

__attribute__((used)) static void FUNC_9(u64 *VAR_1, const u64 *VAR_2,
          const u64 *VAR_3, unsigned int VAR_4)
{
 u64 VAR_5 = VAR_3[0] * 2;
 u64 VAR_6[VAR_0];
 u64 VAR_7[VAR_0 * 2];
 u64 VAR_8[VAR_0 * 2];
 int VAR_9;
 int VAR_10;

 FUNC_5(VAR_8, VAR_3, VAR_4);
 FUNC_1(VAR_8 + VAR_4, VAR_4);

 FUNC_5(VAR_7, VAR_2, VAR_4);

 FUNC_5(VAR_6, VAR_2 + VAR_4, VAR_4);
 FUNC_1(VAR_7 + VAR_4, VAR_4);
 VAR_9 = FUNC_3(VAR_7, VAR_4);
 if (VAR_9)
  VAR_7[VAR_4 - 1] &= (1ull << 63) - 1;
 for (VAR_10 = 1; VAR_9 || !FUNC_4(VAR_6, VAR_4); VAR_10++) {
  u64 VAR_11[VAR_0 * 2];

  FUNC_8(VAR_11, VAR_6, VAR_5, VAR_4);
  if (VAR_9)
   FUNC_7(VAR_11, VAR_11, VAR_3[0], VAR_4 * 2);
  FUNC_5(VAR_6, VAR_11 + VAR_4, VAR_4);
  FUNC_1(VAR_11 + VAR_4, VAR_4);
  VAR_9 = FUNC_3(VAR_11, VAR_4);
  if (VAR_9)
   VAR_11[VAR_4 - 1] &= (1ull << 63) - 1;
  if (VAR_10 & 1)
   FUNC_6(VAR_7, VAR_7, VAR_11, VAR_4 * 2);
  else
   FUNC_0(VAR_7, VAR_7, VAR_11, VAR_4 * 2);
 }
 while (FUNC_3(VAR_7, VAR_4 * 2))
  FUNC_0(VAR_7, VAR_7, VAR_8, VAR_4 * 2);
 while (FUNC_2(VAR_7, VAR_8, VAR_4 * 2) >= 0)
  FUNC_6(VAR_7, VAR_7, VAR_8, VAR_4 * 2);

 FUNC_5(VAR_1, VAR_7, VAR_4);
}
