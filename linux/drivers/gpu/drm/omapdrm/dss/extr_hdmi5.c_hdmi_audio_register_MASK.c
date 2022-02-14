
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hdmi_audio_pdata {int version; int * ops; int audio_dma_addr; int * dev; } ;
struct TYPE_4__ {int base; } ;
struct omap_hdmi {TYPE_2__ wp; int wp_idlemode; int audio_pdev; TYPE_1__* pdev; } ;
typedef int pdata ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int) ;
 int VAR_2 ;
 int FUNC_3 (struct omap_hdmi*) ;
 int FUNC_4 (struct omap_hdmi*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,char*,int ,struct omap_hdmi_audio_pdata*,int) ;

__attribute__((used)) static int FUNC_7(struct omap_hdmi *VAR_3)
{
 struct omap_hdmi_audio_pdata VAR_4 = {
  .dev = &VAR_3->pdev->dev,
  .version = 5,
  .audio_dma_addr = FUNC_5(&VAR_3->wp),
  .ops = &VAR_2,
 };

 VAR_3->audio_pdev = FUNC_6(
  &VAR_3->pdev->dev, "omap-hdmi-audio", VAR_1,
  &VAR_4, sizeof(VAR_4));

 if (FUNC_0(VAR_3->audio_pdev))
  return FUNC_1(VAR_3->audio_pdev);

 FUNC_3(VAR_3);
 VAR_3->wp_idlemode =
  FUNC_2(VAR_3->wp.base, VAR_0, 3, 2);
 FUNC_4(VAR_3);

 return 0;
}
