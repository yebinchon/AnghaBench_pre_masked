
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_device {int irq; } ;
struct platform_device {int dev; } ;
struct navpoint_platform_data {int gpio; } ;
struct navpoint {int input; struct ssp_device* ssp; } ;


 struct navpoint_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int ,struct navpoint*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct navpoint*) ;
 struct navpoint* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct ssp_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 const struct navpoint_platform_data *VAR_1 =
     FUNC_0(&VAR_0->dev);
 struct navpoint *VAR_2 = FUNC_6(VAR_0);
 struct ssp_device *VAR_3 = VAR_2->ssp;

 FUNC_1(VAR_3->irq, VAR_2);

 FUNC_4(VAR_2->input);
 FUNC_5(VAR_2);

 FUNC_7(VAR_3);

 if (FUNC_3(VAR_1->gpio))
  FUNC_2(VAR_1->gpio);

 return 0;
}
