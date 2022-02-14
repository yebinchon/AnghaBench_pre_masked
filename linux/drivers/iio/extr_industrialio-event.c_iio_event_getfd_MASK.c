
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_event_interface {int det_events; int flags; } ;
struct iio_dev {int mlock; struct iio_event_interface* event_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int *,struct iio_dev*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(struct iio_dev *VAR_6)
{
 struct iio_event_interface *VAR_7 = VAR_6->event_interface;
 int VAR_8;

 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_5(&VAR_6->mlock);
 if (VAR_8)
  return VAR_8;

 if (FUNC_7(VAR_2, &VAR_7->flags)) {
  VAR_8 = -VAR_0;
  goto unlock;
 }

 FUNC_2(VAR_6);

 VAR_8 = FUNC_0("iio:event", &VAR_5,
    VAR_6, VAR_4 | VAR_3);
 if (VAR_8 < 0) {
  FUNC_1(VAR_2, &VAR_7->flags);
  FUNC_3(VAR_6);
 } else {
  FUNC_4(&VAR_7->det_events);
 }

unlock:
 FUNC_6(&VAR_6->mlock);
 return VAR_8;
}
