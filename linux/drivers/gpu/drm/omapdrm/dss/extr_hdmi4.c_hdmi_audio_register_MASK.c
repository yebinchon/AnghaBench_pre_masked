
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hdmi_audio_pdata {int version; int * ops; int audio_dma_addr; int * dev; } ;
struct omap_hdmi {int audio_pdev; TYPE_1__* pdev; int wp; } ;
typedef int pdata ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,struct omap_hdmi_audio_pdata*,int) ;

__attribute__((used)) static int FUNC_4(struct omap_hdmi *VAR_2)
{
 struct omap_hdmi_audio_pdata VAR_3 = {
  .dev = &VAR_2->pdev->dev,
  .version = 4,
  .audio_dma_addr = FUNC_2(&VAR_2->wp),
  .ops = &VAR_1,
 };

 VAR_2->audio_pdev = FUNC_3(
  &VAR_2->pdev->dev, "omap-hdmi-audio", VAR_0,
  &VAR_3, sizeof(VAR_3));

 if (FUNC_0(VAR_2->audio_pdev))
  return FUNC_1(VAR_2->audio_pdev);

 return 0;
}
