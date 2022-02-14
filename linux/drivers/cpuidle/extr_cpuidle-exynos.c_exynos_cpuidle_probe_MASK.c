
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_6)
{
 int VAR_7;

 if (FUNC_0(VAR_0) &&
     (FUNC_3("samsung,exynos4210") ||
      FUNC_3("samsung,exynos3250"))) {
  VAR_3 = VAR_6->dev.platform_data;

  VAR_7 = FUNC_1(&VAR_2,
           VAR_1);
 } else {
  VAR_4 = (void *)(VAR_6->dev.platform_data);

  VAR_7 = FUNC_1(&VAR_5, ((void*)0));
 }

 if (VAR_7) {
  FUNC_2(&VAR_6->dev, "failed to register cpuidle driver\n");
  return VAR_7;
 }

 return 0;
}
