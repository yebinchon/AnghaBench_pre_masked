
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct iio_event_interface {int det_events; int wait; } ;
struct iio_dev {int info; struct iio_event_interface* event_interface; } ;
struct file {struct iio_dev* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_2,
        struct poll_table_struct *VAR_3)
{
 struct iio_dev *VAR_4 = VAR_2->private_data;
 struct iio_event_interface *VAR_5 = VAR_4->event_interface;
 __poll_t VAR_6 = 0;

 if (!VAR_4->info)
  return VAR_6;

 FUNC_1(VAR_2, &VAR_5->wait, VAR_3);

 if (!FUNC_0(&VAR_5->det_events))
  VAR_6 = VAR_0 | VAR_1;

 return VAR_6;
}
