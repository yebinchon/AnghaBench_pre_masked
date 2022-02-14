
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;
typedef enum icp_qat_uof_regtype { ____Placeholder_icp_qat_uof_regtype } icp_qat_uof_regtype ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int,unsigned short,unsigned int) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,unsigned short,unsigned int) ;
 int FUNC_3 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int,unsigned short,unsigned int) ;
 int FUNC_4 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int,unsigned short,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct icp_qat_fw_loader_handle *VAR_1,
        unsigned char VAR_2, unsigned char VAR_3,
        enum icp_qat_uof_regtype VAR_4,
        unsigned short VAR_5, unsigned int VAR_6)
{
 switch (VAR_4) {
 case 138:
 case 136:
  VAR_3 = 0;

 case 137:
 case 135:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6);
 case 133:
 case 144:
 case 132:
 case 143:
  VAR_3 = 0;

 case 130:
 case 141:
 case 131:
 case 142:
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6);
 case 129:
 case 140:
  VAR_3 = 0;

 case 128:
 case 139:
  return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6);
 case 134:
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
 default:
  FUNC_0("QAT: UOF uses not supported reg type 0x%x\n", VAR_4);
  return -VAR_0;
 }
 return 0;
}
