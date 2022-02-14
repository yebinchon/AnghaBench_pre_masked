
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmt_i2c_dev {scalar_t__ mode; scalar_t__ base; int clk; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct wmt_i2c_dev *VAR_13)
{
 int VAR_14;

 VAR_14 = FUNC_2(VAR_13->clk);
 if (VAR_14) {
  FUNC_4(VAR_13->dev, "failed to enable clock\n");
  return VAR_14;
 }

 VAR_14 = FUNC_3(VAR_13->clk, 20000000);
 if (VAR_14) {
  FUNC_4(VAR_13->dev, "failed to set clock = 20Mhz\n");
  FUNC_1(VAR_13->clk);
  return VAR_14;
 }

 FUNC_6(0, VAR_13->base + VAR_5);
 FUNC_6(VAR_4, VAR_13->base + VAR_9);
 FUNC_6(VAR_3, VAR_13->base + VAR_8);
 FUNC_6(VAR_2, VAR_13->base + VAR_7);
 FUNC_6(VAR_0, VAR_13->base + VAR_5);
 FUNC_5(VAR_13->base + VAR_6);
 FUNC_6(VAR_3, VAR_13->base + VAR_8);

 if (VAR_13->mode == VAR_1)
  FUNC_6(FUNC_0(128) | VAR_12, VAR_13->base + VAR_10);
 else
  FUNC_6(FUNC_0(128) | VAR_11, VAR_13->base + VAR_10);

 return 0;
}
