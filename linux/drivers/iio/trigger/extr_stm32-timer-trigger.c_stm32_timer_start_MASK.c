
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_timer_trigger {unsigned long long max_arr; int regmap; int clk; int dev; } ;
struct iio_trigger {int name; } ;


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
 int VAR_16 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (unsigned long long,int) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ,int ,unsigned long long) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct stm32_timer_trigger *VAR_17,
        struct iio_trigger *VAR_18,
        unsigned int VAR_19)
{
 unsigned long long VAR_20, VAR_21;
 int VAR_22 = 0;
 u32 VAR_23, VAR_24;


 VAR_21 = (unsigned long long)FUNC_1(VAR_17->clk);

 FUNC_3(VAR_21, VAR_19);

 VAR_20 = VAR_21;





 while (VAR_21 > VAR_17->max_arr) {
  VAR_22++;
  VAR_21 = VAR_20;
  FUNC_3(VAR_21, (VAR_22 + 1));
 }
 VAR_20 = VAR_21;

 if (VAR_22 > VAR_2) {
  FUNC_2(VAR_17->dev, "prescaler exceeds the maximum value\n");
  return -VAR_1;
 }


 FUNC_4(VAR_17->regmap, VAR_4, &VAR_23);
 if (VAR_23 & VAR_5)
  return -VAR_0;

 FUNC_4(VAR_17->regmap, VAR_6, &VAR_24);
 if (!(VAR_24 & VAR_8))
  FUNC_0(VAR_17->clk);

 FUNC_6(VAR_17->regmap, VAR_16, VAR_22);
 FUNC_6(VAR_17->regmap, VAR_3, VAR_20 - 1);
 FUNC_5(VAR_17->regmap, VAR_6, VAR_7, VAR_7);


 if (FUNC_7(VAR_18->name))
  FUNC_5(VAR_17->regmap, VAR_9, VAR_11,
       0x2 << VAR_12);
 else
  FUNC_5(VAR_17->regmap, VAR_9, VAR_10,
       0x2 << VAR_13);


 FUNC_5(VAR_17->regmap, VAR_14, VAR_15, VAR_15);


 FUNC_5(VAR_17->regmap, VAR_6, VAR_8, VAR_8);

 return 0;
}
