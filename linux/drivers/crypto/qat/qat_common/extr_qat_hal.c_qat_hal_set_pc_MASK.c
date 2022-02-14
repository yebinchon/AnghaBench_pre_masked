
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; } ;
struct TYPE_2__ {unsigned int upc_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,int ,unsigned int) ;

void FUNC_1(struct icp_qat_fw_loader_handle *VAR_1,
      unsigned char VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0,
       VAR_1->hal_handle->upc_mask & VAR_4);
}
