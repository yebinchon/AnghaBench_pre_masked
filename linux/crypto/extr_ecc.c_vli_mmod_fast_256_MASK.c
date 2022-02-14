
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 scalar_t__ FUNC_0 (int*,int*,int const*,unsigned int const) ;
 int FUNC_1 (int const*,int*,unsigned int const) ;
 int FUNC_2 (int*,int*,int,unsigned int const) ;
 int FUNC_3 (int*,int const*,unsigned int const) ;
 scalar_t__ FUNC_4 (int*,int*,int const*,unsigned int const) ;

__attribute__((used)) static void FUNC_5(u64 *VAR_0, const u64 *VAR_1,
         const u64 *VAR_2, u64 *VAR_3)
{
 int VAR_4;
 const unsigned int VAR_5 = 4;


 FUNC_3(VAR_0, VAR_1, VAR_5);


 VAR_3[0] = 0;
 VAR_3[1] = VAR_1[5] & 0xffffffff00000000ull;
 VAR_3[2] = VAR_1[6];
 VAR_3[3] = VAR_1[7];
 VAR_4 = FUNC_2(VAR_3, VAR_3, 1, VAR_5);
 VAR_4 += FUNC_0(VAR_0, VAR_0, VAR_3, VAR_5);


 VAR_3[1] = VAR_1[6] << 32;
 VAR_3[2] = (VAR_1[6] >> 32) | (VAR_1[7] << 32);
 VAR_3[3] = VAR_1[7] >> 32;
 VAR_4 += FUNC_2(VAR_3, VAR_3, 1, VAR_5);
 VAR_4 += FUNC_0(VAR_0, VAR_0, VAR_3, VAR_5);


 VAR_3[0] = VAR_1[4];
 VAR_3[1] = VAR_1[5] & 0xffffffff;
 VAR_3[2] = 0;
 VAR_3[3] = VAR_1[7];
 VAR_4 += FUNC_0(VAR_0, VAR_0, VAR_3, VAR_5);


 VAR_3[0] = (VAR_1[4] >> 32) | (VAR_1[5] << 32);
 VAR_3[1] = (VAR_1[5] >> 32) | (VAR_1[6] & 0xffffffff00000000ull);
 VAR_3[2] = VAR_1[7];
 VAR_3[3] = (VAR_1[6] >> 32) | (VAR_1[4] << 32);
 VAR_4 += FUNC_0(VAR_0, VAR_0, VAR_3, VAR_5);


 VAR_3[0] = (VAR_1[5] >> 32) | (VAR_1[6] << 32);
 VAR_3[1] = (VAR_1[6] >> 32);
 VAR_3[2] = 0;
 VAR_3[3] = (VAR_1[4] & 0xffffffff) | (VAR_1[5] << 32);
 VAR_4 -= FUNC_4(VAR_0, VAR_0, VAR_3, VAR_5);


 VAR_3[0] = VAR_1[6];
 VAR_3[1] = VAR_1[7];
 VAR_3[2] = 0;
 VAR_3[3] = (VAR_1[4] >> 32) | (VAR_1[5] & 0xffffffff00000000ull);
 VAR_4 -= FUNC_4(VAR_0, VAR_0, VAR_3, VAR_5);


 VAR_3[0] = (VAR_1[6] >> 32) | (VAR_1[7] << 32);
 VAR_3[1] = (VAR_1[7] >> 32) | (VAR_1[4] << 32);
 VAR_3[2] = (VAR_1[4] >> 32) | (VAR_1[5] << 32);
 VAR_3[3] = (VAR_1[6] << 32);
 VAR_4 -= FUNC_4(VAR_0, VAR_0, VAR_3, VAR_5);


 VAR_3[0] = VAR_1[7];
 VAR_3[1] = VAR_1[4] & 0xffffffff00000000ull;
 VAR_3[2] = VAR_1[5];
 VAR_3[3] = VAR_1[6] & 0xffffffff00000000ull;
 VAR_4 -= FUNC_4(VAR_0, VAR_0, VAR_3, VAR_5);

 if (VAR_4 < 0) {
  do {
   VAR_4 += FUNC_0(VAR_0, VAR_0, VAR_2, VAR_5);
  } while (VAR_4 < 0);
 } else {
  while (VAR_4 || FUNC_1(VAR_2, VAR_0, VAR_5) != 1)
   VAR_4 -= FUNC_4(VAR_0, VAR_0, VAR_2, VAR_5);
 }
}
