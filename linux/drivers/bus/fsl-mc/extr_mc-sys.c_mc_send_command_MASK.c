
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_io {int flags; int mutex; int spinlock; int portal_phys_addr; int dev; int portal_virt_addr; } ;
struct fsl_mc_command {int dummy; } ;
typedef enum mc_cmd_status { ____Placeholder_mc_cmd_status } mc_cmd_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int *,unsigned int,unsigned int,int ,unsigned int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct fsl_mc_command*) ;
 scalar_t__ FUNC_3 (struct fsl_mc_command*) ;
 int FUNC_4 (struct fsl_mc_io*,struct fsl_mc_command*,int*) ;
 int FUNC_5 (struct fsl_mc_io*,struct fsl_mc_command*,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,struct fsl_mc_command*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

int FUNC_13(struct fsl_mc_io *VAR_3, struct fsl_mc_command *VAR_4)
{
 int VAR_5;
 enum mc_cmd_status VAR_6;
 unsigned long VAR_7 = 0;

 if (FUNC_1() && !(VAR_3->flags & VAR_1))
  return -VAR_0;

 if (VAR_3->flags & VAR_1)
  FUNC_11(&VAR_3->spinlock, VAR_7);
 else
  FUNC_9(&VAR_3->mutex);




 FUNC_8(VAR_3->portal_virt_addr, VAR_4);




 if (!(VAR_3->flags & VAR_1))
  VAR_5 = FUNC_5(VAR_3, VAR_4, &VAR_6);
 else
  VAR_5 = FUNC_4(VAR_3, VAR_4, &VAR_6);

 if (VAR_5 < 0)
  goto common_exit;

 if (VAR_6 != VAR_2) {
  FUNC_0(VAR_3->dev,
   "MC command failed: portal: %pa, dprc handle: %#x, command: %#x, status: %s (%#x)\n",
    &VAR_3->portal_phys_addr,
    (unsigned int)FUNC_3(VAR_4),
    (unsigned int)FUNC_2(VAR_4),
    FUNC_7(VAR_6),
    (unsigned int)VAR_6);

  VAR_5 = FUNC_6(VAR_6);
  goto common_exit;
 }

 VAR_5 = 0;
common_exit:
 if (VAR_3->flags & VAR_1)
  FUNC_12(&VAR_3->spinlock, VAR_7);
 else
  FUNC_10(&VAR_3->mutex);

 return VAR_5;
}
