
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct da9052_hwmon {int da9052; } ;


 int FUNC_0 (int*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct da9052_hwmon *VAR_8, int VAR_9)
{
 u8 VAR_10[3];
 int VAR_11, VAR_12, VAR_13;


 VAR_13 = FUNC_1(VAR_8->da9052, VAR_6,
    FUNC_0(VAR_10), VAR_10);
 if (VAR_13)
  return VAR_13;

 switch (VAR_9) {
 case 130:
 case 131:
  VAR_11 = VAR_10[0] << VAR_1;
  VAR_12 = VAR_10[2] & VAR_0;
  VAR_12 >>= VAR_2;
  break;
 case 128:
 case 129:
  VAR_11 = VAR_10[1] << VAR_4;
  VAR_12 = VAR_10[2] & VAR_3;
  VAR_12 >>= VAR_5;
  break;
 default:
  return -VAR_7;
 }

 return VAR_11 | VAR_12;
}
