
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 int VAR_3 = FUNC_2(&VAR_2->dev, VAR_0, &VAR_1);

 if (!VAR_3)
  VAR_3 = FUNC_1(&VAR_2->dev, FUNC_0(32));

 return VAR_3;
}
