
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int** VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;

int
FUNC_2(int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 static int VAR_7 = 15;
 static int VAR_8 = 6;
 int *VAR_9;

 VAR_2 = VAR_1 % 19;
 VAR_3 = VAR_1 % 4;
 VAR_4 = VAR_1 % 7;
 VAR_5 = (19 * VAR_2 + VAR_7) % 30;
 VAR_6 = (2 * VAR_3 + 4 * VAR_4 + 6 * VAR_5 + VAR_8) % 7;
 VAR_9 = VAR_0[FUNC_0(VAR_1)];
 return (((VAR_9[3] + 1) + 22) + (VAR_5 + VAR_6) + FUNC_1(VAR_1));
}
