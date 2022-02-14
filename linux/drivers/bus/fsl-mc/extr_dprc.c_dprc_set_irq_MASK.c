
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dprc_irq_cfg {int irq_num; int paddr; int val; } ;
struct dprc_cmd_set_irq {void* irq_num; int irq_addr; int irq_index; void* irq_val; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_4(struct fsl_mc_io *VAR_1,
   u32 VAR_2,
   u16 VAR_3,
   u8 VAR_4,
   struct dprc_irq_cfg *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dprc_cmd_set_irq *VAR_7;


 VAR_6.header = FUNC_2(VAR_0,
       VAR_2,
       VAR_3);
 VAR_7 = (struct dprc_cmd_set_irq *)VAR_6.params;
 VAR_7->irq_val = FUNC_0(VAR_5->val);
 VAR_7->irq_index = VAR_4;
 VAR_7->irq_addr = FUNC_1(VAR_5->paddr);
 VAR_7->irq_num = FUNC_0(VAR_5->irq_num);


 return FUNC_3(VAR_1, &VAR_6);
}
