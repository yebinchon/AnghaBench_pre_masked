
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; } ;
struct TYPE_2__ {unsigned char ae_max_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned char) ;
 unsigned int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_2(struct icp_qat_fw_loader_handle *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 unsigned char VAR_6;
 int VAR_7 = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_3->hal_handle->ae_max_num; VAR_6++) {
  VAR_4 = FUNC_1(VAR_3, VAR_6, VAR_2);
  VAR_4 &= 0xffff;

  do {
   VAR_5 = FUNC_1(VAR_3, VAR_6, VAR_2);
   VAR_5 &= 0xffff;
  } while (VAR_7-- && (VAR_5 == VAR_4));

  if (VAR_7 < 0) {
   FUNC_0("QAT: AE%d is inactive!!\n", VAR_6);
   return -VAR_0;
  }
 }

 return 0;
}
