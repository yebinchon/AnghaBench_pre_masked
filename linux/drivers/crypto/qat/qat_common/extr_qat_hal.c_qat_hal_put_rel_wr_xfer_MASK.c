
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct icp_qat_fw_loader_handle {int dummy; } ;
typedef enum icp_qat_uof_regtype { ____Placeholder_icp_qat_uof_regtype } icp_qat_uof_regtype ;


 int FUNC_0 (int*) ;
 unsigned short VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,unsigned short) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int*,int const,int const,unsigned short const,int *) ;
 unsigned short FUNC_3 (int,unsigned short const) ;
 unsigned int FUNC_4 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 int FUNC_5 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int,unsigned short const,unsigned int*) ;
 int FUNC_6 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int,unsigned short const,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct icp_qat_fw_loader_handle *VAR_6,
       unsigned char VAR_7, unsigned char VAR_8,
       enum icp_qat_uof_regtype VAR_9,
       unsigned short VAR_10, unsigned int VAR_11)
{
 unsigned int VAR_12, VAR_13;
 unsigned short VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
     VAR_19;
 unsigned short VAR_20;
 int VAR_21 = 0;
 uint64_t VAR_22[] = {
  0x0F440000000ull,
  0x0F040000000ull,
  0x0A000000000ull,
  0x0F0000C0300ull,
  0x0E000010000ull
 };
 const int VAR_23 = FUNC_0(VAR_22), VAR_24 = 1;
 const unsigned short VAR_25 = 0, VAR_26 = VAR_23 * 0x5;

 VAR_13 = FUNC_4(VAR_6, VAR_7, VAR_2);
 if (VAR_1 & VAR_13) {
  if (VAR_8 & 0x1) {
   FUNC_1("QAT: 4-ctx mode,ctx=0x%x\n", VAR_8);
   return -VAR_3;
  }
  VAR_20 = (unsigned short)~0x1f;
 } else {
  VAR_20 = (unsigned short)~0xf;
 }
 if (VAR_10 & VAR_20)
  return -VAR_3;
 VAR_17 = FUNC_3(VAR_9, VAR_10);
 if (VAR_17 == VAR_0) {
  FUNC_1("QAT: bad xfrAddr=0x%x\n", VAR_17);
  return -VAR_3;
 }
 FUNC_5(VAR_6, VAR_7, VAR_8, VAR_4, VAR_25, &VAR_12);
 VAR_16 = FUNC_3(VAR_4, VAR_25);
 VAR_19 = 0xffff & VAR_11;
 VAR_18 = 0xffff & (VAR_11 >> 0x10);
 VAR_14 = FUNC_3(VAR_5,
       (unsigned short)(0xff & VAR_18));
 VAR_15 = FUNC_3(VAR_5,
        (unsigned short)(0xff & VAR_19));
 VAR_22[0] = VAR_22[0x0] | ((VAR_18 >> 8) << 20) |
     ((VAR_16 & 0x3ff) << 10) | (VAR_14 & 0x3ff);
 VAR_22[1] = VAR_22[0x1] | ((VAR_19 >> 8) << 20) |
     ((VAR_16 & 0x3ff) << 10) | (VAR_15 & 0x3ff);
 VAR_22[0x2] = VAR_22[0x2] |
     ((VAR_17 & 0x3ff) << 20) | ((VAR_16 & 0x3ff) << 10);
 VAR_21 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_22, VAR_23,
      VAR_24, VAR_26, ((void*)0));
 FUNC_6(VAR_6, VAR_7, VAR_8, VAR_4, VAR_25, VAR_12);
 return VAR_21;
}
