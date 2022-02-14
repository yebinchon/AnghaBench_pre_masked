
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dfll {int i2c_slave_addr; int i2c_reg; int i2c_fs_rate; scalar_t__ i2c_controller_base; int i2c_clk_rate; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct tegra_dfll*) ;
 int FUNC_4 (struct tegra_dfll*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct tegra_dfll *VAR_11)
{
 u32 VAR_12;

 if (VAR_11->i2c_slave_addr > 0x7f) {
  VAR_12 = VAR_11->i2c_slave_addr << VAR_4;
  VAR_12 |= VAR_3;
 } else {
  VAR_12 = VAR_11->i2c_slave_addr << VAR_5;
 }
 VAR_12 |= VAR_2;
 VAR_12 |= VAR_1;
 FUNC_4(VAR_11, VAR_12, VAR_0);

 FUNC_4(VAR_11, VAR_11->i2c_reg, VAR_10);

 VAR_12 = FUNC_1(VAR_11->i2c_clk_rate, VAR_11->i2c_fs_rate * 8);
 FUNC_0(!VAR_12 || (VAR_12 > VAR_9));
 VAR_12 = (VAR_12 - 1) << VAR_7;


 VAR_12 |= 1 << VAR_8;
 FUNC_2(VAR_12, VAR_11->i2c_controller_base + VAR_6);
 FUNC_3(VAR_11);
}
