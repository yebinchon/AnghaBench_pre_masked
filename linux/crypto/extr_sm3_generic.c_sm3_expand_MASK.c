
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int __u32 ;


 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int,int) ;

__attribute__((used)) static void FUNC_3(u32 *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;


 for (VAR_3 = 0; VAR_3 <= 15; VAR_3++)
  VAR_1[VAR_3] = FUNC_0((__u32 *)VAR_0 + VAR_3);

 for (VAR_3 = 16; VAR_3 <= 67; VAR_3++) {
  VAR_4 = VAR_1[VAR_3 - 16] ^ VAR_1[VAR_3 - 9] ^ FUNC_2(VAR_1[VAR_3 - 3], 15);
  VAR_1[VAR_3] = FUNC_1(VAR_4) ^ (FUNC_2(VAR_1[VAR_3 - 13], 7)) ^ VAR_1[VAR_3 - 6];
 }

 for (VAR_3 = 0; VAR_3 <= 63; VAR_3++)
  VAR_2[VAR_3] = VAR_1[VAR_3] ^ VAR_1[VAR_3 + 4];
}
