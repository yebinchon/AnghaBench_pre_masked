
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vibra_info {int dev; struct twl6040* twl6040; } ;
struct twl6040 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct twl6040*,int ,int ) ;
 int FUNC_2 (struct twl6040*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct vibra_info *VAR_9 = VAR_8;
 struct twl6040 *VAR_10 = VAR_9->twl6040;
 u8 VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_1);
 if (VAR_11 & VAR_5) {
  FUNC_0(VAR_9->dev, "Left Vibrator overcurrent detected\n");
  FUNC_1(VAR_10, VAR_2,
       VAR_4);
 }
 if (VAR_11 & VAR_6) {
  FUNC_0(VAR_9->dev, "Right Vibrator overcurrent detected\n");
  FUNC_1(VAR_10, VAR_3,
       VAR_4);
 }

 return VAR_0;
}
