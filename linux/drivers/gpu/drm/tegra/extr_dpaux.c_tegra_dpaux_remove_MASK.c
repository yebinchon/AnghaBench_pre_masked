
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dpaux {int list; int aux; int work; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tegra_dpaux* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tegra_dpaux*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct tegra_dpaux *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(&VAR_2->work);


 FUNC_8(VAR_2);

 FUNC_7(&VAR_1->dev);
 FUNC_6(&VAR_1->dev);

 FUNC_1(&VAR_2->aux);

 FUNC_3(&VAR_0);
 FUNC_2(&VAR_2->list);
 FUNC_4(&VAR_0);

 return 0;
}
