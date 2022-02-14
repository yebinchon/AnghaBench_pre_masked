
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; } ;
struct TYPE_2__ {unsigned char ae_max_num; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,int ,int ,unsigned short,int ) ;

__attribute__((used)) static void FUNC_1(struct icp_qat_fw_loader_handle *VAR_3)
{
 unsigned char VAR_4;
 unsigned short VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->hal_handle->ae_max_num; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   FUNC_0(VAR_3, VAR_4, 0, VAR_2,
          VAR_5, 0);
   FUNC_0(VAR_3, VAR_4, 0, VAR_0,
          VAR_5, 0);
  }
 }
}
