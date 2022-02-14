
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryp_device_data {TYPE_1__* base; } ;
struct TYPE_2__ {int sr; int cr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct cryp_device_data*,int ) ;
 int FUNC_3 (struct cryp_device_data*) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(struct cryp_device_data *VAR_3)
{






 FUNC_2(VAR_3, VAR_0);
 FUNC_3(VAR_3);

 FUNC_0(&VAR_3->base->cr, VAR_1);





 while (FUNC_4(&VAR_3->base->sr) !=
        VAR_2)
  FUNC_1();
}
