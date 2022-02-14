
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_cmd_header {int status; } ;
struct fsl_mc_command {int header; } ;
typedef enum mc_cmd_status { ____Placeholder_mc_cmd_status } mc_cmd_status ;



__attribute__((used)) static enum mc_cmd_status FUNC_0(struct fsl_mc_command *VAR_0)
{
 struct mc_cmd_header *VAR_1 = (struct mc_cmd_header *)&VAR_0->header;

 return (enum mc_cmd_status)VAR_1->status;
}
