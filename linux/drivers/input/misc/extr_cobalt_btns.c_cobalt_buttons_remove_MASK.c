
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct buttons_dev {int reg; int poll_dev; } ;


 struct buttons_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct buttons_dev*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct buttons_dev *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->poll_dev);
 FUNC_1(VAR_2->poll_dev);
 FUNC_3(VAR_2->reg);
 FUNC_4(VAR_2);

 return 0;
}
