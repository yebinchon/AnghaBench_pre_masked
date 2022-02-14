
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dprc_irq_cfg {int val; int irq_num; int paddr; } ;
struct dprc_cmd_set_obj_irq {char* obj_type; void* obj_id; void* irq_num; int irq_addr; int irq_index; void* irq_val; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,struct fsl_mc_command*) ;
 int FUNC_4 (char*,char*,int) ;

int FUNC_5(struct fsl_mc_io *VAR_1,
       u32 VAR_2,
       u16 VAR_3,
       char *VAR_4,
       int VAR_5,
       u8 VAR_6,
       struct dprc_irq_cfg *VAR_7)
{
 struct fsl_mc_command VAR_8 = { 0 };
 struct dprc_cmd_set_obj_irq *VAR_9;


 VAR_8.header = FUNC_2(VAR_0,
       VAR_2,
       VAR_3);
 VAR_9 = (struct dprc_cmd_set_obj_irq *)VAR_8.params;
 VAR_9->irq_val = FUNC_0(VAR_7->val);
 VAR_9->irq_index = VAR_6;
 VAR_9->irq_addr = FUNC_1(VAR_7->paddr);
 VAR_9->irq_num = FUNC_0(VAR_7->irq_num);
 VAR_9->obj_id = FUNC_0(VAR_5);
 FUNC_4(VAR_9->obj_type, VAR_4, 16);
 VAR_9->obj_type[15] = '\0';


 return FUNC_3(VAR_1, &VAR_8);
}
