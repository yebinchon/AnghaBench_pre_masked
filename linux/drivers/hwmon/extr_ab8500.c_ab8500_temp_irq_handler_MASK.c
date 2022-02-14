
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct abx500_temp {TYPE_1__* pdev; struct ab8500_temp* plat_data; } ;
struct ab8500_temp {int power_off_work; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(int VAR_2, struct abx500_temp *VAR_3)
{
 struct ab8500_temp *VAR_4 = VAR_3->plat_data;

 FUNC_0(&VAR_3->pdev->dev, "Power off in %d s\n",
   VAR_0 / VAR_1);

 FUNC_1(&VAR_4->power_off_work,
  VAR_0);
 return 0;
}
