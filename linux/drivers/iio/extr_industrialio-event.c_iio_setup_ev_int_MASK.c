
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_event_interface {int read_lock; int wait; int det_events; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iio_event_interface *VAR_0)
{
 FUNC_0(VAR_0->det_events);
 FUNC_1(&VAR_0->wait);
 FUNC_2(&VAR_0->read_lock);
}
