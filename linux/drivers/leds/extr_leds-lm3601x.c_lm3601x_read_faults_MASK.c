
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3601x_led {int last_flag; int regmap; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct lm3601x_led *VAR_16)
{
 int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_0(VAR_16->regmap, VAR_10, &VAR_17);
 if (VAR_18 < 0)
  return -VAR_0;

 VAR_16->last_flag = 0;

 if (VAR_17 & VAR_9)
  VAR_16->last_flag |= VAR_5;

 if (VAR_17 & (VAR_14 | VAR_13))
  VAR_16->last_flag |= VAR_4;

 if (VAR_17 & VAR_12)
  VAR_16->last_flag |= VAR_6;

 if (VAR_17 & VAR_8)
  VAR_16->last_flag |= VAR_3;

 if (VAR_17 & VAR_15)
  VAR_16->last_flag |= VAR_7;

 if (VAR_17 & VAR_11)
  VAR_16->last_flag |= VAR_1;

 if (VAR_17 & VAR_14)
  VAR_16->last_flag |= VAR_2;

 return VAR_16->last_flag;
}
