
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_uclo_objhandle {unsigned int uimage_num; TYPE_1__* ae_uimage; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_uclo_objhandle* obj_handle; } ;
struct TYPE_2__ {int img_ptr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct icp_qat_fw_loader_handle*) ;
 scalar_t__ FUNC_1 (struct icp_qat_fw_loader_handle*,TYPE_1__*) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,int ) ;

__attribute__((used)) static int FUNC_3(struct icp_qat_fw_loader_handle *VAR_1)
{
 struct icp_qat_uclo_objhandle *VAR_2 = VAR_1->obj_handle;
 unsigned int VAR_3;

 if (FUNC_0(VAR_1))
  return -VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_2->uimage_num; VAR_3++) {
  if (!VAR_2->ae_uimage[VAR_3].img_ptr)
   return -VAR_0;
  if (FUNC_1(VAR_1, &VAR_2->ae_uimage[VAR_3]))
   return -VAR_0;
  FUNC_2(VAR_1,
     VAR_2->ae_uimage[VAR_3].img_ptr);
 }
 return 0;
}
