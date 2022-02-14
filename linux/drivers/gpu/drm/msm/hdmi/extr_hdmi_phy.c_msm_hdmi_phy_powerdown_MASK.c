
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_phy {TYPE_1__* cfg; } ;
struct TYPE_2__ {int (* powerdown ) (struct hdmi_phy*) ;} ;


 int FUNC_0 (struct hdmi_phy*) ;

void FUNC_1(struct hdmi_phy *VAR_0)
{
 if (!VAR_0 || !VAR_0->cfg->powerdown)
  return;

 VAR_0->cfg->powerdown(VAR_0);
}
