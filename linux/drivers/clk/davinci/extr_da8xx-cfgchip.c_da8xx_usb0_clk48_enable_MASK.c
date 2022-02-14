
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da8xx_usb0_clk48 {int fck; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int,int ,int) ;
 int FUNC_4 (int ,int ,unsigned int,unsigned int) ;
 struct da8xx_usb0_clk48* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_4)
{
 struct da8xx_usb0_clk48 *VAR_5 = FUNC_5(VAR_4);
 unsigned int VAR_6, VAR_7;
 int VAR_8;




 FUNC_2(VAR_5->fck);




 VAR_6 = VAR_3 | VAR_1 | VAR_2;
 VAR_7 = VAR_2;

 FUNC_4(VAR_5->regmap, FUNC_0(2), VAR_6, VAR_7);
 VAR_8 = FUNC_3(VAR_5->regmap, FUNC_0(2), VAR_7,
           VAR_7 & VAR_0, 0, 500000);

 FUNC_1(VAR_5->fck);

 return VAR_8;
}
