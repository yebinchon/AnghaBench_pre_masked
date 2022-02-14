
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int master_clk; } ;



__attribute__((used)) static void FUNC_0(struct mb86a16_state *VAR_0,
    int VAR_1,
    int VAR_2,
    int VAR_3, int VAR_4,
    int VAR_5,
    int *VAR_6,
    int *VAR_7,
    unsigned char *VAR_8,
    unsigned char *VAR_9)
{
 int VAR_10 ;
 int VAR_11 ;

 VAR_11 = VAR_1 * 1000 + VAR_3 * VAR_5;

 if (VAR_4 == 0)
  *VAR_6 = (VAR_11 + 1000) / 2000 * 2;
 else
  *VAR_6 = (VAR_11 + 500) / 1000;

 if (*VAR_6 >= VAR_11)
  *VAR_7 = *VAR_6 * 1000 - VAR_11;
 else
  *VAR_7 = VAR_11 - *VAR_6 * 1000;

 VAR_10 = *VAR_7 * 8192 / VAR_0->master_clk;
 *VAR_8 = VAR_10 & 0x00ff;
 *VAR_9 = (VAR_10 & 0x0f00) >> 8;
}
