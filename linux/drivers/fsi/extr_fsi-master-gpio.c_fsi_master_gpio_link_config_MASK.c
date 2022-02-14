
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct fsi_master_gpio {int cmd_lock; void* t_echo_delay; void* t_send_delay; } ;
struct fsi_master {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct fsi_master_gpio* FUNC_2 (struct fsi_master*) ;

__attribute__((used)) static int FUNC_3(struct fsi_master *VAR_1, int VAR_2,
           u8 VAR_3, u8 VAR_4)
{
 struct fsi_master_gpio *VAR_5 = FUNC_2(VAR_1);

 if (VAR_2 != 0)
  return -VAR_0;

 FUNC_0(&VAR_5->cmd_lock);
 VAR_5->t_send_delay = VAR_3;
 VAR_5->t_echo_delay = VAR_4;
 FUNC_1(&VAR_5->cmd_lock);

 return 0;
}
