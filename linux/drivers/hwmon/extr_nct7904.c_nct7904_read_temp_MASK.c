
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nct7904_data {int tcpu_mask; int temp_mode; int has_dts; int enable_dts; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 struct nct7904_data* FUNC_0 (struct device*) ;







 int FUNC_1 (struct nct7904_data*,int ,unsigned int) ;
 int FUNC_2 (struct nct7904_data*,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_23, u32 VAR_24, int VAR_25,
        long *VAR_26)
{
 struct nct7904_data *VAR_27 = FUNC_0(VAR_23);
 int VAR_28, VAR_29;
 unsigned int VAR_30, VAR_31, VAR_32;

 switch (VAR_24) {
 case 131:
  if (VAR_25 == 4)
   VAR_28 = FUNC_2(VAR_27, VAR_0, VAR_10);
  else if (VAR_25 < 5)
   VAR_28 = FUNC_2(VAR_27, VAR_0,
       VAR_19 + VAR_25 * 4);
  else
   VAR_28 = FUNC_2(VAR_27, VAR_0,
       VAR_22 + (VAR_25 - 5)
       * 2);
  if (VAR_28 < 0)
   return VAR_28;
  VAR_29 = ((VAR_28 & 0xff00) >> 5) | (VAR_28 & 0x7);
  *VAR_26 = FUNC_3(VAR_29, 10) * 125;
  return 0;
 case 134:
  if (VAR_25 == 4) {
   VAR_28 = FUNC_1(VAR_27, VAR_0,
            VAR_14);
   if (VAR_28 < 0)
    return VAR_28;
   *VAR_26 = (VAR_28 >> 1) & 1;
  } else if (VAR_25 < 4) {
   VAR_28 = FUNC_1(VAR_27, VAR_0,
            VAR_13);
   if (VAR_28 < 0)
    return VAR_28;
   *VAR_26 = (VAR_28 >> (((VAR_25 * 2) + 1) & 0x07)) & 1;
  } else {
   if ((VAR_25 - 5) < 4) {
    VAR_28 = FUNC_1(VAR_27, VAR_0,
             VAR_15 +
             ((VAR_25 - 5) >> 3));
    if (VAR_28 < 0)
     return VAR_28;
    *VAR_26 = (VAR_28 >> ((VAR_25 - 5) & 0x07)) & 1;
   } else {
    VAR_28 = FUNC_1(VAR_27, VAR_0,
             VAR_16 +
             ((VAR_25 - 5) >> 3));
    if (VAR_28 < 0)
     return VAR_28;
    *VAR_26 = (VAR_28 >> (((VAR_25 - 5) & 0x07) - 4))
       & 1;
   }
  }
  return 0;
 case 128:
  if (VAR_25 < 5) {
   if ((VAR_27->tcpu_mask >> VAR_25) & 0x01) {
    if ((VAR_27->temp_mode >> VAR_25) & 0x01)
     *VAR_26 = 3;
    else
     *VAR_26 = 4;
   } else {
    *VAR_26 = 0;
   }
  } else {
   if ((VAR_27->has_dts >> (VAR_25 - 5)) & 0x01) {
    if (VAR_27->enable_dts & VAR_6)
     *VAR_26 = 5;
    else
     *VAR_26 = 6;
   } else {
    *VAR_26 = 0;
   }
  }
  return 0;
 case 130:
  VAR_30 = VAR_9;
  VAR_31 = VAR_21;
  VAR_32 = VAR_5;
  break;
 case 129:
  VAR_30 = VAR_12;
  VAR_31 = VAR_20;
  VAR_32 = VAR_4;
  break;
 case 133:
  VAR_30 = VAR_8;
  VAR_31 = VAR_18;
  VAR_32 = VAR_3;
  break;
 case 132:
  VAR_30 = VAR_11;
  VAR_31 = VAR_17;
  VAR_32 = VAR_2;
  break;
 default:
  return -VAR_7;
 }

 if (VAR_25 == 4)
  VAR_28 = FUNC_1(VAR_27, VAR_1, VAR_30);
 else if (VAR_25 < 5)
  VAR_28 = FUNC_1(VAR_27, VAR_1,
           VAR_31 + VAR_25 * 8);
 else
  VAR_28 = FUNC_1(VAR_27, VAR_1,
           VAR_32 + (VAR_25 - 5) * 4);

 if (VAR_28 < 0)
  return VAR_28;
 *VAR_26 = VAR_28 * 1000;
 return 0;
}
