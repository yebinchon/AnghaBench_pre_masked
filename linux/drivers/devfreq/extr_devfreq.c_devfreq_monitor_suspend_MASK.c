
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfreq {int stop_polling; int work; int lock; int previous_freq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct devfreq*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct devfreq *VAR_0)
{
 FUNC_2(&VAR_0->lock);
 if (VAR_0->stop_polling) {
  FUNC_3(&VAR_0->lock);
  return;
 }

 FUNC_1(VAR_0, VAR_0->previous_freq);
 VAR_0->stop_polling = 1;
 FUNC_3(&VAR_0->lock);
 FUNC_0(&VAR_0->work);
}
