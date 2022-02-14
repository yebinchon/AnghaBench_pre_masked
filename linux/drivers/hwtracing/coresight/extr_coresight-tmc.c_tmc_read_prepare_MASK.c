
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {int config_type; TYPE_1__* csdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct tmc_drvdata*) ;
 int FUNC_2 (struct tmc_drvdata*) ;

__attribute__((used)) static int FUNC_3(struct tmc_drvdata *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->config_type) {
 case 130:
 case 129:
  VAR_2 = FUNC_1(VAR_1);
  break;
 case 128:
  VAR_2 = FUNC_2(VAR_1);
  break;
 default:
  VAR_2 = -VAR_0;
 }

 if (!VAR_2)
  FUNC_0(&VAR_1->csdev->dev, "TMC read start\n");

 return VAR_2;
}
