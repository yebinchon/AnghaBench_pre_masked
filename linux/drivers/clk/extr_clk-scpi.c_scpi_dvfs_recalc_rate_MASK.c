
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scpi_opp {unsigned long freq; } ;
struct scpi_clk {TYPE_2__* info; int id; TYPE_1__* scpi_ops; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {struct scpi_opp* opps; } ;
struct TYPE_3__ {int (* dvfs_get_idx ) (int ) ;} ;


 int FUNC_0 (int ) ;
 struct scpi_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
        unsigned long VAR_1)
{
 struct scpi_clk *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = VAR_2->scpi_ops->dvfs_get_idx(VAR_2->id);
 const struct scpi_opp *VAR_4;

 if (VAR_3 < 0)
  return 0;

 VAR_4 = VAR_2->info->opps + VAR_3;
 return VAR_4->freq;
}
