
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {int pll; int core; scalar_t__ audio_pdev; int debugfs; } ;
struct device {int dummy; } ;


 struct omap_hdmi* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct omap_hdmi *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3->debugfs);

 if (VAR_3->audio_pdev)
  FUNC_4(VAR_3->audio_pdev);

 FUNC_2(&VAR_3->core);
 FUNC_3(&VAR_3->pll);
}
