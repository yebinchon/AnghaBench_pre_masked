
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_8__ {int notifier_call; } ;
struct TYPE_9__ {int clk_num; struct clk** clks; } ;
struct pic32_clk_common {int reg_lock; struct clk* iobase; TYPE_3__* dev; } ;
struct pic32mzda_clk_data {TYPE_1__ failsafe_notifier; TYPE_2__ onecell_data; struct clk** clks; struct pic32_clk_common core; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int FUNC_0 (size_t*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int FUNC_2 (struct clk*) ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int FUNC_3 (struct clk*) ;
 scalar_t__ FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*,int *,int ) ;
 struct clk* FUNC_6 (TYPE_3__*,char*,char*,int ,struct clk*,int ,int ,int ,int *) ;
 struct clk* FUNC_7 (TYPE_3__*,char*,int *,int ,int) ;
 struct clk* FUNC_8 (TYPE_3__*,char*,char const* const*,int,int ,struct clk*,int ,int,int ,int *) ;
 int FUNC_9 (TYPE_3__*,char*,...) ;
 struct pic32mzda_clk_data* FUNC_10 (TYPE_3__*,int,int ) ;
 int FUNC_11 (struct device_node*,int ,TYPE_2__*) ;
 int VAR_20 ;
 scalar_t__ FUNC_12 (struct device_node*,char*,int *) ;
 struct clk* FUNC_13 (struct device_node*,int ,int ) ;
 int FUNC_14 (struct device_node*) ;
 int * VAR_21 ;
 int VAR_22 ;
 struct clk* FUNC_15 (int *,struct pic32_clk_common*) ;
 struct clk* FUNC_16 (int *,struct pic32_clk_common*) ;
 struct clk* FUNC_17 (int *,struct pic32_clk_common*) ;
 struct clk* FUNC_18 (int *,struct pic32_clk_common*) ;
 struct clk* FUNC_19 (int *,struct pic32_clk_common*) ;
 size_t* VAR_23 ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 int * VAR_24 ;
 int FUNC_22 (TYPE_1__*) ;
 int VAR_25 ;
 int FUNC_23 (int *) ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_28)
{
 const char *const VAR_29[] = {"posc_clk", "frc_clk"};
 struct device_node *VAR_30 = VAR_28->dev.of_node;
 struct pic32mzda_clk_data *VAR_31;
 struct pic32_clk_common *VAR_32;
 struct clk *VAR_33, *VAR_34;
 struct clk **VAR_35;
 int VAR_36, VAR_37, VAR_38;

 VAR_31 = FUNC_10(&VAR_28->dev, sizeof(*VAR_31), VAR_5);
 if (!VAR_31)
  return -VAR_2;

 VAR_32 = &VAR_31->core;
 VAR_32->iobase = FUNC_13(VAR_30, 0, FUNC_14(VAR_30));
 if (FUNC_1(VAR_32->iobase)) {
  FUNC_9(&VAR_28->dev, "pic32-clk: failed to map registers\n");
  return FUNC_2(VAR_32->iobase);
 }

 FUNC_23(&VAR_32->reg_lock);
 VAR_32->dev = &VAR_28->dev;
 VAR_35 = &VAR_31->clks[0];


 VAR_35[VAR_14] = FUNC_7(&VAR_28->dev, "posc_clk", ((void*)0),
      0, 24000000);
 VAR_35[VAR_3] = FUNC_7(&VAR_28->dev, "frc_clk", ((void*)0),
      0, 8000000);
 VAR_35[VAR_0] = FUNC_7(&VAR_28->dev, "bfrc_clk", ((void*)0),
      0, 8000000);
 VAR_35[VAR_6] = FUNC_7(&VAR_28->dev, "lprc_clk", ((void*)0),
      0, 32000);
 VAR_35[VAR_19] = FUNC_7(&VAR_28->dev, "usbphy_clk", ((void*)0),
      0, 24000000);

 if (FUNC_12(VAR_30, "microchip,pic32mzda-sosc", ((void*)0))) {
  FUNC_21("pic32-clk: dt requests SOSC.\n");
  VAR_35[VAR_18] = FUNC_17(&VAR_25, VAR_32);
 }

 VAR_35[VAR_4] = FUNC_6(&VAR_28->dev, "frcdiv_clk",
            "frc_clk", 0,
            VAR_32->iobase,
            VAR_9,
            VAR_8,
            VAR_1,
            &VAR_32->reg_lock);

 VAR_33 = FUNC_8(&VAR_28->dev, "spll_mux_clk",
           VAR_29, 2, 0,
           VAR_32->iobase + 0x020,
           VAR_13, 1, 0, &VAR_32->reg_lock);
 if (FUNC_1(VAR_33))
  FUNC_20("spll_mux_clk: clk register failed\n");


 VAR_35[VAR_12] = FUNC_18(&VAR_27, VAR_32);

 VAR_35[VAR_17] = FUNC_19(&VAR_26, VAR_32);

 for (VAR_36 = VAR_10, VAR_37 = 0; VAR_36 <= VAR_11; VAR_37++, VAR_36++)
  VAR_35[VAR_36] = FUNC_15(&VAR_21[VAR_37],
         VAR_32);

 for (VAR_36 = VAR_15, VAR_37 = 0; VAR_36 <= VAR_16; VAR_37++, VAR_36++)
  VAR_35[VAR_36] = FUNC_16(&VAR_24[VAR_37], VAR_32);


 for (VAR_37 = 0; VAR_37 < VAR_7; VAR_37++) {
  if (FUNC_1(VAR_35[VAR_37]))
   continue;
  FUNC_5(VAR_35[VAR_37], ((void*)0), FUNC_3(VAR_35[VAR_37]));
 }


 VAR_31->onecell_data.clks = VAR_35;
 VAR_31->onecell_data.clk_num = VAR_7;
 VAR_38 = FUNC_11(VAR_30, VAR_20,
      &VAR_31->onecell_data);
 if (VAR_38)
  return VAR_38;


 for (VAR_37 = 0; VAR_37 < FUNC_0(VAR_23); VAR_37++) {
  VAR_34 = VAR_35[VAR_23[VAR_37]];
  if (FUNC_4(VAR_34))
   FUNC_9(&VAR_28->dev, "clk_prepare_enable(%s) failed\n",
    FUNC_3(VAR_34));
 }


 VAR_31->failsafe_notifier.notifier_call = VAR_22;
 return FUNC_22(&VAR_31->failsafe_notifier);
}
