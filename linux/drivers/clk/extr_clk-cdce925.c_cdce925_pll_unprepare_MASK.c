
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct clk_hw {int dummy; } ;
struct clk_cdce925_pll {int index; TYPE_1__* chip; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int) ;
 struct clk_cdce925_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_2)
{
 struct clk_cdce925_pll *VAR_3 = FUNC_1(VAR_2);
 u8 VAR_4 = VAR_3->index * VAR_0;

 FUNC_0(VAR_3->chip->regmap,
   VAR_4 + VAR_1, 0x80, 0x80);
}
