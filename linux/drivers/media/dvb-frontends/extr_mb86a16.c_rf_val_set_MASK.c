
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct mb86a16_state*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct mb86a16_state *VAR_3,
        int VAR_4,
        int VAR_5,
        unsigned char VAR_6)
{
 unsigned char VAR_7, VAR_8, VAR_9;
 int VAR_10;
 unsigned char VAR_11[5];
 int VAR_12 = -1;

 if (VAR_5 > 37750)
  VAR_7 = 1;
 else if (VAR_5 > 18875)
  VAR_7 = 2;
 else if (VAR_5 > 5500)
  VAR_7 = 3;
 else
  VAR_7 = 4;

 if (VAR_5 > 30500)
  VAR_8 = 3;
 else if (VAR_5 > 9375)
  VAR_8 = 1;
 else if (VAR_5 > 4625)
  VAR_8 = 0;
 else
  VAR_8 = 2;

 if (VAR_4 < 1060)
  VAR_9 = 0;
 else if (VAR_4 < 1175)
  VAR_9 = 1;
 else if (VAR_4 < 1305)
  VAR_9 = 2;
 else if (VAR_4 < 1435)
  VAR_9 = 3;
 else if (VAR_4 < 1570)
  VAR_9 = 4;
 else if (VAR_4 < 1715)
  VAR_9 = 5;
 else if (VAR_4 < 1845)
  VAR_9 = 6;
 else if (VAR_4 < 1980)
  VAR_9 = 7;
 else if (VAR_4 < 2080)
  VAR_9 = 8;
 else
  VAR_9 = 9;

 VAR_10 = VAR_4 * (1 << VAR_6) / 2;

 VAR_11[0] = 0x01 | (VAR_7 << 3) | (VAR_8 << 1);
 VAR_11[1] = (VAR_6 << 5) | ((VAR_10 & 0x1f000) >> 12);
 VAR_11[2] = (VAR_10 & 0x00ff0) >> 4;
 VAR_11[3] = ((VAR_10 & 0x0000f) << 4) | VAR_9;


 if (FUNC_1(VAR_3, 0x21, VAR_11[0]) < 0)
  VAR_12 = 0;
 if (FUNC_1(VAR_3, 0x22, VAR_11[1]) < 0)
  VAR_12 = 0;
 if (FUNC_1(VAR_3, 0x23, VAR_11[2]) < 0)
  VAR_12 = 0;
 if (FUNC_1(VAR_3, 0x24, VAR_11[3]) < 0)
  VAR_12 = 0;
 if (FUNC_1(VAR_3, 0x25, 0x01) < 0)
  VAR_12 = 0;
 if (VAR_12 == 0) {
  FUNC_0(VAR_2, VAR_1, 1, "RF Setup - I2C transfer error");
  return -VAR_0;
 }

 return 0;
}
