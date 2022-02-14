
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tnetd7300_clock {int pll; int ctrl; } ;
struct TYPE_2__ {int rate; } ;


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
 TYPE_1__ VAR_12 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(u32 VAR_13, struct tnetd7300_clock *VAR_14,
 u32 *VAR_15, u32 VAR_16)
{
 int VAR_17;
 int VAR_18 = VAR_0;
 u32 VAR_19 = FUNC_0(&VAR_14->ctrl);
 u32 VAR_20 = FUNC_0(&VAR_14->pll);
 int VAR_21 = ((VAR_19 & VAR_10) >> VAR_11) + 1;
 int VAR_22 = (VAR_19 & VAR_9) + 1;
 int VAR_23 = VAR_21 * VAR_22;
 int VAR_24 = ((VAR_20 & VAR_4) >> VAR_5) + 1;

 switch ((*VAR_15 & (VAR_3 << VAR_13)) >> VAR_13) {
 case 131:
  VAR_18 = VAR_16;
  break;
 case 129:
  VAR_18 = VAR_0;
  break;
 case 128:
  VAR_18 = VAR_1;
  break;
 case 130:
  VAR_18 = VAR_12.rate;
  break;
 }

 if (*VAR_15 & VAR_2)
  return VAR_18 / VAR_23;

 if ((VAR_20 & VAR_7) == 0)
  return (VAR_18 >> (VAR_24 / 16 + 1)) / VAR_23;

 if ((VAR_20 & (VAR_8 | VAR_6)) == (VAR_8 | VAR_6)) {
  VAR_17 = (VAR_24 & 1) ?
   (VAR_18 * VAR_24) >> 1 :
   (VAR_18 * (VAR_24 - 1)) >> 2;
  return VAR_17 / VAR_23;
 }

 if (VAR_24 == 16)
  return VAR_18 / VAR_23;

 return VAR_18 * VAR_24 / VAR_23;
}
