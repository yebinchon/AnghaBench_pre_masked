
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clp_req_rsp_list_pci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct clp_req_rsp_list_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct clp_req_rsp_list_pci*) ;
 int FUNC_2 (struct clp_req_rsp_list_pci*,int *,int ) ;
 int FUNC_3 () ;

int FUNC_4(void)
{
 struct clp_req_rsp_list_pci *VAR_3;
 int VAR_4;

 FUNC_3();

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3, ((void*)0), VAR_2);

 FUNC_1(VAR_3);
 return VAR_4;
}
