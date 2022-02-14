
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ccu_data {size_t clk_num; TYPE_1__* kona_clks; } ;
struct TYPE_2__ {int hw; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ccu_data *VAR_0)
{
 u32 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->clk_num; VAR_1++)
  FUNC_0(&VAR_0->kona_clks[VAR_1].hw);
}
