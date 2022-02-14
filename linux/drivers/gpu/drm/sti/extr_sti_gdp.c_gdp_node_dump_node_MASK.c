
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_gdp_node {struct sti_gdp_node* gam_gdp_cml; struct sti_gdp_node* gam_gdp_ppt; struct sti_gdp_node* gam_gdp_key2; struct sti_gdp_node* gam_gdp_key1; struct sti_gdp_node* gam_gdp_nvn; struct sti_gdp_node* gam_gdp_size; struct sti_gdp_node* gam_gdp_pmp; struct sti_gdp_node* gam_gdp_pml; struct sti_gdp_node* gam_gdp_vps; struct sti_gdp_node* gam_gdp_vpo; struct sti_gdp_node* gam_gdp_agc; struct sti_gdp_node* gam_gdp_ctl; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,struct sti_gdp_node*) ;
 int FUNC_1 (struct seq_file*,struct sti_gdp_node*) ;
 int FUNC_2 (struct seq_file*,struct sti_gdp_node*) ;
 int FUNC_3 (struct seq_file*,struct sti_gdp_node*) ;
 int FUNC_4 (struct seq_file*,struct sti_gdp_node*) ;
 int FUNC_5 (struct seq_file*,char*,struct sti_gdp_node*) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_0, struct sti_gdp_node *VAR_1)
{
 FUNC_5(VAR_0, "\t@:0x%p", VAR_1);
 FUNC_5(VAR_0, "\n\tCTL  0x%08X", VAR_1->gam_gdp_ctl);
 FUNC_0(VAR_0, VAR_1->gam_gdp_ctl);
 FUNC_5(VAR_0, "\n\tAGC  0x%08X", VAR_1->gam_gdp_agc);
 FUNC_5(VAR_0, "\n\tVPO  0x%08X", VAR_1->gam_gdp_vpo);
 FUNC_3(VAR_0, VAR_1->gam_gdp_vpo);
 FUNC_5(VAR_0, "\n\tVPS  0x%08X", VAR_1->gam_gdp_vps);
 FUNC_4(VAR_0, VAR_1->gam_gdp_vps);
 FUNC_5(VAR_0, "\n\tPML  0x%08X", VAR_1->gam_gdp_pml);
 FUNC_5(VAR_0, "\n\tPMP  0x%08X", VAR_1->gam_gdp_pmp);
 FUNC_5(VAR_0, "\n\tSIZE 0x%08X", VAR_1->gam_gdp_size);
 FUNC_2(VAR_0, VAR_1->gam_gdp_size);
 FUNC_5(VAR_0, "\n\tNVN  0x%08X", VAR_1->gam_gdp_nvn);
 FUNC_5(VAR_0, "\n\tKEY1 0x%08X", VAR_1->gam_gdp_key1);
 FUNC_5(VAR_0, "\n\tKEY2 0x%08X", VAR_1->gam_gdp_key2);
 FUNC_5(VAR_0, "\n\tPPT  0x%08X", VAR_1->gam_gdp_ppt);
 FUNC_1(VAR_0, VAR_1->gam_gdp_ppt);
 FUNC_5(VAR_0, "\n\tCML  0x%08X\n", VAR_1->gam_gdp_cml);
}
