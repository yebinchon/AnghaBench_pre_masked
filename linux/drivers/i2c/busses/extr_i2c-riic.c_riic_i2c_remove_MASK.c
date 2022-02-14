
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riic_dev {int adapter; scalar_t__ base; } ;
struct platform_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct riic_dev* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct riic_dev *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(&VAR_1->dev);
 FUNC_5(0, VAR_2->base + VAR_0);
 FUNC_4(&VAR_1->dev);
 FUNC_0(&VAR_2->adapter);
 FUNC_2(&VAR_1->dev);

 return 0;
}
