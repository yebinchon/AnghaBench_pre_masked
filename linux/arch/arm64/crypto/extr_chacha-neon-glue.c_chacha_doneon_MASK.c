
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int*,int const*,int const*,int,int) ;
 int FUNC_1 (int*,int const*,int const*,int) ;
 int FUNC_2 (int const*,int const*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(u32 *VAR_1, u8 *VAR_2, const u8 *VAR_3,
     int VAR_4, int VAR_5)
{
 while (VAR_4 > 0) {
  int VAR_6 = FUNC_3(VAR_4, VAR_0 * 5);

  if (VAR_6 <= VAR_0) {
   u8 VAR_7[VAR_0];

   FUNC_2(VAR_7, VAR_3, VAR_6);
   FUNC_1(VAR_1, VAR_7, VAR_7, VAR_5);
   FUNC_2(VAR_2, VAR_7, VAR_6);
   VAR_1[12] += 1;
   break;
  }
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
  VAR_4 -= VAR_0 * 5;
  VAR_3 += VAR_0 * 5;
  VAR_2 += VAR_0 * 5;
  VAR_1[12] += 5;
 }
}
