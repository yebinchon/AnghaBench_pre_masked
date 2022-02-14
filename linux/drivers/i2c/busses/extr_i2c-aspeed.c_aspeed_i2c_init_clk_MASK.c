
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aspeed_i2c_bus {int (* get_clk_reg_val ) (int ,int) ;scalar_t__ base; int dev; int bus_frequency; int parent_clk_frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct aspeed_i2c_bus *VAR_6)
{
 u32 VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_6->parent_clk_frequency, VAR_6->bus_frequency);
 VAR_8 = FUNC_1(VAR_6->base + VAR_3);
 VAR_8 &= (VAR_1 |
   VAR_2 |
   VAR_0);
 VAR_8 |= VAR_6->get_clk_reg_val(VAR_6->dev, VAR_7);
 FUNC_3(VAR_8, VAR_6->base + VAR_3);
 FUNC_3(VAR_5, VAR_6->base + VAR_4);

 return 0;
}
