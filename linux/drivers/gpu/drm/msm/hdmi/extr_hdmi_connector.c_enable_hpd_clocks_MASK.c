
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_platform_config {int hpd_clk_cnt; int * hpd_clk_names; scalar_t__* hpd_freq; } ;
struct hdmi {int * hpd_clks; TYPE_1__* pdev; struct hdmi_platform_config* config; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct device*,char*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct hdmi *VAR_0, bool VAR_1)
{
 const struct hdmi_platform_config *VAR_2 = VAR_0->config;
 struct device *VAR_3 = &VAR_0->pdev->dev;
 int VAR_4, VAR_5;

 if (VAR_1) {
  for (VAR_4 = 0; VAR_4 < VAR_2->hpd_clk_cnt; VAR_4++) {
   if (VAR_2->hpd_freq && VAR_2->hpd_freq[VAR_4]) {
    VAR_5 = FUNC_3(VAR_0->hpd_clks[VAR_4],
         VAR_2->hpd_freq[VAR_4]);
    if (VAR_5)
     FUNC_4(VAR_3,
       "failed to set clk %s (%d)\n",
       VAR_2->hpd_clk_names[VAR_4], VAR_5);
   }

   VAR_5 = FUNC_2(VAR_0->hpd_clks[VAR_4]);
   if (VAR_5) {
    FUNC_0(VAR_3,
     "failed to enable hpd clk: %s (%d)\n",
     VAR_2->hpd_clk_names[VAR_4], VAR_5);
   }
  }
 } else {
  for (VAR_4 = VAR_2->hpd_clk_cnt - 1; VAR_4 >= 0; VAR_4--)
   FUNC_1(VAR_0->hpd_clks[VAR_4]);
 }
}
