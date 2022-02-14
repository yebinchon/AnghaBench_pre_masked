
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmb_dev {int file_mutex; int request_queue_len; int wait_queue; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,int *,int *) ;
 struct ipmb_dev* FUNC_4 (struct file*) ;

__attribute__((used)) static unsigned int FUNC_5(struct file *VAR_2, poll_table *VAR_3)
{
 struct ipmb_dev *VAR_4 = FUNC_4(VAR_2);
 unsigned int VAR_5 = VAR_1;

 FUNC_1(&VAR_4->file_mutex);
 FUNC_3(VAR_2, &VAR_4->wait_queue, VAR_3);

 if (FUNC_0(&VAR_4->request_queue_len))
  VAR_5 |= VAR_0;
 FUNC_2(&VAR_4->file_mutex);

 return VAR_5;
}
