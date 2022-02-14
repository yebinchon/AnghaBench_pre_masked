
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {int header; int member_0; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fsl_mc_command*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_3(struct fsl_mc_io *VAR_1,
     u32 VAR_2,
     int *VAR_3)
{
 struct fsl_mc_command VAR_4 = { 0 };
 int VAR_5;


 VAR_4.header = FUNC_1(VAR_0,
       VAR_2,
       0);


 VAR_5 = FUNC_2(VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;


 *VAR_3 = (int)FUNC_0(&VAR_4);

 return 0;
}
