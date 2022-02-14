
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locomo_dev {int dev; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct locomo_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->dev, &VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(&VAR_2->dev, &VAR_1);
}
