
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_io {int portal_phys_addr; int dev; int portal_virt_addr; } ;
struct fsl_mc_command {int dummy; } ;
typedef enum mc_cmd_status { ____Placeholder_mc_cmd_status } mc_cmd_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int *,unsigned int,unsigned int) ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_1 (struct fsl_mc_command*) ;
 scalar_t__ FUNC_2 (struct fsl_mc_command*) ;
 int FUNC_3 (int ,struct fsl_mc_command*) ;
 unsigned long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct fsl_mc_io *VAR_6,
           struct fsl_mc_command *VAR_7,
           enum mc_cmd_status *VAR_8)
{
 enum mc_cmd_status VAR_9;
 unsigned long VAR_10 =
  VAR_5 + FUNC_4(VAR_3);




 for (;;) {
  VAR_9 = FUNC_3(VAR_6->portal_virt_addr, VAR_7);
  if (VAR_9 != VAR_4)
   break;





  FUNC_6(VAR_2,
        VAR_1);

  if (FUNC_5(VAR_5, VAR_10)) {
   FUNC_0(VAR_6->dev,
    "MC command timed out (portal: %pa, dprc handle: %#x, command: %#x)\n",
     &VAR_6->portal_phys_addr,
     (unsigned int)FUNC_2(VAR_7),
     (unsigned int)FUNC_1(VAR_7));

   return -VAR_0;
  }
 }

 *VAR_8 = VAR_9;
 return 0;
}
