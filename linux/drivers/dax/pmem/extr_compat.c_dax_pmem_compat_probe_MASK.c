
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dev_dax {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dev_dax*) ;
 int FUNC_1 (struct dev_dax*) ;
 struct dev_dax* FUNC_2 (struct device*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct dev_dax*) ;
 int FUNC_7 (int *,struct dev_dax*,int ) ;
 int FUNC_8 (int *,struct dev_dax*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_3)
{
 struct dev_dax *VAR_4 = FUNC_2(VAR_3, VAR_0);
 int VAR_5;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

        if (!FUNC_7(&VAR_4->dev, VAR_4, VAR_2))
  return -VAR_1;

 FUNC_4(&VAR_4->dev);
 VAR_5 = FUNC_3(&VAR_4->dev);
 FUNC_5(&VAR_4->dev);

 FUNC_6(&VAR_4->dev, VAR_4);
 if (VAR_5)
  FUNC_8(&VAR_4->dev, VAR_4);

 return VAR_5;
}
