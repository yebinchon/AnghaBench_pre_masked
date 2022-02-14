
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rt8973a_muic_info {int num_reg_data; int auto_config; int dev; int regmap; TYPE_1__* reg_data; } ;
struct TYPE_2__ {int val; scalar_t__ invert; int mask; int reg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct rt8973a_muic_info *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;


 VAR_12 = FUNC_2(VAR_7->regmap, VAR_2, &VAR_8);
 if (VAR_12) {
  FUNC_0(VAR_7->dev,
   "failed to read DEVICE_ID register: %d\n", VAR_12);
  return;
 }

 VAR_9 = ((VAR_8 & VAR_3) >>
    VAR_4);
 VAR_10 = ((VAR_8 & VAR_5) >>
    VAR_6);

 FUNC_1(VAR_7->dev, "Device type: version: 0x%x, vendor: 0x%x\n",
       VAR_10, VAR_9);


 for (VAR_11 = 0; VAR_11 < VAR_7->num_reg_data; VAR_11++) {
  u8 VAR_13 = VAR_7->reg_data[VAR_11].reg;
  u8 VAR_14 = VAR_7->reg_data[VAR_11].mask;
  u8 VAR_15 = 0;

  if (VAR_7->reg_data[VAR_11].invert)
   VAR_15 = ~VAR_7->reg_data[VAR_11].val;
  else
   VAR_15 = VAR_7->reg_data[VAR_11].val;

  FUNC_3(VAR_7->regmap, VAR_13, VAR_14, VAR_15);
 }


 VAR_12 = FUNC_2(VAR_7->regmap, VAR_0, &VAR_8);
 if (VAR_12) {
  FUNC_0(VAR_7->dev,
   "failed to read CONTROL1 register: %d\n", VAR_12);
  return;
 }

 VAR_8 &= VAR_1;
 if (VAR_8) {
  VAR_7->auto_config = 1;
  FUNC_1(VAR_7->dev,
   "Enable Auto-configuration for internal path\n");
 }
}
