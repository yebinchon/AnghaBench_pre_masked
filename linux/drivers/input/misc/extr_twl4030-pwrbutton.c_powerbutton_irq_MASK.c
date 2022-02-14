
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct input_dev *VAR_7 = VAR_6;
 int VAR_8;
 u8 VAR_9;

 VAR_8 = FUNC_4(VAR_4, &VAR_9, VAR_3);
 if (!VAR_8) {
  FUNC_3(VAR_7->dev.parent, 0);
  FUNC_1(VAR_7, VAR_1, VAR_9 & VAR_2);
  FUNC_2(VAR_7);
 } else {
  FUNC_0(VAR_7->dev.parent, "twl4030: i2c error %d while reading"
   " TWL4030 PM_MASTER STS_HW_CONDITIONS register\n", VAR_8);
 }

 return VAR_0;
}
