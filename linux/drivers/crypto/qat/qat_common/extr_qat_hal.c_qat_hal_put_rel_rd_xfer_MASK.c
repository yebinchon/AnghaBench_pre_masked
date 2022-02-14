
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;
typedef enum icp_qat_uof_regtype { ____Placeholder_icp_qat_uof_regtype } icp_qat_uof_regtype ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,unsigned int) ;
 int FUNC_1 (char*,unsigned char) ;
 unsigned int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_3(struct icp_qat_fw_loader_handle *VAR_3,
       unsigned char VAR_4, unsigned char VAR_5,
       enum icp_qat_uof_regtype VAR_6,
       unsigned short VAR_7, unsigned int VAR_8)
{
 int VAR_9 = 0;
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned short VAR_12;
 unsigned short VAR_13 = 0x10;

 VAR_9 = VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_1);
 if (VAR_0 & VAR_11) {
  if (VAR_5 & 0x1) {
   FUNC_1("QAT: bad 4-ctx mode,ctx=0x%x\n", VAR_5);
   return -VAR_2;
  }
  VAR_12 = 0x1f;
  VAR_13 = 0x20;
 } else {
  VAR_12 = 0x0f;
 }
 if (VAR_7 & ~VAR_12)
  return -VAR_2;
 VAR_10 = VAR_7 + (VAR_5 << 0x5);
 switch (VAR_6) {
 case 129:
 case 128:
  FUNC_0(VAR_3, VAR_4, VAR_10, VAR_8);
  break;
 case 131:
 case 130:
  FUNC_0(VAR_3, VAR_4, (VAR_10 + VAR_13), VAR_8);
  break;
 default:
  VAR_9 = -VAR_2;
  break;
 }
 return VAR_9;
}
