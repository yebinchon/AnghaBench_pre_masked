
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_bcm2835_i2c {int i2c_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int,unsigned int) ;
 struct clk_bcm2835_i2c* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_5, unsigned long VAR_6,
    unsigned long VAR_7)
{
 struct clk_bcm2835_i2c *VAR_8 = FUNC_3(VAR_5);
 u32 VAR_9, VAR_10;
 u32 VAR_11 = FUNC_1(VAR_6, VAR_7);

 if (VAR_11 == -VAR_4)
  return -VAR_4;

 FUNC_0(VAR_8->i2c_dev, VAR_1, VAR_11);






 VAR_10 = FUNC_2(VAR_11 / 16, 1u);





 VAR_9 = FUNC_2(VAR_11 / 4, 1u);

 FUNC_0(VAR_8->i2c_dev, VAR_0,
      (VAR_10 << VAR_2) |
      (VAR_9 << VAR_3));
 return 0;
}
