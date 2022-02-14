
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_initmem {int dummy; } ;
struct icp_qat_uclo_objhandle {int * lm_init_tab; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_uclo_objhandle* obj_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct icp_qat_fw_loader_handle*,struct icp_qat_uof_initmem*,unsigned int,int *) ;
 scalar_t__ FUNC_1 (struct icp_qat_fw_loader_handle*,struct icp_qat_uof_initmem*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct icp_qat_fw_loader_handle *VAR_2,
      struct icp_qat_uof_initmem *VAR_3)
{
 struct icp_qat_uclo_objhandle *VAR_4 = VAR_2->obj_handle;
 unsigned int VAR_5;

 if (FUNC_1(VAR_2, VAR_3,
          VAR_1, &VAR_5))
  return -VAR_0;
 if (FUNC_0(VAR_2, VAR_3, VAR_5,
         &VAR_4->lm_init_tab[VAR_5]))
  return -VAR_0;
 return 0;
}
