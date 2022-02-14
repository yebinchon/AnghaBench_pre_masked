
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_data {int port; scalar_t__ mmio; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct driver_data*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct driver_data *VAR_3)
{




 if (FUNC_2(VAR_3) != 0) {
  FUNC_0(&VAR_3->pdev->dev,
   "Failed standby-immediate command\n");
  return -VAR_0;
 }


 FUNC_4(FUNC_3(VAR_3->mmio + VAR_1) & ~VAR_2,
   VAR_3->mmio + VAR_1);
 FUNC_1(VAR_3->port);

 return 0;
}
