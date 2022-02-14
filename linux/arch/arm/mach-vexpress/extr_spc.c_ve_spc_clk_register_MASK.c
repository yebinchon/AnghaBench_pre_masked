
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int id; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct clk_spc {scalar_t__ cluster; TYPE_1__ hw; } ;
struct clk_init_data {scalar_t__ num_parents; int flags; int * ops; int name; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*) ;
 struct clk* FUNC_2 (struct device*,TYPE_1__*) ;
 struct clk_spc* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static struct clk *FUNC_5(struct device *VAR_4)
{
 struct clk_init_data VAR_5;
 struct clk_spc *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_6->hw.init = &VAR_5;
 VAR_6->cluster = FUNC_4(VAR_4->id);

 VAR_6->cluster = VAR_6->cluster < 0 ? 0 : VAR_6->cluster;

 VAR_5.name = FUNC_1(VAR_4);
 VAR_5.ops = &VAR_3;
 VAR_5.flags = VAR_0;
 VAR_5.num_parents = 0;

 return FUNC_2(VAR_4, &VAR_6->hw);
}
