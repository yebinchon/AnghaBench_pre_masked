
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermostat {scalar_t__ type; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct thermostat *VAR_11)
{
 struct device *VAR_12;

 if (!VAR_11->pdev)
  return;
 VAR_12 = &VAR_11->pdev->dev;
 FUNC_0(VAR_12, &VAR_5);
 FUNC_0(VAR_12, &VAR_9);
 FUNC_0(VAR_12, &VAR_3);
 FUNC_0(VAR_12, &VAR_7);
 FUNC_0(VAR_12, &VAR_4);
 FUNC_0(VAR_12, &VAR_8);
 FUNC_0(VAR_12, &VAR_1);
 FUNC_0(VAR_12, &VAR_10);
 FUNC_0(VAR_12, &VAR_2);
 if (VAR_11->type == VAR_0)
  FUNC_0(VAR_12, &VAR_6);
 FUNC_1(VAR_11->pdev);

}
