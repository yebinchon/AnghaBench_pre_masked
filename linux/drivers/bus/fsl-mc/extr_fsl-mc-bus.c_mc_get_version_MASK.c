
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mc_version {void* minor; void* major; void* revision; } ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpmng_rsp_get_version {int version_minor; int version_major; int revision; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

__attribute__((used)) static int FUNC_3(struct fsl_mc_io *VAR_1,
     u32 VAR_2,
     struct mc_version *VAR_3)
{
 struct fsl_mc_command VAR_4 = { 0 };
 struct dpmng_rsp_get_version *VAR_5;
 int VAR_6;


 VAR_4.header = FUNC_1(VAR_0,
       VAR_2,
       0);


 VAR_6 = FUNC_2(VAR_1, &VAR_4);
 if (VAR_6)
  return VAR_6;


 VAR_5 = (struct dpmng_rsp_get_version *)VAR_4.params;
 VAR_3->revision = FUNC_0(VAR_5->revision);
 VAR_3->major = FUNC_0(VAR_5->version_major);
 VAR_3->minor = FUNC_0(VAR_5->version_minor);

 return 0;
}
