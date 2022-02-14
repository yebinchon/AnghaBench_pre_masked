
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlp9xx_i2c_dev {int clk_hz; int ip_clk_hz; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct xlp9xx_i2c_dev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct xlp9xx_i2c_dev *VAR_6)
{
 u32 VAR_7;





 VAR_7 = FUNC_0(VAR_6->ip_clk_hz, VAR_6->clk_hz);
 VAR_7 = ((VAR_7 - 8) / 5) - 1;
 FUNC_1(VAR_6, VAR_0, VAR_3);
 FUNC_1(VAR_6, VAR_0, VAR_1 |
        VAR_2);
 FUNC_1(VAR_6, VAR_4, VAR_7);
 FUNC_1(VAR_6, VAR_5, 0);

 return 0;
}
