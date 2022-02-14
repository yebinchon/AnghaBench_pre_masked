
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_i2c_dev {int dev; TYPE_1__* hw; } ;
struct TYPE_2__ {scalar_t__ has_mst_fifo; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct tegra_i2c_dev*,unsigned int) ;
 int FUNC_2 (struct tegra_i2c_dev*,int,unsigned int) ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct tegra_i2c_dev *VAR_9)
{
 unsigned long VAR_10 = VAR_8 + VAR_1;
 unsigned int VAR_11;
 u32 VAR_12, VAR_13;

 if (VAR_9->hw->has_mst_fifo) {
  VAR_12 = VAR_7 |
         VAR_6;
  VAR_11 = VAR_5;
 } else {
  VAR_12 = VAR_4 |
         VAR_3;
  VAR_11 = VAR_2;
 }

 VAR_13 = FUNC_1(VAR_9, VAR_11);
 VAR_13 |= VAR_12;
 FUNC_2(VAR_9, VAR_13, VAR_11);

 while (FUNC_1(VAR_9, VAR_11) & VAR_12) {
  if (FUNC_3(VAR_8, VAR_10)) {
   FUNC_0(VAR_9->dev, "timeout waiting for fifo flush\n");
   return -VAR_0;
  }
  FUNC_4(1000, 2000);
 }
 return 0;
}
