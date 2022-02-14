
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1301_demod_dev {int adapter; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zd1301_demod_dev*) ;
 struct zd1301_demod_dev* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct zd1301_demod_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 FUNC_1(&VAR_1->adapter);
 FUNC_2(VAR_1);

 return 0;
}
