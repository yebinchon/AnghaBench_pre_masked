
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {scalar_t__ fw_auth; } ;


 int FUNC_0 (struct icp_qat_fw_loader_handle*) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*) ;

int FUNC_2(struct icp_qat_fw_loader_handle *VAR_0)
{
 return (VAR_0->fw_auth) ? FUNC_0(VAR_0) :
       FUNC_1(VAR_0);
}
