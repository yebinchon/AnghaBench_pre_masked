
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_priv {scalar_t__ response_length; int timeout_work; int user_read_timer; int async_work; } ;
struct file {int * private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct file *VAR_0, struct file_priv *VAR_1)
{
 FUNC_1(&VAR_1->async_work);
 FUNC_0(&VAR_1->user_read_timer);
 FUNC_1(&VAR_1->timeout_work);
 VAR_0->private_data = ((void*)0);
 VAR_1->response_length = 0;
}
