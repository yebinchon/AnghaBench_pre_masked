
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int trig_readonly; int mlock; int trig; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iio_trigger*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iio_dev *VAR_1, struct iio_trigger *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_1->mlock);
 FUNC_0(VAR_1->trig_readonly);

 VAR_1->trig = FUNC_1(VAR_2);
 VAR_1->trig_readonly = 1;
 FUNC_3(&VAR_1->mlock);

 return 0;
}
