
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi {int default_state; int pinctrl; int unwedge_state; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct dw_hdmi *VAR_0)
{

 if (!VAR_0->unwedge_state)
  return 0;

 FUNC_0(VAR_0->dev, "Attempting to unwedge stuck i2c bus\n");
 FUNC_2(VAR_0->pinctrl, VAR_0->unwedge_state);
 FUNC_1(10);
 FUNC_2(VAR_0->pinctrl, VAR_0->default_state);

 return 1;
}
