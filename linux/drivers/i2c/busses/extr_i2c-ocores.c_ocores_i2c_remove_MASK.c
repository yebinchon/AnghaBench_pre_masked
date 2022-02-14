
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dummy; } ;
struct ocores_i2c {int clk; int adap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ocores_i2c*,int ) ;
 int FUNC_4 (struct ocores_i2c*,int ,int) ;
 struct ocores_i2c* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct ocores_i2c *VAR_4 = FUNC_5(VAR_3);
 u8 VAR_5 = FUNC_3(VAR_4, VAR_0);


 VAR_5 &= ~(VAR_1 | VAR_2);
 FUNC_4(VAR_4, VAR_0, VAR_5);


 FUNC_2(&VAR_4->adap);

 if (!FUNC_0(VAR_4->clk))
  FUNC_1(VAR_4->clk);

 return 0;
}
