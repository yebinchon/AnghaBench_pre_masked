
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_fw_loader_handle {TYPE_1__* pci_dev; scalar_t__ fw_auth; } ;
struct icp_qat_fw_auth_desc {int dummy; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,struct icp_qat_fw_auth_desc*) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,void*,int,struct icp_qat_fw_auth_desc**) ;
 int FUNC_3 (struct icp_qat_fw_loader_handle*,struct icp_qat_fw_auth_desc**) ;
 int FUNC_4 (struct icp_qat_fw_loader_handle*,int ,void*,int) ;

int FUNC_5(struct icp_qat_fw_loader_handle *VAR_2,
         void *VAR_3, int VAR_4)
{
 struct icp_qat_fw_auth_desc *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 if (VAR_2->fw_auth) {
  if (!FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_5))
   VAR_6 = FUNC_1(VAR_2, VAR_5);
  FUNC_3(VAR_2, &VAR_5);
 } else {
  if (VAR_2->pci_dev->device == VAR_0) {
   FUNC_0("QAT: C3XXX doesn't support unsigned MMP\n");
   return -VAR_1;
  }
  FUNC_4(VAR_2, 0, VAR_3, VAR_4);
 }
 return VAR_6;
}
