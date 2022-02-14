
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_init_data {int num_parents; int flags; int * ops; int name; int * parent_names; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct bcm2835_pll_data {int name; } ;
struct bcm2835_pll {struct clk_hw hw; struct bcm2835_pll_data const* data; struct bcm2835_cprman* cprman; } ;
struct bcm2835_cprman {int dev; int * real_parent_names; } ;
typedef int init ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct clk_hw*) ;
 struct bcm2835_pll* FUNC_1 (int,int ) ;
 int FUNC_2 (struct clk_init_data*,int ,int) ;

__attribute__((used)) static struct clk_hw *FUNC_3(struct bcm2835_cprman *VAR_3,
        const struct bcm2835_pll_data *VAR_4)
{
 struct bcm2835_pll *VAR_5;
 struct clk_init_data VAR_6;
 int VAR_7;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));


 VAR_6.parent_names = &VAR_3->real_parent_names[0];
 VAR_6.num_parents = 1;
 VAR_6.name = VAR_4->name;
 VAR_6.ops = &VAR_2;
 VAR_6.flags = VAR_0;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->cprman = VAR_3;
 VAR_5->data = VAR_4;
 VAR_5->hw.init = &VAR_6;

 VAR_7 = FUNC_0(VAR_3->dev, &VAR_5->hw);
 if (VAR_7)
  return ((void*)0);
 return &VAR_5->hw;
}
