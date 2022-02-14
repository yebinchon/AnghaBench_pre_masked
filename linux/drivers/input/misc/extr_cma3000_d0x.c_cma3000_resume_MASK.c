
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cma3000_accl_data {int suspended; int mutex; scalar_t__ opened; } ;


 int FUNC_0 (struct cma3000_accl_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct cma3000_accl_data *VAR_0)
{
 FUNC_1(&VAR_0->mutex);

 if (VAR_0->suspended && VAR_0->opened)
  FUNC_0(VAR_0);

 VAR_0->suspended = 0;

 FUNC_2(&VAR_0->mutex);
}
