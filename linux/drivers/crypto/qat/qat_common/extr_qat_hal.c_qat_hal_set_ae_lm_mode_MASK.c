
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;
typedef enum icp_qat_uof_regtype { ____Placeholder_icp_qat_uof_regtype } icp_qat_uof_regtype ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_2 ;
 int VAR_3 ;


 unsigned int VAR_4 ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,int) ;
 unsigned int FUNC_3 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 int FUNC_4 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int) ;

int FUNC_5(struct icp_qat_fw_loader_handle *VAR_5,
      unsigned char VAR_6, enum icp_qat_uof_regtype VAR_7,
      unsigned char VAR_8)
{
 unsigned int VAR_9, VAR_10;

 VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_2);
 VAR_9 &= VAR_4;
 switch (VAR_7) {
 case 129:
  VAR_10 = (VAR_8) ?
   FUNC_1(VAR_9, VAR_0) :
   FUNC_0(VAR_9, VAR_0);
  break;
 case 128:
  VAR_10 = (VAR_8) ?
   FUNC_1(VAR_9, VAR_1) :
   FUNC_0(VAR_9, VAR_1);
  break;
 default:
  FUNC_2("QAT: lmType = 0x%x\n", VAR_7);
  return -VAR_3;
 }

 if (VAR_10 != VAR_9)
  FUNC_4(VAR_5, VAR_6, VAR_2, VAR_10);
 return 0;
}
