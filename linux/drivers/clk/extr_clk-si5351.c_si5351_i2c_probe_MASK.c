
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct si5351_platform_data {TYPE_4__* clkout; int * pll_src; } ;
struct TYPE_16__ {int clk; struct clk_init_data* init; } ;
struct si5351_driver_data {int variant; char const* pxtal_name; char const* pclkin_name; int num_clkout; TYPE_3__* clkout; TYPE_2__* msynth; TYPE_1__* pll; TYPE_8__ clkin; void* pclkin; TYPE_8__ xtal; void* pxtal; void* regmap; struct i2c_client* client; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_15__ {int of_node; struct si5351_platform_data* platform_data; } ;
struct i2c_client {TYPE_5__ dev; } ;
struct clk_init_data {char const** parent_names; int num_parents; void* name; int flags; int * ops; } ;
typedef int init ;
typedef enum si5351_variant { ____Placeholder_si5351_variant } si5351_variant ;
struct TYPE_14__ {scalar_t__ clkout_src; scalar_t__ rate; scalar_t__ pll_master; int disable_state; int drive; int multisynth_src; } ;
struct TYPE_13__ {int num; TYPE_8__ hw; struct si5351_driver_data* drvdata; } ;
struct TYPE_12__ {int num; TYPE_8__ hw; struct si5351_driver_data* drvdata; } ;
struct TYPE_11__ {int num; TYPE_8__ hw; struct si5351_driver_data* drvdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (struct si5351_driver_data*,int,scalar_t__) ;
 int FUNC_5 (struct si5351_driver_data*,int,int ) ;
 int FUNC_6 (struct si5351_driver_data*,int,int ) ;
 int FUNC_7 (struct si5351_driver_data*,int,int ) ;
 int FUNC_8 (struct si5351_driver_data*,int,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (TYPE_5__*,char*,...) ;
 void* FUNC_11 (TYPE_5__*,char*) ;
 int FUNC_12 (TYPE_5__*,TYPE_8__*) ;
 void* FUNC_13 (TYPE_5__*,int,int,int ) ;
 struct si5351_driver_data* FUNC_14 (TYPE_5__*,int,int ) ;
 void* FUNC_15 (struct i2c_client*,int *) ;
 int FUNC_16 (struct i2c_client*,struct si5351_driver_data*) ;
 int FUNC_17 (struct clk_init_data*,int ,int) ;
 int FUNC_18 (int ,int ,struct si5351_driver_data*) ;
 int VAR_13 ;
 int VAR_14 ;
 void** VAR_15 ;
 int VAR_16 ;
 int FUNC_19 (struct i2c_client*,int) ;
 void** VAR_17 ;
 void** VAR_18 ;
 int VAR_19 ;
 void** VAR_20 ;
 int VAR_21 ;
 int FUNC_20 (struct si5351_driver_data*,int ,int) ;
 int VAR_22 ;
 int FUNC_21 (struct si5351_driver_data*,int ,int,int ) ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_25,
       const struct i2c_device_id *VAR_26)
{
 enum si5351_variant VAR_27 = (enum si5351_variant)VAR_26->driver_data;
 struct si5351_platform_data *VAR_28;
 struct si5351_driver_data *VAR_29;
 struct clk_init_data VAR_30;
 const char *VAR_31[4];
 u8 VAR_32, VAR_33;
 int VAR_34, VAR_35;

 VAR_34 = FUNC_19(VAR_25, VAR_27);
 if (VAR_34)
  return VAR_34;

 VAR_28 = VAR_25->dev.platform_data;
 if (!VAR_28)
  return -VAR_1;

 VAR_29 = FUNC_14(&VAR_25->dev, sizeof(*VAR_29), VAR_4);
 if (!VAR_29)
  return -VAR_2;

 FUNC_16(VAR_25, VAR_29);
 VAR_29->client = VAR_25;
 VAR_29->variant = VAR_27;
 VAR_29->pxtal = FUNC_11(&VAR_25->dev, "xtal");
 VAR_29->pclkin = FUNC_11(&VAR_25->dev, "clkin");

 if (FUNC_1(VAR_29->pxtal) == -VAR_3 ||
     FUNC_1(VAR_29->pclkin) == -VAR_3)
  return -VAR_3;





 if (FUNC_0(VAR_29->pxtal) &&
     (VAR_29->variant != VAR_12 || FUNC_0(VAR_29->pclkin))) {
  FUNC_10(&VAR_25->dev, "missing parent clock\n");
  return -VAR_1;
 }

 VAR_29->regmap = FUNC_15(VAR_25, &VAR_22);
 if (FUNC_0(VAR_29->regmap)) {
  FUNC_10(&VAR_25->dev, "failed to allocate register map\n");
  return FUNC_1(VAR_29->regmap);
 }


 FUNC_20(VAR_29, VAR_6, 0xf0);

 if (VAR_29->variant != VAR_12)
  FUNC_21(VAR_29, VAR_9,
    VAR_7 | VAR_8, 0);


 for (VAR_35 = 0; VAR_35 < 2; VAR_35++) {
  VAR_34 = FUNC_8(VAR_29, VAR_35, VAR_28->pll_src[VAR_35]);
  if (VAR_34) {
   FUNC_10(&VAR_25->dev,
    "failed to reparent pll %d to %d\n",
    VAR_35, VAR_28->pll_src[VAR_35]);
   return VAR_34;
  }
 }

 for (VAR_35 = 0; VAR_35 < 8; VAR_35++) {
  VAR_34 = FUNC_7(VAR_29, VAR_35,
           VAR_28->clkout[VAR_35].multisynth_src);
  if (VAR_34) {
   FUNC_10(&VAR_25->dev,
    "failed to reparent multisynth %d to %d\n",
    VAR_35, VAR_28->clkout[VAR_35].multisynth_src);
   return VAR_34;
  }

  VAR_34 = FUNC_4(VAR_29, VAR_35,
           VAR_28->clkout[VAR_35].clkout_src);
  if (VAR_34) {
   FUNC_10(&VAR_25->dev,
    "failed to reparent clkout %d to %d\n",
    VAR_35, VAR_28->clkout[VAR_35].clkout_src);
   return VAR_34;
  }

  VAR_34 = FUNC_6(VAR_29, VAR_35,
       VAR_28->clkout[VAR_35].drive);
  if (VAR_34) {
   FUNC_10(&VAR_25->dev,
    "failed set drive strength of clkout%d to %d\n",
    VAR_35, VAR_28->clkout[VAR_35].drive);
   return VAR_34;
  }

  VAR_34 = FUNC_5(VAR_29, VAR_35,
      VAR_28->clkout[VAR_35].disable_state);
  if (VAR_34) {
   FUNC_10(&VAR_25->dev,
    "failed set disable state of clkout%d to %d\n",
    VAR_35, VAR_28->clkout[VAR_35].disable_state);
   return VAR_34;
  }
 }


 FUNC_17(&VAR_30, 0, sizeof(VAR_30));
 VAR_30.name = VAR_17[0];
 VAR_30.ops = &VAR_24;
 VAR_30.flags = 0;
 if (!FUNC_0(VAR_29->pxtal)) {
  VAR_29->pxtal_name = FUNC_3(VAR_29->pxtal);
  VAR_30.parent_names = &VAR_29->pxtal_name;
  VAR_30.num_parents = 1;
 }
 VAR_29->xtal.init = &VAR_30;
 VAR_34 = FUNC_12(&VAR_25->dev, &VAR_29->xtal);
 if (VAR_34) {
  FUNC_10(&VAR_25->dev, "unable to register %s\n", VAR_30.name);
  return VAR_34;
 }


 if (VAR_29->variant == VAR_12) {
  FUNC_17(&VAR_30, 0, sizeof(VAR_30));
  VAR_30.name = VAR_17[1];
  VAR_30.ops = &VAR_14;
  if (!FUNC_0(VAR_29->pclkin)) {
   VAR_29->pclkin_name = FUNC_3(VAR_29->pclkin);
   VAR_30.parent_names = &VAR_29->pclkin_name;
   VAR_30.num_parents = 1;
  }
  VAR_29->clkin.init = &VAR_30;
  VAR_34 = FUNC_12(&VAR_25->dev, &VAR_29->clkin);
  if (VAR_34) {
   FUNC_10(&VAR_25->dev, "unable to register %s\n",
    VAR_30.name);
   return VAR_34;
  }
 }


 VAR_32 = (VAR_29->variant == VAR_12) ? 2 : 1;
 VAR_31[0] = VAR_17[0];
 VAR_31[1] = VAR_17[1];


 VAR_29->pll[0].num = 0;
 VAR_29->pll[0].drvdata = VAR_29;
 VAR_29->pll[0].hw.init = &VAR_30;
 FUNC_17(&VAR_30, 0, sizeof(VAR_30));
 VAR_30.name = VAR_20[0];
 VAR_30.ops = &VAR_21;
 VAR_30.flags = 0;
 VAR_30.parent_names = VAR_31;
 VAR_30.num_parents = VAR_32;
 VAR_34 = FUNC_12(&VAR_25->dev, &VAR_29->pll[0].hw);
 if (VAR_34) {
  FUNC_10(&VAR_25->dev, "unable to register %s\n", VAR_30.name);
  return VAR_34;
 }


 VAR_29->pll[1].num = 1;
 VAR_29->pll[1].drvdata = VAR_29;
 VAR_29->pll[1].hw.init = &VAR_30;
 FUNC_17(&VAR_30, 0, sizeof(VAR_30));
 if (VAR_29->variant == VAR_11) {
  VAR_30.name = VAR_20[2];
  VAR_30.ops = &VAR_23;
  VAR_30.flags = 0;
  VAR_30.parent_names = ((void*)0);
  VAR_30.num_parents = 0;
 } else {
  VAR_30.name = VAR_20[1];
  VAR_30.ops = &VAR_21;
  VAR_30.flags = 0;
  VAR_30.parent_names = VAR_31;
  VAR_30.num_parents = VAR_32;
 }
 VAR_34 = FUNC_12(&VAR_25->dev, &VAR_29->pll[1].hw);
 if (VAR_34) {
  FUNC_10(&VAR_25->dev, "unable to register %s\n", VAR_30.name);
  return VAR_34;
 }


 VAR_33 = (VAR_29->variant == VAR_10) ? 3 : 8;
 VAR_31[0] = VAR_20[0];
 if (VAR_29->variant == VAR_11)
  VAR_31[1] = VAR_20[2];
 else
  VAR_31[1] = VAR_20[1];

 VAR_29->msynth = FUNC_13(&VAR_25->dev, VAR_33,
           sizeof(*VAR_29->msynth), VAR_4);
 VAR_29->clkout = FUNC_13(&VAR_25->dev, VAR_33,
           sizeof(*VAR_29->clkout), VAR_4);
 VAR_29->num_clkout = VAR_33;

 if (FUNC_2(!VAR_29->msynth || !VAR_29->clkout)) {
  VAR_34 = -VAR_2;
  return VAR_34;
 }

 for (VAR_35 = 0; VAR_35 < VAR_33; VAR_35++) {
  VAR_29->msynth[VAR_35].num = VAR_35;
  VAR_29->msynth[VAR_35].drvdata = VAR_29;
  VAR_29->msynth[VAR_35].hw.init = &VAR_30;
  FUNC_17(&VAR_30, 0, sizeof(VAR_30));
  VAR_30.name = VAR_18[VAR_35];
  VAR_30.ops = &VAR_19;
  VAR_30.flags = 0;
  if (VAR_28->clkout[VAR_35].pll_master)
   VAR_30.flags |= VAR_0;
  VAR_30.parent_names = VAR_31;
  VAR_30.num_parents = 2;
  VAR_34 = FUNC_12(&VAR_25->dev,
        &VAR_29->msynth[VAR_35].hw);
  if (VAR_34) {
   FUNC_10(&VAR_25->dev, "unable to register %s\n",
    VAR_30.name);
   return VAR_34;
  }
 }

 VAR_32 = (VAR_29->variant == VAR_12) ? 4 : 3;
 VAR_31[2] = VAR_17[0];
 VAR_31[3] = VAR_17[1];
 for (VAR_35 = 0; VAR_35 < VAR_33; VAR_35++) {
  VAR_31[0] = VAR_18[VAR_35];
  VAR_31[1] = (VAR_35 < 4) ? VAR_18[0] :
   VAR_18[4];

  VAR_29->clkout[VAR_35].num = VAR_35;
  VAR_29->clkout[VAR_35].drvdata = VAR_29;
  VAR_29->clkout[VAR_35].hw.init = &VAR_30;
  FUNC_17(&VAR_30, 0, sizeof(VAR_30));
  VAR_30.name = VAR_15[VAR_35];
  VAR_30.ops = &VAR_16;
  VAR_30.flags = 0;
  if (VAR_28->clkout[VAR_35].clkout_src == VAR_5)
   VAR_30.flags |= VAR_0;
  VAR_30.parent_names = VAR_31;
  VAR_30.num_parents = VAR_32;
  VAR_34 = FUNC_12(&VAR_25->dev,
        &VAR_29->clkout[VAR_35].hw);
  if (VAR_34) {
   FUNC_10(&VAR_25->dev, "unable to register %s\n",
    VAR_30.name);
   return VAR_34;
  }


  if (VAR_28->clkout[VAR_35].rate != 0) {
   int VAR_36;
   VAR_36 = FUNC_9(VAR_29->clkout[VAR_35].hw.clk,
        VAR_28->clkout[VAR_35].rate);
   if (VAR_36 != 0) {
    FUNC_10(&VAR_25->dev, "Cannot set rate : %d\n",
     VAR_36);
   }
  }
 }

 VAR_34 = FUNC_18(VAR_25->dev.of_node, VAR_13,
         VAR_29);
 if (VAR_34) {
  FUNC_10(&VAR_25->dev, "unable to add clk provider\n");
  return VAR_34;
 }

 return 0;
}
