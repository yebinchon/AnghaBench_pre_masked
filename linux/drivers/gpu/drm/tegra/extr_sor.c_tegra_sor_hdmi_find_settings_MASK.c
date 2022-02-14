
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sor_hdmi_settings {unsigned long frequency; } ;
struct tegra_sor {unsigned int num_settings; struct tegra_sor_hdmi_settings* settings; } ;



__attribute__((used)) static struct tegra_sor_hdmi_settings *
FUNC_0(struct tegra_sor *VAR_0, unsigned long VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_settings; VAR_2++)
  if (VAR_1 <= VAR_0->settings[VAR_2].frequency)
   return &VAR_0->settings[VAR_2];

 return ((void*)0);
}
