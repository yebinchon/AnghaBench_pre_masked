
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mpic_timer_wakeup {scalar_t__ timer; int free_work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct fsl_mpic_timer_wakeup *VAR_4 = VAR_3;

 FUNC_0(&VAR_4->free_work);

 return VAR_4->timer ? VAR_0 : VAR_1;
}
