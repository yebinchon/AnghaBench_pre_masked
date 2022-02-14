
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;



void
FUNC_0(u_short * VAR_0, void *VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 u_short *VAR_6 = VAR_1;
 u_short *VAR_7 = VAR_2;

 VAR_5 = *VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 -= *VAR_6++;
  VAR_5 += *VAR_7++;
 }

 if (VAR_5 < 0) {
  VAR_5 = -VAR_5;
  VAR_5 = (VAR_5 >> 16) + (VAR_5 & 0xffff);
  VAR_5 += VAR_5 >> 16;
  *VAR_0 = (u_short) ~ VAR_5;
 } else {
  VAR_5 = (VAR_5 >> 16) + (VAR_5 & 0xffff);
  VAR_5 += VAR_5 >> 16;
  *VAR_0 = (u_short) VAR_5;
 }
}
