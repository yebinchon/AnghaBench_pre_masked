
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int clk_num; int * clks; } ;
struct ingenic_cgu {TYPE_2__ clocks; TYPE_1__* clock_info; int np; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ingenic_cgu*,unsigned int) ;
 int * FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 int VAR_3 ;

int FUNC_6(struct ingenic_cgu *VAR_4)
{
 unsigned VAR_5;
 int VAR_6;

 VAR_4->clocks.clks = FUNC_3(VAR_4->clocks.clk_num, sizeof(struct clk *),
       VAR_2);
 if (!VAR_4->clocks.clks) {
  VAR_6 = -VAR_1;
  goto err_out;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->clocks.clk_num; VAR_5++) {
  VAR_6 = FUNC_2(VAR_4, VAR_5);
  if (VAR_6)
   goto err_out_unregister;
 }

 VAR_6 = FUNC_5(VAR_4->np, VAR_3,
      &VAR_4->clocks);
 if (VAR_6)
  goto err_out_unregister;

 return 0;

err_out_unregister:
 for (VAR_5 = 0; VAR_5 < VAR_4->clocks.clk_num; VAR_5++) {
  if (!VAR_4->clocks.clks[VAR_5])
   continue;
  if (VAR_4->clock_info[VAR_5].type & VAR_0)
   FUNC_0(VAR_4->clocks.clks[VAR_5]);
  else
   FUNC_1(VAR_4->clocks.clks[VAR_5]);
 }
 FUNC_4(VAR_4->clocks.clks);
err_out:
 return VAR_6;
}
