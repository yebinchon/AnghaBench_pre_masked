
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adxl34x {int suspended; int mutex; scalar_t__ opened; int disabled; } ;


 int FUNC_0 (struct adxl34x*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct adxl34x *VAR_0)
{
 FUNC_1(&VAR_0->mutex);

 if (!VAR_0->suspended && !VAR_0->disabled && VAR_0->opened)
  FUNC_0(VAR_0);

 VAR_0->suspended = 1;

 FUNC_2(&VAR_0->mutex);
}
