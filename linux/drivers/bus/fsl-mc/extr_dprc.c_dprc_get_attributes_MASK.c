
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dprc_rsp_get_attributes {int portal_id; int options; int icid; int container_id; } ;
struct dprc_attributes {void* portal_id; void* options; int icid; void* container_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_4(struct fsl_mc_io *VAR_1,
   u32 VAR_2,
   u16 VAR_3,
   struct dprc_attributes *VAR_4)
{
 struct fsl_mc_command VAR_5 = { 0 };
 struct dprc_rsp_get_attributes *VAR_6;
 int VAR_7;


 VAR_5.header = FUNC_2(VAR_0,
       VAR_2,
       VAR_3);


 VAR_7 = FUNC_3(VAR_1, &VAR_5);
 if (VAR_7)
  return VAR_7;


 VAR_6 = (struct dprc_rsp_get_attributes *)VAR_5.params;
 VAR_4->container_id = FUNC_1(VAR_6->container_id);
 VAR_4->icid = FUNC_0(VAR_6->icid);
 VAR_4->options = FUNC_1(VAR_6->options);
 VAR_4->portal_id = FUNC_1(VAR_6->portal_id);

 return 0;
}
