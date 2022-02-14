
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_priv {int buffer_mutex; scalar_t__ response_length; int async_wait; } ;
struct file {struct file_priv* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;

__poll_t FUNC_3(struct file *VAR_4, poll_table *VAR_5)
{
 struct file_priv *VAR_6 = VAR_4->private_data;
 __poll_t VAR_7 = 0;

 FUNC_2(VAR_4, &VAR_6->async_wait, VAR_5);
 FUNC_0(&VAR_6->buffer_mutex);






 if (VAR_6->response_length)
  VAR_7 = VAR_0 | VAR_2;
 else
  VAR_7 = VAR_1 | VAR_3;

 FUNC_1(&VAR_6->buffer_mutex);
 return VAR_7;
}
