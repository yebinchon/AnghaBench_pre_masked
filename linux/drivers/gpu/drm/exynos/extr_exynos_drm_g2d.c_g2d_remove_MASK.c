
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct g2d_data {int runqueue_slab; int g2d_workq; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct g2d_data*) ;
 int FUNC_3 (struct g2d_data*,int *) ;
 int FUNC_4 (int ) ;
 struct g2d_data* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct g2d_data *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(&VAR_1->dev, &VAR_0);


 FUNC_3(VAR_2, ((void*)0));

 FUNC_7(&VAR_1->dev);
 FUNC_6(&VAR_1->dev);

 FUNC_2(VAR_2);
 FUNC_1(VAR_2->g2d_workq);
 FUNC_4(VAR_2->runqueue_slab);

 return 0;
}
