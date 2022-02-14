
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_file_private {int default_retries; scalar_t__ default_retry_time_ms; int recv_mutex; int * fasync_queue; int wait; int recv_msgs; int recv_msg_lock; int user; } ;
struct inode {int dummy; } ;
struct file {struct ipmi_file_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *,struct ipmi_file_private*,int *) ;
 int VAR_2 ;
 int FUNC_4 (struct ipmi_file_private*) ;
 struct ipmi_file_private* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_3);
 int VAR_6;
 struct ipmi_file_private *VAR_7;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_5,
         &VAR_2,
         VAR_7,
         &VAR_7->user);
 if (VAR_6) {
  FUNC_4(VAR_7);
  goto out;
 }

 VAR_4->private_data = VAR_7;

 FUNC_7(&VAR_7->recv_msg_lock);
 FUNC_0(&VAR_7->recv_msgs);
 FUNC_2(&VAR_7->wait);
 VAR_7->fasync_queue = ((void*)0);
 FUNC_6(&VAR_7->recv_mutex);


 VAR_7->default_retries = -1;
 VAR_7->default_retry_time_ms = 0;

out:
 return VAR_6;
}
