
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct clk_init_data* init; } ;
struct scpi_clk {TYPE_2__ hw; int id; TYPE_1__* scpi_ops; int info; } ;
struct of_device_id {int * data; } ;
struct device {int dummy; } ;
struct clk_init_data {char const* name; int * ops; scalar_t__ num_parents; scalar_t__ flags; } ;
struct TYPE_4__ {scalar_t__ (* clk_get_range ) (int ,unsigned long*,unsigned long*) ;int (* dvfs_get_info ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,unsigned long,unsigned long) ;
 int FUNC_3 (struct device*,TYPE_2__*) ;
 TYPE_1__* FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,unsigned long*,unsigned long*) ;

__attribute__((used)) static int
FUNC_7(struct device *VAR_3, const struct of_device_id *VAR_4,
    struct scpi_clk *VAR_5, const char *VAR_6)
{
 struct clk_init_data VAR_7;
 unsigned long VAR_8 = 0, VAR_9 = 0;
 int VAR_10;

 VAR_7.name = VAR_6;
 VAR_7.flags = 0;
 VAR_7.num_parents = 0;
 VAR_7.ops = VAR_4->data;
 VAR_5->hw.init = &VAR_7;
 VAR_5->scpi_ops = FUNC_4();

 if (VAR_7.ops == &VAR_2) {
  VAR_5->info = VAR_5->scpi_ops->dvfs_get_info(VAR_5->id);
  if (FUNC_0(VAR_5->info))
   return FUNC_1(VAR_5->info);
 } else if (VAR_7.ops == &VAR_1) {
  if (VAR_5->scpi_ops->clk_get_range(VAR_5->id, &VAR_8, &VAR_9) || !VAR_9)
   return -VAR_0;
 } else {
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_3, &VAR_5->hw);
 if (!VAR_10 && VAR_9)
  FUNC_2(&VAR_5->hw, VAR_8, VAR_9);
 return VAR_10;
}
