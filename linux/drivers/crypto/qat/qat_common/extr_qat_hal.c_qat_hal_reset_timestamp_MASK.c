
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; } ;
struct TYPE_2__ {unsigned char ae_max_num; } ;


 unsigned int FUNC_0 (struct icp_qat_fw_loader_handle*,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,int ,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct icp_qat_fw_loader_handle *VAR_4)
{
 unsigned int VAR_5;
 unsigned char VAR_6;


 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5 & VAR_0)
  FUNC_1(VAR_4, VAR_1, VAR_5 &
       (~VAR_0));

 for (VAR_6 = 0; VAR_6 < VAR_4->hal_handle->ae_max_num; VAR_6++) {
  FUNC_2(VAR_4, VAR_6, VAR_3, 0);
  FUNC_2(VAR_4, VAR_6, VAR_2, 0);
 }

 FUNC_1(VAR_4, VAR_1, VAR_5 | VAR_0);
}
