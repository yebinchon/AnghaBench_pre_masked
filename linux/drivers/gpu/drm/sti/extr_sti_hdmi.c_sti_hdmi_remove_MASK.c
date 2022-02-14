
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hdmi {int notifier; scalar_t__ audio_pdev; int ddc_adapt; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 struct sti_hdmi* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct sti_hdmi *VAR_3 = FUNC_3(&VAR_2->dev);

 FUNC_1(VAR_3->notifier, VAR_0);

 FUNC_4(VAR_3->ddc_adapt);
 if (VAR_3->audio_pdev)
  FUNC_5(VAR_3->audio_pdev);
 FUNC_2(&VAR_2->dev, &VAR_1);

 FUNC_0(VAR_3->notifier);
 return 0;
}
