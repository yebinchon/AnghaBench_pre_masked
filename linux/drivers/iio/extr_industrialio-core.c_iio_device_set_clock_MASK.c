
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_event_interface {int dummy; } ;
struct iio_dev {int mlock; int clock_id; struct iio_event_interface* event_interface; } ;
typedef int clockid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iio_dev*) ;
 scalar_t__ FUNC_1 (struct iio_event_interface const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1, clockid_t VAR_2)
{
 int VAR_3;
 const struct iio_event_interface *VAR_4 = VAR_1->event_interface;

 VAR_3 = FUNC_2(&VAR_1->mlock);
 if (VAR_3)
  return VAR_3;
 if ((VAR_4 && FUNC_1(VAR_4)) ||
     FUNC_0(VAR_1)) {
  FUNC_3(&VAR_1->mlock);
  return -VAR_0;
 }
 VAR_1->clock_id = VAR_2;
 FUNC_3(&VAR_1->mlock);

 return 0;
}
