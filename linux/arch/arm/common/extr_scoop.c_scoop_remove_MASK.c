
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct scoop_dev {int base; TYPE_1__ gpio; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scoop_dev*) ;
 struct scoop_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct scoop_dev *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2)
  return -VAR_0;

 if (VAR_2->gpio.base != -1)
  FUNC_0(&VAR_2->gpio);

 FUNC_4(VAR_1, ((void*)0));
 FUNC_1(VAR_2->base);
 FUNC_2(VAR_2);

 return 0;
}
