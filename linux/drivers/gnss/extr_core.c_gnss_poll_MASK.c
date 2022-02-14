
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnss_device {scalar_t__ disconnected; int read_fifo; int read_queue; } ;
struct file {struct gnss_device* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_3, poll_table *VAR_4)
{
 struct gnss_device *VAR_5 = VAR_3->private_data;
 __poll_t VAR_6 = 0;

 FUNC_1(VAR_3, &VAR_5->read_queue, VAR_4);

 if (!FUNC_0(&VAR_5->read_fifo))
  VAR_6 |= VAR_1 | VAR_2;
 if (VAR_5->disconnected)
  VAR_6 |= VAR_0;

 return VAR_6;
}
