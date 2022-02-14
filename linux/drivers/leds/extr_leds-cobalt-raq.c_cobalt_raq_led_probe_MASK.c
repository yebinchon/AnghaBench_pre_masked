
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * VAR_3 ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_6)
{
 struct resource *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_6, VAR_2, 0);
 if (!VAR_7)
  return -VAR_0;

 VAR_3 = FUNC_0(&VAR_6->dev, VAR_7->start, FUNC_4(VAR_7));
 if (!VAR_3)
  return -VAR_1;

 VAR_8 = FUNC_1(&VAR_6->dev, &VAR_4);
 if (VAR_8)
  goto err_null;

 VAR_8 = FUNC_1(&VAR_6->dev, &VAR_5);
 if (VAR_8)
  goto err_unregister;

 return 0;

err_unregister:
 FUNC_2(&VAR_4);

err_null:
 VAR_3 = ((void*)0);

 return VAR_8;
}
