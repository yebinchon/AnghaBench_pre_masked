
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_file_private {int recv_msg_lock; int recv_msgs; int wait; } ;
struct file {struct ipmi_file_private* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_2, poll_table *VAR_3)
{
 struct ipmi_file_private *VAR_4 = VAR_2->private_data;
 __poll_t VAR_5 = 0;
 unsigned long VAR_6;

 FUNC_1(VAR_2, &VAR_4->wait, VAR_3);

 FUNC_2(&VAR_4->recv_msg_lock, VAR_6);

 if (!FUNC_0(&VAR_4->recv_msgs))
  VAR_5 |= (VAR_0 | VAR_1);

 FUNC_3(&VAR_4->recv_msg_lock, VAR_6);

 return VAR_5;
}
