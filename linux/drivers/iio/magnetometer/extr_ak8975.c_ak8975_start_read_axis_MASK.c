
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct ak8975_data {TYPE_1__* def; int eoc_gpio; scalar_t__ eoc_irq; } ;
struct TYPE_2__ {int* ctrl_masks; int * ctrl_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct ak8975_data*,int ) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client const*,int ) ;
 int FUNC_4 (struct ak8975_data*) ;
 int FUNC_5 (struct ak8975_data*) ;
 int FUNC_6 (struct ak8975_data*) ;

__attribute__((used)) static int FUNC_7(struct ak8975_data *VAR_6,
      const struct i2c_client *VAR_7)
{

 int VAR_8 = FUNC_0(VAR_6, VAR_1);

 if (VAR_8 < 0) {
  FUNC_1(&VAR_7->dev, "Error in setting operating mode\n");
  return VAR_8;
 }


 if (VAR_6->eoc_irq)
  VAR_8 = FUNC_5(VAR_6);
 else if (FUNC_2(VAR_6->eoc_gpio))
  VAR_8 = FUNC_4(VAR_6);
 else
  VAR_8 = FUNC_6(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;


 if (VAR_8 & VAR_6->def->ctrl_masks[VAR_2]) {
  VAR_8 = FUNC_3(VAR_7,
            VAR_6->def->ctrl_regs[VAR_3]);
  if (VAR_8 < 0) {
   FUNC_1(&VAR_7->dev, "Error in reading ST2\n");
   return VAR_8;
  }
  if (VAR_8 & (VAR_6->def->ctrl_masks[VAR_4] |
      VAR_6->def->ctrl_masks[VAR_5])) {
   FUNC_1(&VAR_7->dev, "ST2 status error 0x%x\n", VAR_8);
   return -VAR_0;
  }
 }

 return 0;
}
