
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct debugfs_reg32 {char* name; int offset; } ;
struct clk_hw {int dummy; } ;
struct bcm2835_pll_divider_data {int a2w_reg; int cm_reg; } ;
struct bcm2835_pll_divider {struct bcm2835_pll_divider_data* data; struct bcm2835_cprman* cprman; } ;
struct bcm2835_cprman {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm2835_cprman*,int ,struct debugfs_reg32*,int,struct dentry*) ;
 struct bcm2835_pll_divider* FUNC_1 (struct clk_hw*) ;
 struct debugfs_reg32* FUNC_2 (int ,int,int,int ) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1,
        struct dentry *VAR_2)
{
 struct bcm2835_pll_divider *VAR_3 = FUNC_1(VAR_1);
 struct bcm2835_cprman *VAR_4 = VAR_3->cprman;
 const struct bcm2835_pll_divider_data *VAR_5 = VAR_3->data;
 struct debugfs_reg32 *VAR_6;

 VAR_6 = FUNC_2(VAR_4->dev, 7, sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return;

 VAR_6[0].name = "cm";
 VAR_6[0].offset = VAR_5->cm_reg;
 VAR_6[1].name = "a2w";
 VAR_6[1].offset = VAR_5->a2w_reg;

 FUNC_0(VAR_4, 0, VAR_6, 2, VAR_2);
}
