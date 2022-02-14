
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct icp_qat_uclo_objhandle {unsigned int uimage_num; struct icp_qat_uclo_objhandle* obj_buf; struct icp_qat_uclo_objhandle* obj_hdr; int * ae_data; TYPE_1__* ae_uimage; struct icp_qat_uclo_objhandle* uword_buf; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_uclo_objhandle* obj_handle; TYPE_2__* hal_handle; scalar_t__ sobj_handle; } ;
struct TYPE_4__ {unsigned int ae_max_num; } ;
struct TYPE_3__ {struct icp_qat_uclo_objhandle* page; } ;


 int FUNC_0 (struct icp_qat_uclo_objhandle*) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct icp_qat_fw_loader_handle *VAR_0)
{
 struct icp_qat_uclo_objhandle *VAR_1 = VAR_0->obj_handle;
 unsigned int VAR_2;

 if (VAR_0->sobj_handle)
  FUNC_1(VAR_0);
 if (!VAR_1)
  return;

 FUNC_0(VAR_1->uword_buf);
 for (VAR_2 = 0; VAR_2 < VAR_1->uimage_num; VAR_2++)
  FUNC_0(VAR_1->ae_uimage[VAR_2].page);

 for (VAR_2 = 0; VAR_2 < VAR_0->hal_handle->ae_max_num; VAR_2++)
  FUNC_2(&VAR_1->ae_data[VAR_2]);

 FUNC_0(VAR_1->obj_hdr);
 FUNC_0(VAR_1->obj_buf);
 FUNC_0(VAR_1);
 VAR_0->obj_handle = ((void*)0);
}
