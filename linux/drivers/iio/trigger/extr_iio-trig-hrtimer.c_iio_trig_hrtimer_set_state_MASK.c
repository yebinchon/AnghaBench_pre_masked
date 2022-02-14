
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_hrtimer_info {int timer; int period; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 struct iio_hrtimer_info* FUNC_2 (struct iio_trigger*) ;

__attribute__((used)) static int FUNC_3(struct iio_trigger *VAR_1, bool VAR_2)
{
 struct iio_hrtimer_info *VAR_3;

 VAR_3 = FUNC_2(VAR_1);

 if (VAR_2)
  FUNC_1(&VAR_3->timer, VAR_3->period,
         VAR_0);
 else
  FUNC_0(&VAR_3->timer);

 return 0;
}
