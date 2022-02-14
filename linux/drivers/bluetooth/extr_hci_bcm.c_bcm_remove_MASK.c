
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct bcm_device {int name; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct bcm_device* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct bcm_device *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(&VAR_0);
 FUNC_1(&VAR_2->list);
 FUNC_3(&VAR_0);

 FUNC_0(&VAR_1->dev, "%s device unregistered.\n", VAR_2->name);

 return 0;
}
