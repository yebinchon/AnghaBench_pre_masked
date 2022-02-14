
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scpi_clk {int id; TYPE_1__* scpi_ops; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned long (* clk_get_val ) (int ) ;} ;


 unsigned long FUNC_0 (int ) ;
 struct scpi_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
       unsigned long VAR_1)
{
 struct scpi_clk *VAR_2 = FUNC_1(VAR_0);

 return VAR_2->scpi_ops->clk_get_val(VAR_2->id);
}
