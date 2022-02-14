
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short uint64_t ;
struct icp_qat_fw_loader_handle {int dummy; } ;
typedef enum icp_qat_uof_regtype { ____Placeholder_icp_qat_uof_regtype } icp_qat_uof_regtype ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,unsigned short) ;
 unsigned short FUNC_1 (int,unsigned short) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,int ,int,unsigned short*) ;
 unsigned int FUNC_3 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 unsigned short FUNC_4 (unsigned short) ;
 int FUNC_5 (struct icp_qat_fw_loader_handle*,unsigned char,int,int ) ;
 int FUNC_6 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int) ;
 int FUNC_7 (struct icp_qat_fw_loader_handle*,unsigned char,int ,int,unsigned short*) ;

__attribute__((used)) static int FUNC_8(struct icp_qat_fw_loader_handle *VAR_12,
         unsigned char VAR_13, unsigned char VAR_14,
         enum icp_qat_uof_regtype VAR_15,
         unsigned short VAR_16, unsigned int *VAR_17)
{
 unsigned int VAR_18, VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22, VAR_23, VAR_24;
 unsigned short VAR_25;
 int VAR_26 = 0;
 uint64_t VAR_27, VAR_28;

 VAR_25 = FUNC_1(VAR_15, VAR_16);
 if (VAR_25 == VAR_3) {
  FUNC_0("QAT: bad regaddr=0x%x\n", VAR_25);
  return -VAR_6;
 }
 switch (VAR_15) {
 case 128:
  VAR_27 = 0xA070000000ull | (VAR_25 & 0x3ff);
  break;
 default:
  VAR_27 = (uint64_t)0xA030000000ull | ((VAR_25 & 0x3ff) << 10);
  break;
 }
 VAR_18 = FUNC_3(VAR_12, VAR_13, VAR_1);
 VAR_22 = FUNC_3(VAR_12, VAR_13, VAR_4);
 VAR_24 = FUNC_3(VAR_12, VAR_13, VAR_5);
 VAR_24 &= VAR_7;
 if (VAR_14 != (VAR_18 & VAR_0))
  FUNC_6(VAR_12, VAR_13, VAR_1,
      VAR_14 & VAR_0);
 FUNC_2(VAR_12, VAR_13, 0, 1, &VAR_28);
 FUNC_6(VAR_12, VAR_13, VAR_5, VAR_24);
 VAR_23 = FUNC_3(VAR_12, VAR_13, VAR_9);
 VAR_19 = VAR_8;
 FUNC_6(VAR_12, VAR_13, VAR_9, VAR_19);
 VAR_27 = FUNC_4(VAR_27);
 VAR_20 = (unsigned int)(VAR_27 & 0xffffffff);
 VAR_21 = (unsigned int)(VAR_27 >> 0x20);
 FUNC_6(VAR_12, VAR_13, VAR_10, VAR_20);
 FUNC_6(VAR_12, VAR_13, VAR_11, VAR_21);
 FUNC_6(VAR_12, VAR_13, VAR_9, VAR_19);

 FUNC_5(VAR_12, VAR_13, 0x8, 0);





 *VAR_17 = FUNC_3(VAR_12, VAR_13, VAR_2);
 FUNC_6(VAR_12, VAR_13, VAR_9, VAR_23);
 FUNC_7(VAR_12, VAR_13, 0, 1, &VAR_28);
 if (VAR_14 != (VAR_18 & VAR_0))
  FUNC_6(VAR_12, VAR_13, VAR_1,
      VAR_18 & VAR_0);
 FUNC_6(VAR_12, VAR_13, VAR_4, VAR_22);
 FUNC_6(VAR_12, VAR_13, VAR_5, VAR_24);

 return VAR_26;
}
