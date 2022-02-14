
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {int header; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_2(struct fsl_mc_io *VAR_1,
        u32 VAR_2,
        u16 VAR_3)
{
 struct fsl_mc_command VAR_4 = { 0 };


 VAR_4.header = FUNC_0(VAR_0, VAR_2,
       VAR_3);


 return FUNC_1(VAR_1, &VAR_4);
}
