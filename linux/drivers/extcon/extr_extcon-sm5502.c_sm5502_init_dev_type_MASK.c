
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sm5502_muic_info {int num_reg_data; TYPE_1__* reg_data; int regmap; int dev; } ;
struct TYPE_2__ {unsigned int val; int reg; int invert; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct sm5502_muic_info *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;


 VAR_10 = FUNC_2(VAR_5->regmap, VAR_0, &VAR_6);
 if (VAR_10) {
  FUNC_0(VAR_5->dev,
   "failed to read DEVICE_ID register: %d\n", VAR_10);
  return;
 }

 VAR_7 = ((VAR_6 & VAR_1) >>
    VAR_2);
 VAR_8 = ((VAR_6 & VAR_3) >>
    VAR_4);

 FUNC_1(VAR_5->dev, "Device type: version: 0x%x, vendor: 0x%x\n",
       VAR_8, VAR_7);


 for (VAR_9 = 0; VAR_9 < VAR_5->num_reg_data; VAR_9++) {
  unsigned int VAR_11 = 0;

  if (!VAR_5->reg_data[VAR_9].invert)
   VAR_11 |= ~VAR_5->reg_data[VAR_9].val;
  else
   VAR_11 = VAR_5->reg_data[VAR_9].val;
  FUNC_3(VAR_5->regmap, VAR_5->reg_data[VAR_9].reg, VAR_11);
 }
}
