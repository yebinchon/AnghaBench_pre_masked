
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_phy {TYPE_1__* cfg; } ;
struct TYPE_2__ {int (* powerup ) (struct hdmi_phy*,unsigned long) ;} ;


 int FUNC_0 (struct hdmi_phy*,unsigned long) ;

void FUNC_1(struct hdmi_phy *VAR_0, unsigned long int VAR_1)
{
 if (!VAR_0 || !VAR_0->cfg->powerup)
  return;

 VAR_0->cfg->powerup(VAR_0, VAR_1);
}
