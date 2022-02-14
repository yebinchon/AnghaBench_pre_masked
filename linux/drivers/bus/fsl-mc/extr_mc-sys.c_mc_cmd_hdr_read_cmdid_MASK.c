
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mc_cmd_header {int cmd_id; } ;
struct fsl_mc_command {int header; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(struct fsl_mc_command *VAR_0)
{
 struct mc_cmd_header *VAR_1 = (struct mc_cmd_header *)&VAR_0->header;
 u16 VAR_2 = FUNC_0(VAR_1->cmd_id);

 return VAR_2;
}
