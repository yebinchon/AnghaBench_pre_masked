
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_space {int dummy; } ;
struct tpm_chip {int dummy; } ;
struct file_priv {int response_read; int async_wait; int async_work; int timeout_work; int user_read_timer; int buffer_mutex; struct tpm_space* space; struct tpm_chip* chip; } ;
struct file {struct file_priv* private_data; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4(struct file *VAR_3, struct tpm_chip *VAR_4,
       struct file_priv *VAR_5, struct tpm_space *VAR_6)
{
 VAR_5->chip = VAR_4;
 VAR_5->space = VAR_6;
 VAR_5->response_read = 1;

 FUNC_2(&VAR_5->buffer_mutex);
 FUNC_3(&VAR_5->user_read_timer, VAR_2, 0);
 FUNC_0(&VAR_5->timeout_work, VAR_1);
 FUNC_0(&VAR_5->async_work, VAR_0);
 FUNC_1(&VAR_5->async_wait);
 VAR_3->private_data = VAR_5;
}
