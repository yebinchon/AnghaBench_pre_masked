
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iio_event_interface {int wait; int det_events; } ;
struct iio_event_data {int timestamp; int id; } ;
struct iio_dev {struct iio_event_interface* event_interface; } ;
typedef int s64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iio_event_interface*) ;
 int FUNC_1 (int *,struct iio_event_data) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct iio_dev *VAR_1, u64 VAR_2, s64 VAR_3)
{
 struct iio_event_interface *VAR_4 = VAR_1->event_interface;
 struct iio_event_data VAR_5;
 int VAR_6;

 if (!VAR_4)
  return 0;


 if (FUNC_0(VAR_4)) {

  VAR_5.id = VAR_2;
  VAR_5.timestamp = VAR_3;

  VAR_6 = FUNC_1(&VAR_4->det_events, VAR_5);
  if (VAR_6 != 0)
   FUNC_2(&VAR_4->wait, VAR_0);
 }

 return 0;
}
