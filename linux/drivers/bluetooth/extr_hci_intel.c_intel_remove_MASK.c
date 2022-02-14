
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct intel_device {int list; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct intel_device* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct intel_device *VAR_2 = FUNC_5(VAR_1);

 FUNC_1(&VAR_1->dev);

 FUNC_3(&VAR_0);
 FUNC_2(&VAR_2->list);
 FUNC_4(&VAR_0);

 FUNC_0(&VAR_1->dev, "unregistered.\n");

 return 0;
}
