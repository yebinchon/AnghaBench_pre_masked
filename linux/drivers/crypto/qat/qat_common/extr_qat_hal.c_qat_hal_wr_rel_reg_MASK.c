
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct icp_qat_fw_loader_handle {int dummy; } ;
typedef enum icp_qat_uof_regtype { ____Placeholder_icp_qat_uof_regtype } icp_qat_uof_regtype ;


 int FUNC_0 (int*) ;
 unsigned short VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (char*,unsigned short) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int*,int const,int const,int const,int *) ;
 unsigned short FUNC_3 (int,unsigned short) ;

__attribute__((used)) static int FUNC_4(struct icp_qat_fw_loader_handle *VAR_3,
         unsigned char VAR_4, unsigned char VAR_5,
         enum icp_qat_uof_regtype VAR_6,
         unsigned short VAR_7, unsigned int VAR_8)
{
 unsigned short VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 uint64_t VAR_14[] = {
  0x0F440000000ull,
  0x0F040000000ull,
  0x0F0000C0300ull,
  0x0E000010000ull
 };
 const int VAR_15 = FUNC_0(VAR_14), VAR_16 = 1;
 const int VAR_17 = 0, VAR_18 = 1;

 VAR_11 = FUNC_3(VAR_6, VAR_7);
 if (VAR_11 == VAR_0) {
  FUNC_1("QAT: bad destAddr=0x%x\n", VAR_11);
  return -VAR_1;
 }

 VAR_13 = 0xffff & VAR_8;
 VAR_12 = 0xffff & (VAR_8 >> 0x10);
 VAR_9 = FUNC_3(VAR_2, (unsigned short)
       (0xff & VAR_12));
 VAR_10 = FUNC_3(VAR_2, (unsigned short)
        (0xff & VAR_13));
 switch (VAR_6) {
 case 128:
  VAR_14[VAR_17] = VAR_14[VAR_17] | ((VAR_12 >> 8) << 20) |
      ((VAR_9 & 0x3ff) << 10) | (VAR_11 & 0x3ff);
  VAR_14[VAR_18] = VAR_14[VAR_18] | ((VAR_13 >> 8) << 20) |
      ((VAR_10 & 0x3ff) << 10) | (VAR_11 & 0x3ff);
  break;
 default:
  VAR_14[VAR_17] = VAR_14[VAR_17] | ((VAR_12 >> 8) << 20) |
      ((VAR_11 & 0x3ff) << 10) | (VAR_9 & 0x3ff);

  VAR_14[VAR_18] = VAR_14[VAR_18] | ((VAR_13 >> 8) << 20) |
      ((VAR_11 & 0x3ff) << 10) | (VAR_10 & 0x3ff);
  break;
 }

 return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_14, VAR_15,
           VAR_16, VAR_15 * 0x5, ((void*)0));
}
