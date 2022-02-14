
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_utmi {scalar_t__ regmap_pmc; scalar_t__ regmap_sfr; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 struct clk_hw* FUNC_0 (struct clk_hw*) ;
 unsigned long FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,int ,unsigned int,unsigned int) ;
 struct clk_utmi* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_7)
{
 struct clk_hw *VAR_8;
 struct clk_utmi *VAR_9 = FUNC_6(VAR_7);
 unsigned int VAR_10 = VAR_3 | VAR_2 |
       VAR_1;
 unsigned int VAR_11;
 unsigned long VAR_12;






 VAR_8 = FUNC_0(VAR_7);
 VAR_12 = FUNC_1(VAR_8);

 switch (VAR_12) {
 case 12000000:
  VAR_11 = 0;
  break;
 case 16000000:
  VAR_11 = 1;
  break;
 case 24000000:
  VAR_11 = 2;
  break;




 case 48000000:
  VAR_11 = 3;
  break;
 default:
  FUNC_4("UTMICK: unsupported mainck rate\n");
  return -VAR_6;
 }

 if (VAR_9->regmap_sfr) {
  FUNC_5(VAR_9->regmap_sfr, VAR_4,
       VAR_5, VAR_11);
 } else if (VAR_11) {
  FUNC_4("UTMICK: sfr node required\n");
  return -VAR_6;
 }

 FUNC_5(VAR_9->regmap_pmc, VAR_0, VAR_10, VAR_10);

 while (!FUNC_2(VAR_9->regmap_pmc))
  FUNC_3();

 return 0;
}
