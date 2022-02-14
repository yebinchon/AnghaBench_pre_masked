
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iio_event_interface {int flags; } ;
struct iio_dev {struct iio_event_interface* event_interface; } ;
struct file {struct iio_dev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2->private_data;
 struct iio_event_interface *VAR_4 = VAR_3->event_interface;

 FUNC_0(VAR_0, &VAR_4->flags);

 FUNC_1(VAR_3);

 return 0;
}
