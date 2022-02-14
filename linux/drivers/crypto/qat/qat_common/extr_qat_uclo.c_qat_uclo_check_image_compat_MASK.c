
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_objtable {scalar_t__ entry_num; } ;
struct icp_qat_uof_image {int numpages; int ae_mode; } ;
struct icp_qat_uof_encap_obj {scalar_t__ beg_uof; } ;
struct icp_qat_uof_code_page {scalar_t__ neigh_reg_tab_offset; scalar_t__ imp_expr_tab_offset; scalar_t__ imp_var_tab_offset; scalar_t__ uc_var_tab_offset; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static unsigned int
FUNC_3(struct icp_qat_uof_encap_obj *VAR_2,
       struct icp_qat_uof_image *VAR_3)
{
 struct icp_qat_uof_objtable *VAR_4, *VAR_5, *VAR_6;
 struct icp_qat_uof_objtable *VAR_7;
 struct icp_qat_uof_code_page *VAR_8;

 VAR_8 = (struct icp_qat_uof_code_page *)
   ((char *)VAR_3 + sizeof(struct icp_qat_uof_image));
 VAR_4 = (struct icp_qat_uof_objtable *)(VAR_2->beg_uof +
       VAR_8->uc_var_tab_offset);
 VAR_5 = (struct icp_qat_uof_objtable *)(VAR_2->beg_uof +
        VAR_8->imp_var_tab_offset);
 VAR_6 = (struct icp_qat_uof_objtable *)
         (VAR_2->beg_uof +
         VAR_8->imp_expr_tab_offset);
 if (VAR_4->entry_num || VAR_5->entry_num ||
     VAR_6->entry_num) {
  FUNC_2("QAT: UOF can't contain imported variable to be parsed\n");
  return -VAR_1;
 }
 VAR_7 = (struct icp_qat_uof_objtable *)
   (VAR_2->beg_uof +
   VAR_8->neigh_reg_tab_offset);
 if (VAR_7->entry_num) {
  FUNC_2("QAT: UOF can't contain shared control store feature\n");
  return -VAR_1;
 }
 if (VAR_3->numpages > 1) {
  FUNC_2("QAT: UOF can't contain multiple pages\n");
  return -VAR_1;
 }
 if (FUNC_0(VAR_3->ae_mode)) {
  FUNC_2("QAT: UOF can't use shared control store feature\n");
  return -VAR_0;
 }
 if (FUNC_1(VAR_3->ae_mode)) {
  FUNC_2("QAT: UOF can't use reloadable feature\n");
  return -VAR_0;
 }
 return 0;
}
