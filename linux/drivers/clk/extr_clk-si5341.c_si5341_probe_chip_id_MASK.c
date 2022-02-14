
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct clk_si5341 {TYPE_1__* i2c_client; int reg_rdiv_offset; int reg_output_offset; int num_synth; int num_outputs; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(struct clk_si5341 *VAR_10)
{
 int VAR_11;
 u8 VAR_12[4];
 u16 VAR_13;

 VAR_11 = FUNC_4(VAR_10->regmap, VAR_5, VAR_12,
    FUNC_0(VAR_12));
 if (VAR_11 < 0) {
  FUNC_1(&VAR_10->i2c_client->dev, "Failed to read chip ID\n");
  return VAR_11;
 }

 VAR_13 = FUNC_3(VAR_12);

 FUNC_2(&VAR_10->i2c_client->dev, "Chip: %x Grade: %u Rev: %u\n",
   VAR_13, VAR_12[2], VAR_12[3]);

 switch (VAR_13) {
 case 0x5340:
  VAR_10->num_outputs = VAR_1;
  VAR_10->num_synth = VAR_2;
  VAR_10->reg_output_offset = VAR_6;
  VAR_10->reg_rdiv_offset = VAR_7;
  break;
 case 0x5341:
  VAR_10->num_outputs = VAR_3;
  VAR_10->num_synth = VAR_4;
  VAR_10->reg_output_offset = VAR_8;
  VAR_10->reg_rdiv_offset = VAR_9;
  break;
 default:
  FUNC_1(&VAR_10->i2c_client->dev, "Model '%x' not supported\n",
   VAR_13);
  return -VAR_0;
 }

 return 0;
}
