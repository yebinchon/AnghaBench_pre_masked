
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct bcm2835_dmadev {int ddev; } ;


 int FUNC_0 (struct bcm2835_dmadev*) ;
 int FUNC_1 (int *) ;
 struct bcm2835_dmadev* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct bcm2835_dmadev *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->ddev);
 FUNC_0(VAR_1);

 return 0;
}
