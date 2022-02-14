
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_clk_quadfs_pll {scalar_t__ lock; TYPE_1__* data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ reset_present; int powerup_polarity; } ;


 int FUNC_0 (struct st_clk_quadfs_pll*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct st_clk_quadfs_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_2)
{
 struct st_clk_quadfs_pll *VAR_3 = FUNC_3(VAR_2);
 unsigned long VAR_4 = 0;

 if (VAR_3->lock)
  FUNC_1(VAR_3->lock, VAR_4);





 FUNC_0(VAR_3, VAR_0, VAR_3->data->powerup_polarity);

 if (VAR_3->data->reset_present)
  FUNC_0(VAR_3, VAR_1, 0);

 if (VAR_3->lock)
  FUNC_2(VAR_3->lock, VAR_4);
}
