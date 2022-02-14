
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ entry_num; } ;
struct icp_qat_uclo_objhandle {int global_inited; TYPE_4__* ae_data; TYPE_1__ init_mem_tab; } ;
struct icp_qat_fw_loader_handle {TYPE_2__* hal_handle; struct icp_qat_uclo_objhandle* obj_handle; } ;
struct TYPE_8__ {unsigned int slice_num; TYPE_3__* ae_slices; } ;
struct TYPE_7__ {int encap_image; } ;
struct TYPE_6__ {unsigned int ae_max_num; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct icp_qat_fw_loader_handle*) ;
 scalar_t__ FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct icp_qat_fw_loader_handle *VAR_1)
{
 struct icp_qat_uclo_objhandle *VAR_2 = VAR_1->obj_handle;
 unsigned int VAR_3, VAR_4;

 if (VAR_2->global_inited)
  return 0;
 if (VAR_2->init_mem_tab.entry_num) {
  if (FUNC_1(VAR_1)) {
   FUNC_0("QAT: initialize memory failed\n");
   return -VAR_0;
  }
 }
 for (VAR_4 = 0; VAR_4 < VAR_1->hal_handle->ae_max_num; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < VAR_2->ae_data[VAR_4].slice_num; VAR_3++) {
   if (!VAR_2->ae_data[VAR_4].ae_slices[VAR_3].encap_image)
    continue;
   if (FUNC_2(VAR_1, VAR_4,
        VAR_2->ae_data[VAR_4].
        ae_slices[VAR_3].encap_image))
    return -VAR_0;
  }
 }
 VAR_2->global_inited = 1;
 return 0;
}
