
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv {TYPE_1__* base; } ;
struct TYPE_2__ {int extclk; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stv*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct stv *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 1;
 u32 VAR_6 = 4;
 u32 VAR_7 = VAR_3->base->extclk / 1000000;
 u32 VAR_8 = VAR_4 / 1000000;
 u32 VAR_9 = (VAR_8 * VAR_6 * VAR_5) / VAR_7;
 u32 VAR_10 = 7;
 u32 VAR_11;

 if (VAR_9 >= 7 && VAR_9 <= 71)
  VAR_10 = 7;
 else if (VAR_9 >= 72 && VAR_9 <= 79)
  VAR_10 = 8;
 else if (VAR_9 >= 80 && VAR_9 <= 87)
  VAR_10 = 9;
 else if (VAR_9 >= 88 && VAR_9 <= 95)
  VAR_10 = 10;
 else if (VAR_9 >= 96 && VAR_9 <= 103)
  VAR_10 = 11;
 else if (VAR_9 >= 104 && VAR_9 <= 111)
  VAR_10 = 12;
 else if (VAR_9 >= 112 && VAR_9 <= 119)
  VAR_10 = 13;
 else if (VAR_9 >= 120 && VAR_9 <= 127)
  VAR_10 = 14;
 else if (VAR_9 >= 128 && VAR_9 <= 135)
  VAR_10 = 15;
 else if (VAR_9 >= 136 && VAR_9 <= 143)
  VAR_10 = 16;
 else if (VAR_9 >= 144 && VAR_9 <= 151)
  VAR_10 = 17;
 else if (VAR_9 >= 152 && VAR_9 <= 159)
  VAR_10 = 18;
 else if (VAR_9 >= 160 && VAR_9 <= 167)
  VAR_10 = 19;
 else if (VAR_9 >= 168 && VAR_9 <= 175)
  VAR_10 = 20;
 else if (VAR_9 >= 176 && VAR_9 <= 183)
  VAR_10 = 21;
 else if (VAR_9 >= 184 && VAR_9 <= 191)
  VAR_10 = 22;
 else if (VAR_9 >= 192 && VAR_9 <= 199)
  VAR_10 = 23;
 else if (VAR_9 >= 200 && VAR_9 <= 207)
  VAR_10 = 24;
 else if (VAR_9 >= 208 && VAR_9 <= 215)
  VAR_10 = 25;
 else if (VAR_9 >= 216 && VAR_9 <= 223)
  VAR_10 = 26;
 else if (VAR_9 >= 224 && VAR_9 <= 225)
  VAR_10 = 27;

 FUNC_0(VAR_3, VAR_0, (VAR_10 << 3) | VAR_5);
 FUNC_0(VAR_3, VAR_2, VAR_6);
 FUNC_0(VAR_3, VAR_1, VAR_9);

 VAR_11 = (VAR_7 * 2 * VAR_9) / VAR_5;
 VAR_3->base->mclk = VAR_11 / (2 * VAR_6) * 1000000;

 return 0;
}
