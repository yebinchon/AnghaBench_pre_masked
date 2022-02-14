
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct component_match {int dummy; } ;


 int FUNC_0 (int *,struct component_match**) ;
 int FUNC_1 (int *,struct component_match**) ;
 int FUNC_2 (int *,int *,struct component_match*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct component_match *VAR_2 = ((void*)0);
 int VAR_3;

 if (FUNC_4(VAR_1)) {
  VAR_3 = FUNC_0(&VAR_1->dev, &VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_1(&VAR_1->dev, &VAR_2);
 if (VAR_3)
  goto fail;




 VAR_3 = FUNC_3(&VAR_1->dev, ~0);
 if (VAR_3)
  goto fail;

 VAR_3 = FUNC_2(&VAR_1->dev, &VAR_0, VAR_2);
 if (VAR_3)
  goto fail;

 return 0;

fail:
 FUNC_5(&VAR_1->dev);
 return VAR_3;
}
