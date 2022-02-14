
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static void FUNC_1(const int VAR_0[3][3], int VAR_1, int VAR_2, int VAR_3,
   int VAR_4, int *VAR_5, int *VAR_6, int *VAR_7)
{
 VAR_1 -= VAR_4 << 4;
 VAR_2 -= 128 << 4;
 VAR_3 -= 128 << 4;
 *VAR_5 = VAR_0[0][0] * VAR_1 + VAR_0[0][1] * VAR_2 + VAR_0[0][2] * VAR_3;
 *VAR_6 = VAR_0[1][0] * VAR_1 + VAR_0[1][1] * VAR_2 + VAR_0[1][2] * VAR_3;
 *VAR_7 = VAR_0[2][0] * VAR_1 + VAR_0[2][1] * VAR_2 + VAR_0[2][2] * VAR_3;
 *VAR_5 = FUNC_0(*VAR_5 >> 12, 0, 0xff0);
 *VAR_6 = FUNC_0(*VAR_6 >> 12, 0, 0xff0);
 *VAR_7 = FUNC_0(*VAR_7 >> 12, 0, 0xff0);
}
