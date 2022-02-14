
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct icp_qat_uclo_objhandle {int uimage_num; TYPE_3__* ae_uimage; } ;
struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; struct icp_qat_uclo_objhandle* obj_handle; } ;
struct TYPE_6__ {TYPE_2__* img_ptr; } ;
struct TYPE_5__ {int ae_assigned; } ;
struct TYPE_4__ {int ae_mask; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct icp_qat_uclo_objhandle*,int,int) ;
 int FUNC_2 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct icp_qat_fw_loader_handle *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5 = 0;
 struct icp_qat_uclo_objhandle *VAR_6 = VAR_1->obj_handle;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!FUNC_2(VAR_4,
         (unsigned long *)&VAR_1->hal_handle->ae_mask))
   continue;
  for (VAR_3 = 0; VAR_3 < VAR_6->uimage_num; VAR_3++) {
   if (!FUNC_2(VAR_4, (unsigned long *)
   &VAR_6->ae_uimage[VAR_3].img_ptr->ae_assigned))
    continue;
   VAR_5 = 1;
   if (FUNC_1(VAR_6, VAR_4, VAR_3))
    return -VAR_0;
  }
 }
 if (!VAR_5) {
  FUNC_0("QAT: uimage uses AE not set\n");
  return -VAR_0;
 }
 return 0;
}
