
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct icp_qat_uof_memvar_attr {int dummy; } ;
struct icp_qat_uof_initmem {int val_attr_num; scalar_t__ num_in_bytes; } ;
struct TYPE_3__ {int entry_num; struct icp_qat_uof_initmem* init_mem; } ;
struct icp_qat_uclo_objhandle {int * umem_init_tab; int * lm_init_tab; TYPE_1__ init_mem_tab; } ;
struct icp_qat_fw_loader_handle {TYPE_2__* hal_handle; struct icp_qat_uclo_objhandle* obj_handle; } ;
struct TYPE_4__ {int ae_max_num; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct icp_qat_fw_loader_handle*,int,int ) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,int,int ) ;
 int FUNC_3 (struct icp_qat_fw_loader_handle*,int *) ;
 scalar_t__ FUNC_4 (struct icp_qat_fw_loader_handle*,struct icp_qat_uof_initmem*) ;

__attribute__((used)) static int FUNC_5(struct icp_qat_fw_loader_handle *VAR_1)
{
 int VAR_2, VAR_3;
 struct icp_qat_uclo_objhandle *VAR_4 = VAR_1->obj_handle;
 struct icp_qat_uof_initmem *VAR_5 = VAR_4->init_mem_tab.init_mem;

 for (VAR_2 = 0; VAR_2 < VAR_4->init_mem_tab.entry_num; VAR_2++) {
  if (VAR_5->num_in_bytes) {
   if (FUNC_4(VAR_1, VAR_5))
    return -VAR_0;
  }
  VAR_5 = (struct icp_qat_uof_initmem *)((uintptr_t)(
   (uintptr_t)VAR_5 +
   sizeof(struct icp_qat_uof_initmem)) +
   (sizeof(struct icp_qat_uof_memvar_attr) *
   VAR_5->val_attr_num));
 }
 for (VAR_3 = 0; VAR_3 < VAR_1->hal_handle->ae_max_num; VAR_3++) {
  if (FUNC_1(VAR_1, VAR_3,
     VAR_4->lm_init_tab[VAR_3])) {
   FUNC_0("QAT: fail to batch init lmem for AE %d\n", VAR_3);
   return -VAR_0;
  }
  FUNC_3(VAR_1,
       &VAR_4->lm_init_tab[VAR_3]);
  FUNC_2(VAR_1, VAR_3,
           VAR_4->umem_init_tab[VAR_3]);
  FUNC_3(VAR_1,
       &VAR_4->
       umem_init_tab[VAR_3]);
 }
 return 0;
}
