
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct st_clk_quadfs_pll {TYPE_1__* data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ powerup_polarity; } ;


 int FUNC_0 (struct st_clk_quadfs_pll*,int ) ;
 int VAR_0 ;
 struct st_clk_quadfs_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct st_clk_quadfs_pll *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3 = FUNC_0(VAR_2, VAR_3);

 return VAR_2->data->powerup_polarity ? !VAR_3 : !!VAR_3;
}
