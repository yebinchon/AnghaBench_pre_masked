
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_i2c {int twsi_freq; int sys_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_i2c*,int ,int) ;

void FUNC_2(struct octeon_i2c *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0x18, VAR_12 = 2, VAR_13 = 0, VAR_14 = 1000000;

 for (VAR_8 = 0; VAR_8 < 8 && VAR_14 != 0; VAR_8++) {




  for (VAR_7 = 15; VAR_7 >= 2 && VAR_14 != 0; VAR_7--) {




   VAR_3 = VAR_2->twsi_freq * (VAR_7 + 1) * 10;
   VAR_3 *= (1 << VAR_8);
   VAR_4 = (VAR_2->sys_freq / (VAR_3 * 2)) - 1;

   for (VAR_5 = 0; VAR_5 <= 1; VAR_5++) {
    VAR_6 = VAR_4 + VAR_5;
    if (VAR_6 < 5 || VAR_6 > 0xff)
     continue;

    VAR_9 = VAR_2->sys_freq / (2 * (VAR_6 + 1));
    VAR_9 = VAR_9 / (1 << VAR_8);
    VAR_9 = VAR_9 / (VAR_7 + 1) / 10;
    VAR_10 = FUNC_0(VAR_9 - VAR_2->twsi_freq);
    if (VAR_10 < VAR_14) {
     VAR_14 = VAR_10;
     VAR_11 = VAR_6;
     VAR_12 = VAR_7;
     VAR_13 = VAR_8;
    }
   }
  }
 }
 FUNC_1(VAR_2, VAR_1, VAR_11);
 FUNC_1(VAR_2, VAR_0, (VAR_12 << 3) | VAR_13);
}
