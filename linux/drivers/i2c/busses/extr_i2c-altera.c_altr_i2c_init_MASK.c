
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altr_i2c_dev {int bus_clk_rate; scalar_t__ base; int dev; int i2c_clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct altr_i2c_dev*,int ,int) ;
 int FUNC_1 (struct altr_i2c_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct altr_i2c_dev *VAR_9)
{
 u32 VAR_10 = FUNC_2(VAR_9->i2c_clk) / VAR_9->bus_clk_rate;
 u32 VAR_11 = FUNC_2(VAR_9->i2c_clk) / 1000000;
 u32 VAR_12 = (VAR_8 << VAR_3) |
    (VAR_8 << VAR_4);
 u32 VAR_13, VAR_14;

 if (VAR_9->bus_clk_rate <= 100000) {
  VAR_12 &= ~VAR_2;

  VAR_13 = VAR_10 * 1 / 2;
  VAR_14 = VAR_10 * 1 / 2;
 } else {
  VAR_12 |= VAR_2;

  VAR_13 = VAR_10 * 1 / 3;
  VAR_14 = VAR_10 * 2 / 3;
 }
 FUNC_5(VAR_12, VAR_9->base + VAR_1);

 FUNC_3(VAR_9->dev, "rate=%uHz per_clk=%uMHz -> ratio=1:%u\n",
  VAR_9->bus_clk_rate, VAR_11, VAR_10);


 FUNC_1(VAR_9);


 FUNC_5(VAR_13, VAR_9->base + VAR_5);

 FUNC_5(VAR_14, VAR_9->base + VAR_6);

 FUNC_5(FUNC_4(300 * VAR_11, 1000), VAR_9->base + VAR_7);


 FUNC_0(VAR_9, VAR_0, 0);
}
