
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_obj_desc {char* type; char* label; void* flags; void* ver_minor; void* ver_major; void* state; int region_count; int irq_count; void* vendor; void* id; } ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dprc_rsp_get_obj {int label; int type; int flags; int version_minor; int version_major; int state; int region_count; int irq_count; int vendor; int id; } ;
struct dprc_cmd_get_obj {int obj_index; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct fsl_mc_io*,struct fsl_mc_command*) ;
 int FUNC_5 (char*,int ,int) ;

int FUNC_6(struct fsl_mc_io *VAR_1,
   u32 VAR_2,
   u16 VAR_3,
   int VAR_4,
   struct fsl_mc_obj_desc *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dprc_cmd_get_obj *VAR_7;
 struct dprc_rsp_get_obj *VAR_8;
 int VAR_9;


 VAR_6.header = FUNC_3(VAR_0,
       VAR_2,
       VAR_3);
 VAR_7 = (struct dprc_cmd_get_obj *)VAR_6.params;
 VAR_7->obj_index = FUNC_0(VAR_4);


 VAR_9 = FUNC_4(VAR_1, &VAR_6);
 if (VAR_9)
  return VAR_9;


 VAR_8 = (struct dprc_rsp_get_obj *)VAR_6.params;
 VAR_5->id = FUNC_2(VAR_8->id);
 VAR_5->vendor = FUNC_1(VAR_8->vendor);
 VAR_5->irq_count = VAR_8->irq_count;
 VAR_5->region_count = VAR_8->region_count;
 VAR_5->state = FUNC_2(VAR_8->state);
 VAR_5->ver_major = FUNC_1(VAR_8->version_major);
 VAR_5->ver_minor = FUNC_1(VAR_8->version_minor);
 VAR_5->flags = FUNC_1(VAR_8->flags);
 FUNC_5(VAR_5->type, VAR_8->type, 16);
 VAR_5->type[15] = '\0';
 FUNC_5(VAR_5->label, VAR_8->label, 16);
 VAR_5->label[15] = '\0';
 return 0;
}
