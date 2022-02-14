
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_bcm2835_i2c {int i2c_dev; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ,int ) ;
 struct clk_bcm2835_i2c* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
      unsigned long VAR_2)
{
 struct clk_bcm2835_i2c *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4 = FUNC_1(VAR_3->i2c_dev, VAR_0);

 return FUNC_0(VAR_2, VAR_4);
}
