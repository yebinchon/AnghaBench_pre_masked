
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_io {int portal_phys_addr; int dev; int portal_virt_addr; } ;
struct fsl_mc_command {int dummy; } ;
typedef enum mc_cmd_status { ____Placeholder_mc_cmd_status } mc_cmd_status ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int *,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct fsl_mc_command*) ;
 scalar_t__ FUNC_3 (struct fsl_mc_command*) ;
 int FUNC_4 (int ,struct fsl_mc_command*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct fsl_mc_io *VAR_4,
      struct fsl_mc_command *VAR_5,
      enum mc_cmd_status *VAR_6)
{
 enum mc_cmd_status VAR_7;
 unsigned long VAR_8 = VAR_2 * 1000;

 FUNC_0((VAR_2 * 1000) %
       VAR_1 != 0);

 for (;;) {
  VAR_7 = FUNC_4(VAR_4->portal_virt_addr, VAR_5);
  if (VAR_7 != VAR_3)
   break;

  FUNC_5(VAR_1);
  VAR_8 -= VAR_1;
  if (VAR_8 == 0) {
   FUNC_1(VAR_4->dev,
    "MC command timed out (portal: %pa, dprc handle: %#x, command: %#x)\n",
     &VAR_4->portal_phys_addr,
     (unsigned int)FUNC_3(VAR_5),
     (unsigned int)FUNC_2(VAR_5));

   return -VAR_0;
  }
 }

 *VAR_6 = VAR_7;
 return 0;
}
