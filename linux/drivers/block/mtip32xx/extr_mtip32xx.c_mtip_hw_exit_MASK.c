
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_data {int * port; TYPE_1__* pdev; scalar_t__ mmio; int sr; } ;
struct TYPE_2__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct driver_data*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct driver_data*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct driver_data *VAR_2)
{
 if (!VAR_2->sr) {

  FUNC_4(VAR_2->port);


  FUNC_7(FUNC_6(VAR_2->mmio + VAR_0) & ~VAR_1,
    VAR_2->mmio + VAR_0);
 }


 FUNC_1(VAR_2->pdev->irq, ((void*)0));
 FUNC_0(VAR_2->pdev->irq, VAR_2);
 FUNC_3(1000);


 FUNC_5(VAR_2);


 FUNC_2(VAR_2->port);
 VAR_2->port = ((void*)0);

 return 0;
}
