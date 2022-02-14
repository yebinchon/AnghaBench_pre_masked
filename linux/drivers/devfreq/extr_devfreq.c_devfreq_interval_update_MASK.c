
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfreq {int lock; TYPE_1__* profile; int work; scalar_t__ stop_polling; } ;
struct TYPE_2__ {unsigned int polling_ms; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;

void FUNC_5(struct devfreq *VAR_1, unsigned int *VAR_2)
{
 unsigned int VAR_3 = VAR_1->profile->polling_ms;
 unsigned int VAR_4 = *VAR_2;

 FUNC_2(&VAR_1->lock);
 VAR_1->profile->polling_ms = VAR_4;

 if (VAR_1->stop_polling)
  goto out;


 if (!VAR_4) {
  FUNC_3(&VAR_1->lock);
  FUNC_0(&VAR_1->work);
  return;
 }


 if (!VAR_3) {
  FUNC_4(VAR_0, &VAR_1->work,
   FUNC_1(VAR_1->profile->polling_ms));
  goto out;
 }


 if (VAR_3 > VAR_4) {
  FUNC_3(&VAR_1->lock);
  FUNC_0(&VAR_1->work);
  FUNC_2(&VAR_1->lock);
  if (!VAR_1->stop_polling)
   FUNC_4(VAR_0, &VAR_1->work,
    FUNC_1(VAR_1->profile->polling_ms));
 }
out:
 FUNC_3(&VAR_1->lock);
}
