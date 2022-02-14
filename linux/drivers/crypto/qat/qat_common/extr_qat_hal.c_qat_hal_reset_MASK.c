
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; } ;
struct TYPE_2__ {unsigned int ae_mask; unsigned int slice_mask; } ;


 unsigned int FUNC_0 (struct icp_qat_fw_loader_handle*,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,int ,unsigned int) ;

void FUNC_2(struct icp_qat_fw_loader_handle *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 |= VAR_3->hal_handle->ae_mask << VAR_1;
 VAR_4 |= VAR_3->hal_handle->slice_mask << VAR_2;
 FUNC_1(VAR_3, VAR_0, VAR_4);
}
