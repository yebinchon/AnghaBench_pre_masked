
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct clk_master {TYPE_1__* layout; int regmap; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int offset; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct clk_master* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_1)
{
 struct clk_master *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3;

 FUNC_0(VAR_2->regmap, VAR_2->layout->offset, &VAR_3);

 return VAR_3 & VAR_0;
}
