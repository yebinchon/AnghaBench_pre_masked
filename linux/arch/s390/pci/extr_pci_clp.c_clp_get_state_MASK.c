
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clp_state_data {int state; int member_1; int member_0; } ;
struct clp_req_rsp_list_pci {int dummy; } ;
typedef enum zpci_state { ____Placeholder_zpci_state } zpci_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct clp_req_rsp_list_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct clp_req_rsp_list_pci*) ;
 int FUNC_2 (struct clp_req_rsp_list_pci*,struct clp_state_data*,int ) ;

int FUNC_3(u32 VAR_4, enum zpci_state *VAR_5)
{
 struct clp_req_rsp_list_pci *VAR_6;
 struct clp_state_data VAR_7 = {VAR_4, VAR_2};
 int VAR_8;

 VAR_6 = FUNC_0(VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_6, &VAR_7, VAR_3);
 if (!VAR_8)
  *VAR_5 = VAR_7.state;

 FUNC_1(VAR_6);
 return VAR_8;
}
