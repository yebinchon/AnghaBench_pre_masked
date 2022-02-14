
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct mn88443x_priv {int clk_freq; int use_clkbuf; scalar_t__ if_freq; struct regmap* regmap_t; TYPE_1__* client_s; } ;
struct device {int dummy; } ;
typedef int s64 ;
struct TYPE_2__ {struct device dev; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct device*,char*,int,int,scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct regmap*,int ,int,int) ;
 int FUNC_4 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct mn88443x_priv *VAR_21)
{
 struct device *VAR_22 = &VAR_21->client_s->dev;
 struct regmap *VAR_23 = VAR_21->regmap_t;
 s64 VAR_24, VAR_25, VAR_26;
 u32 VAR_27, VAR_28;


 if (VAR_21->clk_freq >= VAR_9 && VAR_21->clk_freq < VAR_8) {
  VAR_21->use_clkbuf = 1;
  FUNC_4(VAR_23, VAR_7, 0x07);

  VAR_24 = 0;
 } else {
  VAR_21->use_clkbuf = 0;
  FUNC_4(VAR_23, VAR_7, 0x00);

  VAR_24 = VAR_21->clk_freq;
 }
 if (!FUNC_2(VAR_24, VAR_21->if_freq)) {
  FUNC_0(VAR_22, "Invalid clock, CLK:%d, ADCKT:%lld, IF:%d\n",
   VAR_21->clk_freq, VAR_24, VAR_21->if_freq);
  return -VAR_12;
 }


 if (VAR_21->if_freq == VAR_11 ||
     VAR_21->if_freq == VAR_10)
  VAR_25 = VAR_24 * 2 - VAR_21->if_freq;
 else
  VAR_25 = -((s64)VAR_21->if_freq);
 VAR_25 = FUNC_1(VAR_25 << 24, VAR_24);
 VAR_26 = FUNC_1(VAR_24 << 22, VAR_20);

 FUNC_4(VAR_23, VAR_19, VAR_25 >> 16);
 FUNC_4(VAR_23, VAR_18, VAR_25 >> 8);
 FUNC_4(VAR_23, VAR_17, VAR_25);
 FUNC_4(VAR_23, VAR_15, VAR_26 >> 16);
 FUNC_4(VAR_23, VAR_14, VAR_26 >> 8);
 FUNC_4(VAR_23, VAR_13, VAR_26);


 VAR_27 = VAR_2;
 VAR_28 = VAR_1;
 FUNC_3(VAR_23, VAR_0, VAR_27, VAR_28);


 VAR_28 = VAR_4 | VAR_5;
 FUNC_3(VAR_23, VAR_3, VAR_28, VAR_28);


 FUNC_4(VAR_23, VAR_6, 0x00);

 FUNC_4(VAR_23, VAR_16, 0xfa);

 return 0;
}
