
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_gpio {int cmd_lock; scalar_t__ external_mode; } ;
struct fsi_master {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fsi_master_gpio*,int ) ;
 int FUNC_1 (struct fsi_master_gpio*) ;
 int FUNC_2 (struct fsi_master_gpio*,int ,int,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fsi_master_gpio*,int) ;
 int FUNC_8 (struct fsi_master_gpio*,int) ;
 struct fsi_master_gpio* FUNC_9 (struct fsi_master*) ;
 int FUNC_10 (struct fsi_master_gpio*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct fsi_master *VAR_5, int VAR_6)
{
 struct fsi_master_gpio *VAR_7 = FUNC_9(VAR_5);
 unsigned long VAR_8;

 if (VAR_6 != 0)
  return -VAR_1;

 FUNC_10(VAR_7);

 FUNC_5(&VAR_7->cmd_lock);
 if (VAR_7->external_mode) {
  FUNC_6(&VAR_7->cmd_lock);
  return -VAR_0;
 }

 FUNC_4(VAR_8);

 FUNC_8(VAR_7, 1);
 FUNC_7(VAR_7, 1);
 FUNC_0(VAR_7, VAR_4);
 FUNC_7(VAR_7, 0);
 FUNC_0(VAR_7, VAR_2);
 FUNC_1(VAR_7);
 FUNC_7(VAR_7, 1);
 FUNC_0(VAR_7, VAR_3);

 FUNC_3(VAR_8);

 FUNC_2(VAR_7, 0, 0, 0);
 FUNC_6(&VAR_7->cmd_lock);


 FUNC_11(200);

 return 0;
}
