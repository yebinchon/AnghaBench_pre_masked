
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_data {scalar_t__ mmio; int port; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct driver_data*) ;
 scalar_t__ FUNC_2 (struct driver_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct driver_data *VAR_3)
{

 FUNC_1(VAR_3);


 if (FUNC_2(VAR_3) != 0) {
  FUNC_0(&VAR_3->pdev->dev,
   "Unable to reset the HBA\n");
  return -VAR_0;
 }





 FUNC_3(VAR_3->port);
 FUNC_4(VAR_3->port);


 FUNC_6(FUNC_5(VAR_3->mmio + VAR_1) | VAR_2,
   VAR_3->mmio + VAR_1);

 return 0;
}
