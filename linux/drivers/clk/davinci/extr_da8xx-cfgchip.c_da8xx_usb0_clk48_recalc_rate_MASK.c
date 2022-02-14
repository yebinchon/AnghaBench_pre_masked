
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da8xx_usb0_clk48 {int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 struct da8xx_usb0_clk48* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_10,
        unsigned long VAR_11)
{
 struct da8xx_usb0_clk48 *VAR_12 = FUNC_2(VAR_10);
 unsigned int VAR_13, VAR_14;


 VAR_13 = VAR_9;
 switch (VAR_11) {
 case 12000000:
  VAR_14 = VAR_0;
  break;
 case 13000000:
  VAR_14 = VAR_1;
  break;
 case 19200000:
  VAR_14 = VAR_2;
  break;
 case 20000000:
  VAR_14 = VAR_3;
  break;
 case 24000000:
  VAR_14 = VAR_4;
  break;
 case 26000000:
  VAR_14 = VAR_5;
  break;
 case 38400000:
  VAR_14 = VAR_6;
  break;
 case 40000000:
  VAR_14 = VAR_7;
  break;
 case 48000000:
  VAR_14 = VAR_8;
  break;
 default:
  return 0;
 }

 FUNC_1(VAR_12->regmap, FUNC_0(2), VAR_13, VAR_14);


 return 48000000;
}
