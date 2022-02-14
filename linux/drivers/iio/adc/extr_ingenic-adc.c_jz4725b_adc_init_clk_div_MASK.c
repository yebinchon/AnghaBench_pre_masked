
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_adc {scalar_t__ base; int clk; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 unsigned int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 struct clk* FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct clk*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, struct ingenic_adc *VAR_6)
{
 struct clk *VAR_7;
 unsigned long VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;

 VAR_7 = FUNC_2(VAR_6->clk);
 if (!VAR_7) {
  FUNC_4(VAR_5, "ADC clock has no parent\n");
  return -VAR_1;
 }
 VAR_8 = FUNC_3(VAR_7);






 VAR_10 = FUNC_0(VAR_8, 8000000);
 VAR_10 = FUNC_1(VAR_10, 1u, 64u);
 VAR_9 = VAR_8 / VAR_10;
 if (VAR_9 < 500000 || VAR_9 > 8000000) {
  FUNC_4(VAR_5, "No valid divider for ADC main clock\n");
  return -VAR_0;
 }


 VAR_11 = FUNC_0(VAR_9, 100000);

 FUNC_5(((VAR_11 - 1) << VAR_3) |
        (VAR_10 - 1) << VAR_4,
        VAR_6->base + VAR_2);

 return 0;
}
