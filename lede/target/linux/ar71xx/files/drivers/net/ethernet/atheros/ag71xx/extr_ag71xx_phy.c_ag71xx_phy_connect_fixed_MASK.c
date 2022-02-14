
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ag71xx_platform_data {int speed; int duplex; } ;
struct ag71xx {int speed; int duplex; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;



 struct ag71xx_platform_data* FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct ag71xx *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;
 struct ag71xx_platform_data *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 0;


 switch (VAR_3->speed) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_2(VAR_2, "invalid speed specified\n");
  VAR_4 = -VAR_0;
  break;
 }

 FUNC_1(VAR_2, "using fixed link parameters\n");

 VAR_1->duplex = VAR_3->duplex;
 VAR_1->speed = VAR_3->speed;

 return VAR_4;
}
