
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fsi_master_gpio {int cmd_lock; } ;
struct fsi_master {int dummy; } ;
struct fsi_gpio_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsi_master_gpio*,struct fsi_gpio_msg*,int ,int ,size_t,int *) ;
 int FUNC_1 (struct fsi_master_gpio*,int ,struct fsi_gpio_msg*,size_t,void*) ;
 int FUNC_2 (struct fsi_master_gpio*,int ,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct fsi_master_gpio* FUNC_5 (struct fsi_master*) ;

__attribute__((used)) static int FUNC_6(struct fsi_master *VAR_1, int VAR_2,
  uint8_t VAR_3, uint32_t VAR_4, void *VAR_5, size_t VAR_6)
{
 struct fsi_master_gpio *VAR_7 = FUNC_5(VAR_1);
 struct fsi_gpio_msg VAR_8;
 int VAR_9;

 if (VAR_2 != 0)
  return -VAR_0;

 FUNC_3(&VAR_7->cmd_lock);
 FUNC_0(VAR_7, &VAR_8, VAR_3, VAR_4, VAR_6, ((void*)0));
 VAR_9 = FUNC_1(VAR_7, VAR_3, &VAR_8, VAR_6, VAR_5);
 FUNC_2(VAR_7, VAR_3, VAR_9 == 0, VAR_4);
 FUNC_4(&VAR_7->cmd_lock);

 return VAR_9;
}
