
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int ** VAR_0 ;
 int ** VAR_1 ;

__attribute__((used)) static inline void FUNC_3(u32 *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4;
 VAR_2[6] ^= FUNC_0(VAR_2[7], VAR_1[VAR_3 % 4][0], VAR_0[VAR_3][0]);
 VAR_2[5] ^= FUNC_1(VAR_2[6], VAR_1[VAR_3 % 4][1], VAR_0[VAR_3][1]);
 VAR_2[4] ^= FUNC_2(VAR_2[5], VAR_1[VAR_3 % 4][2], VAR_0[VAR_3][2]);
 VAR_2[3] ^= FUNC_0(VAR_2[4], VAR_1[VAR_3 % 4][3], VAR_0[VAR_3][3]);
 VAR_2[2] ^= FUNC_1(VAR_2[3], VAR_1[VAR_3 % 4][4], VAR_0[VAR_3][4]);
 VAR_2[1] ^= FUNC_2(VAR_2[2], VAR_1[VAR_3 % 4][5], VAR_0[VAR_3][5]);
 VAR_2[0] ^= FUNC_0(VAR_2[1], VAR_1[VAR_3 % 4][6], VAR_0[VAR_3][6]);
 VAR_2[7] ^= FUNC_1(VAR_2[0], VAR_1[VAR_3 % 4][7], VAR_0[VAR_3][7]);
}
