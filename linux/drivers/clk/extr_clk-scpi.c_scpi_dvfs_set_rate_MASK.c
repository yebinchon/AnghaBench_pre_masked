
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scpi_clk {int id; TYPE_1__* scpi_ops; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* dvfs_set_idx ) (int ,int ) ;} ;


 int FUNC_0 (struct scpi_clk*,unsigned long) ;
 int FUNC_1 (int ,int ) ;
 struct scpi_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long VAR_2)
{
 struct scpi_clk *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = FUNC_0(VAR_3, VAR_1);

 if (VAR_4 < 0)
  return VAR_4;
 return VAR_3->scpi_ops->dvfs_set_idx(VAR_3->id, (u8)VAR_4);
}
