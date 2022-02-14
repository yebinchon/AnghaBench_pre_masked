
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_17__ {TYPE_2__* of_node; } ;
struct i2c_client {TYPE_5__ dev; } ;
struct clk_si5341_output_config {int out_format_drv_bits; int out_cm_ampl_bits; scalar_t__ always_on; scalar_t__ synth_master; } ;
struct TYPE_18__ {int clk; struct clk_init_data* init; } ;
struct clk_si5341 {char const* pxtal_name; unsigned int num_synth; unsigned int num_outputs; int regmap; TYPE_12__* clk; TYPE_1__* synth; TYPE_9__ hw; int pxtal; struct i2c_client* i2c_client; } ;
struct clk_init_data {char* name; char const** parent_names; int num_parents; int flags; int * ops; } ;
struct TYPE_16__ {char* name; } ;
struct TYPE_15__ {unsigned int index; TYPE_9__ hw; struct clk_si5341* data; } ;
struct TYPE_14__ {unsigned int index; TYPE_9__ hw; struct clk_si5341* data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_12__*) ;
 int FUNC_4 (TYPE_12__*) ;
 char const* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*,char*,...) ;
 int FUNC_9 (TYPE_5__*,char*) ;
 int FUNC_10 (TYPE_5__*,TYPE_9__*) ;
 char* FUNC_11 (TYPE_5__*,int ,char*,char*,unsigned int) ;
 int FUNC_12 (TYPE_5__*,void*) ;
 struct clk_si5341* FUNC_13 (TYPE_5__*,int,int ) ;
 int FUNC_14 (struct i2c_client*,int *) ;
 int FUNC_15 (struct i2c_client*,struct clk_si5341*) ;
 char const* FUNC_16 (int ,char*,char*,unsigned int) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (TYPE_2__*,int ,struct clk_si5341*) ;
 int VAR_6 ;
 scalar_t__ FUNC_19 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_20 (TYPE_2__*,char*,char**) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ,int) ;
 int VAR_7 ;
 int FUNC_24 (struct i2c_client*,struct clk_si5341_output_config*) ;
 int FUNC_25 (struct clk_si5341*) ;
 int FUNC_26 (struct clk_si5341*) ;
 int FUNC_27 (struct clk_si5341*) ;
 int VAR_8 ;
 int FUNC_28 (struct clk_si5341*) ;
 int FUNC_29 (struct clk_si5341*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_30 (struct clk_si5341*) ;
 int VAR_11 ;
 int FUNC_31 (struct clk_si5341*,int ,int ) ;

__attribute__((used)) static int FUNC_32(struct i2c_client *VAR_12,
  const struct i2c_device_id *VAR_13)
{
 struct clk_si5341 *VAR_14;
 struct clk_init_data VAR_15;
 const char *VAR_16;
 const char *VAR_17[VAR_5];
 int VAR_18;
 unsigned int VAR_19;
 struct clk_si5341_output_config VAR_20[VAR_4];
 bool VAR_21;

 VAR_14 = FUNC_13(&VAR_12->dev, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->i2c_client = VAR_12;

 VAR_14->pxtal = FUNC_9(&VAR_12->dev, "xtal");
 if (FUNC_1(VAR_14->pxtal)) {
  if (FUNC_2(VAR_14->pxtal) == -VAR_2)
   return -VAR_2;

  FUNC_8(&VAR_12->dev, "Missing xtal clock input\n");
 }

 VAR_18 = FUNC_24(VAR_12, VAR_20);
 if (VAR_18)
  return VAR_18;

 if (FUNC_20(VAR_12->dev.of_node, "clock-output-names",
   &VAR_15.name))
  VAR_15.name = VAR_12->dev.of_node->name;
 VAR_16 = VAR_15.name;

 VAR_14->regmap = FUNC_14(VAR_12, &VAR_10);
 if (FUNC_1(VAR_14->regmap))
  return FUNC_2(VAR_14->regmap);

 FUNC_15(VAR_12, VAR_14);

 VAR_18 = FUNC_28(VAR_14);
 if (VAR_18 < 0)
  return VAR_18;


 FUNC_7(VAR_14->pxtal);

 if (FUNC_19(VAR_12->dev.of_node, "silabs,reprogram")) {
  VAR_21 = 1;
 } else {
  VAR_18 = FUNC_27(VAR_14);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_21 = !VAR_18;
 }

 if (VAR_21) {

  VAR_18 = FUNC_29(VAR_14);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_18 = FUNC_30(VAR_14);
  if (VAR_18 < 0)
   return VAR_18;






  FUNC_21(VAR_14->regmap, 1);


  VAR_18 = FUNC_31(VAR_14, VAR_9,
     FUNC_0(VAR_9));
  if (VAR_18 < 0)
   return VAR_18;


  VAR_18 = FUNC_26(VAR_14);
  if (VAR_18 < 0)
   return VAR_18;
 }


 VAR_14->pxtal_name = FUNC_5(VAR_14->pxtal);
 VAR_15.parent_names = &VAR_14->pxtal_name;
 VAR_15.num_parents = 1;
 VAR_15.ops = &VAR_7;
 VAR_15.flags = 0;
 VAR_14->hw.init = &VAR_15;

 VAR_18 = FUNC_10(&VAR_12->dev, &VAR_14->hw);
 if (VAR_18) {
  FUNC_8(&VAR_12->dev, "clock registration failed\n");
  return VAR_18;
 }

 VAR_15.num_parents = 1;
 VAR_15.parent_names = &VAR_16;
 VAR_15.ops = &VAR_11;
 for (VAR_19 = 0; VAR_19 < VAR_14->num_synth; ++VAR_19) {
  VAR_17[VAR_19] = FUNC_11(&VAR_12->dev, VAR_3,
    "%s.N%u", VAR_12->dev.of_node->name, VAR_19);
  VAR_15.name = VAR_17[VAR_19];
  VAR_14->synth[VAR_19].index = VAR_19;
  VAR_14->synth[VAR_19].data = VAR_14;
  VAR_14->synth[VAR_19].hw.init = &VAR_15;
  VAR_18 = FUNC_10(&VAR_12->dev, &VAR_14->synth[VAR_19].hw);
  if (VAR_18) {
   FUNC_8(&VAR_12->dev,
    "synth N%u registration failed\n", VAR_19);
  }
 }

 VAR_15.num_parents = VAR_14->num_synth;
 VAR_15.parent_names = VAR_17;
 VAR_15.ops = &VAR_8;
 for (VAR_19 = 0; VAR_19 < VAR_14->num_outputs; ++VAR_19) {
  VAR_15.name = FUNC_16(VAR_3, "%s.%d",
   VAR_12->dev.of_node->name, VAR_19);
  VAR_15.flags = VAR_20[VAR_19].synth_master ? VAR_0 : 0;
  VAR_14->clk[VAR_19].index = VAR_19;
  VAR_14->clk[VAR_19].data = VAR_14;
  VAR_14->clk[VAR_19].hw.init = &VAR_15;
  if (VAR_20[VAR_19].out_format_drv_bits & 0x07) {
   FUNC_23(VAR_14->regmap,
    FUNC_4(&VAR_14->clk[VAR_19]),
    VAR_20[VAR_19].out_format_drv_bits);
   FUNC_23(VAR_14->regmap,
    FUNC_3(&VAR_14->clk[VAR_19]),
    VAR_20[VAR_19].out_cm_ampl_bits);
  }
  VAR_18 = FUNC_10(&VAR_12->dev, &VAR_14->clk[VAR_19].hw);
  FUNC_17(VAR_15.name);
  if (VAR_18) {
   FUNC_8(&VAR_12->dev,
    "output %u registration failed\n", VAR_19);
   return VAR_18;
  }
  if (VAR_20[VAR_19].always_on)
   FUNC_6(VAR_14->clk[VAR_19].hw.clk);
 }

 VAR_18 = FUNC_18(VAR_12->dev.of_node, VAR_6,
   VAR_14);
 if (VAR_18) {
  FUNC_8(&VAR_12->dev, "unable to add clk provider\n");
  return VAR_18;
 }

 if (VAR_21) {

  FUNC_21(VAR_14->regmap, 0);
  VAR_18 = FUNC_22(VAR_14->regmap);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_18 = FUNC_25(VAR_14);
  if (VAR_18 < 0)
   return VAR_18;
 }


 for (VAR_19 = 0; VAR_19 < VAR_14->num_synth; ++VAR_19)
   FUNC_12(&VAR_12->dev, (void *)VAR_17[VAR_19]);

 return 0;
}
