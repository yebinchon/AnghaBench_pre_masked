
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int const*,int const*,int) ;
 int FUNC_1 (scalar_t__*,int const*,int const*,int) ;
 int FUNC_2 (int const*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(u32 *VAR_1, u8 *VAR_2, const u8 *VAR_3,
     unsigned int VAR_4, int VAR_5)
{
 u8 VAR_6[VAR_0];

 while (VAR_4 >= VAR_0 * 4) {
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);
  VAR_4 -= VAR_0 * 4;
  VAR_3 += VAR_0 * 4;
  VAR_2 += VAR_0 * 4;
  VAR_1[12] += 4;
 }
 while (VAR_4 >= VAR_0) {
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
  VAR_4 -= VAR_0;
  VAR_3 += VAR_0;
  VAR_2 += VAR_0;
  VAR_1[12]++;
 }
 if (VAR_4) {
  FUNC_2(VAR_6, VAR_3, VAR_4);
  FUNC_1(VAR_1, VAR_6, VAR_6, VAR_5);
  FUNC_2(VAR_2, VAR_6, VAR_4);
 }
}
