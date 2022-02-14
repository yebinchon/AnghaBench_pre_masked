
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_0(uint32_t VAR_13)
{
 int VAR_14, VAR_15;
 VAR_14 = 2;

 if (VAR_13 & VAR_11)
  VAR_14++;
 if (VAR_13 & VAR_7)
  VAR_14++;

 if (VAR_13 & (0x7 << VAR_9))
  VAR_14 += (VAR_13 >> VAR_9) & 0x7;
 if (VAR_13 & VAR_4)
  VAR_14++;
 if (VAR_13 & VAR_1)
  VAR_14 += 3;
 if (VAR_13 & VAR_3)
  VAR_14++;
 if (VAR_13 & VAR_0)
  VAR_14++;
 if (VAR_13 & VAR_5)
  VAR_14++;
 if (VAR_13 & VAR_6)
  VAR_14++;
 for (VAR_15 = 0; VAR_15 < 8; VAR_15++) {
  int VAR_16 = (VAR_13 >> (11 + 2*VAR_15)) & 0x3;
  switch (VAR_16) {
  case 0: break;
  case 1: VAR_14++; break;
  case 2: VAR_14 += 3; break;
  case 3: VAR_14 += 4; break;
  }
 }
 if (VAR_13 & VAR_10)
  VAR_14 += 2;
 if (VAR_13 & VAR_12)
  VAR_14++;
 if (VAR_13 & VAR_8)
  VAR_14++;
 if (VAR_13 & VAR_2)
  VAR_14 += 3;
 return VAR_14;
}
