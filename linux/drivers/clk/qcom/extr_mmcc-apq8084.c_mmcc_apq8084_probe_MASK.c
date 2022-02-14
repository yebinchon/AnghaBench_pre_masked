
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,struct regmap*,int *,int) ;
 struct regmap* FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_5)
{
 int VAR_6;
 struct regmap *VAR_7;

 VAR_6 = FUNC_2(VAR_5, &VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_1(&VAR_5->dev, ((void*)0));
 FUNC_0(&VAR_1, VAR_7, &VAR_2, 1);
 FUNC_0(&VAR_3, VAR_7, &VAR_4, 0);

 return 0;
}
