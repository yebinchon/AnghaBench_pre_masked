
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {struct clk_init_data* init; } ;
struct TYPE_3__ {int tx_block; int tx_tout; int knows_txdone; int * tx_done; struct device* dev; } ;
struct hi6220_stub_clk {struct clk* dfs_map; TYPE_2__ hw; struct clk* mbox; TYPE_1__ cl; int id; struct device* dev; } ;
struct device_node {int dummy; } ;
struct clk_init_data {char* name; scalar_t__ flags; scalar_t__ num_parents; int * ops; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct device*,char*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 struct clk* FUNC_4 (struct device*,TYPE_2__*) ;
 struct hi6220_stub_clk* FUNC_5 (struct device*,int,int ) ;
 int VAR_6 ;
 struct clk* FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (struct device_node*,int ,struct clk*) ;
 int VAR_7 ;
 int FUNC_8 (struct clk*,int ,int) ;
 struct clk* FUNC_9 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct clk_init_data VAR_10;
 struct hi6220_stub_clk *VAR_11;
 struct clk *VAR_12;
 struct device_node *VAR_13 = VAR_8->dev.of_node;
 int VAR_14;

 VAR_11 = FUNC_5(VAR_9, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;

 VAR_11->dfs_map = FUNC_9(VAR_13,
    "hisilicon,hi6220-clk-sram");
 if (FUNC_0(VAR_11->dfs_map)) {
  FUNC_3(VAR_9, "failed to get sram regmap\n");
  return FUNC_1(VAR_11->dfs_map);
 }

 VAR_11->hw.init = &VAR_10;
 VAR_11->dev = VAR_9;
 VAR_11->id = VAR_5;


 VAR_11->cl.dev = VAR_9;
 VAR_11->cl.tx_done = ((void*)0);
 VAR_11->cl.tx_block = 1;
 VAR_11->cl.tx_tout = 500;
 VAR_11->cl.knows_txdone = 0;


 VAR_11->mbox = FUNC_6(&VAR_11->cl, 0);
 if (FUNC_0(VAR_11->mbox)) {
  FUNC_3(VAR_9, "failed get mailbox channel\n");
  return FUNC_1(VAR_11->mbox);
 }

 VAR_10.name = "acpu0";
 VAR_10.ops = &VAR_6;
 VAR_10.num_parents = 0;
 VAR_10.flags = 0;

 VAR_12 = FUNC_4(VAR_9, &VAR_11->hw);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_14 = FUNC_7(VAR_13, VAR_7, VAR_12);
 if (VAR_14) {
  FUNC_3(VAR_9, "failed to register OF clock provider\n");
  return VAR_14;
 }


 FUNC_8(VAR_11->dfs_map, VAR_0, 0x0);
 FUNC_8(VAR_11->dfs_map, VAR_2, 0x0);
 FUNC_8(VAR_11->dfs_map, VAR_1, 0x0);

 FUNC_2(VAR_9, "Registered clock '%s'\n", VAR_10.name);
 return 0;
}
