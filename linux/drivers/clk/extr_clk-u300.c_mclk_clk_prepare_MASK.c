
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk_mclk {int is_mspro; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 struct clk_mclk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_5)
{
 struct clk_mclk *VAR_6 = FUNC_1(VAR_5);
 u16 VAR_7;


 if (!VAR_6->is_mspro) {

  FUNC_2(0x0054U, VAR_4 + VAR_3);
  VAR_7 = FUNC_0(VAR_4 + VAR_0);

  VAR_7 &= ~VAR_1;

  VAR_7 &= ~VAR_2;
  FUNC_2(VAR_7, VAR_4 + VAR_0);
 } else {
  VAR_7 = FUNC_0(VAR_4 + VAR_0);

  VAR_7 &= ~VAR_1;

  VAR_7 |= VAR_2;
  FUNC_2(VAR_7, VAR_4 + VAR_0);
 }

 return 0;
}
