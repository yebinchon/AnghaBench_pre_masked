
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct cdn_dp_device {int dev; int audio_pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 struct cdn_dp_device* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct cdn_dp_device *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2->audio_pdev);
 FUNC_0(VAR_2->dev);
 FUNC_1(&VAR_1->dev, &VAR_0);

 return 0;
}
