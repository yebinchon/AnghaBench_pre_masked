
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {scalar_t__ fw_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct icp_qat_fw_loader_handle*,int ) ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned char,unsigned int) ;
 int FUNC_4 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int) ;
 int FUNC_5 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,int) ;

void FUNC_6(struct icp_qat_fw_loader_handle *VAR_7, unsigned char VAR_8,
     unsigned int VAR_9)
{
 int VAR_10 = 0;
 unsigned int VAR_11 = 0;

 if (VAR_7->fw_auth) {
  FUNC_1(VAR_7, VAR_0, VAR_1);
  do {
   FUNC_2(VAR_5);
   VAR_11 = FUNC_0(VAR_7, VAR_2);
   if (((VAR_11 >> VAR_3) & 0x1))
    return;
  } while (VAR_10++ < VAR_4);
  FUNC_3("QAT: start error (AE 0x%x FCU_STS = 0x%x)\n", VAR_8,
         VAR_11);
 } else {
  FUNC_5(VAR_7, VAR_8, (~VAR_9) &
     VAR_6, 0x10000);
  FUNC_4(VAR_7, VAR_8, VAR_9);
 }
}
