
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;
typedef enum icp_qat_uof_regtype { ____Placeholder_icp_qat_uof_regtype } icp_qat_uof_regtype ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned short,unsigned short*,unsigned char*) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int,unsigned short,unsigned int) ;
 int FUNC_3 (unsigned char,unsigned long*) ;

int FUNC_4(struct icp_qat_fw_loader_handle *VAR_3,
    unsigned char VAR_4, unsigned char VAR_5,
    enum icp_qat_uof_regtype VAR_6,
    unsigned short VAR_7, unsigned int VAR_8)
{
 int VAR_9 = 0;
 unsigned short VAR_10;
 unsigned char VAR_11 = 0;
 enum icp_qat_uof_regtype VAR_12;

 if (VAR_7 >= VAR_2)
  return -VAR_0;

 do {
  if (VAR_5 == 0) {
   FUNC_1(VAR_3, VAR_4, VAR_7, &VAR_10,
         &VAR_11);
   VAR_12 = VAR_6 - 3;
  } else {
   VAR_10 = VAR_7;
   VAR_12 = VAR_6;
   if (!FUNC_3(VAR_11, (unsigned long *)&VAR_5))
    continue;
  }
  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_11, VAR_12, VAR_10,
            VAR_8);
  if (VAR_9) {
   FUNC_0("QAT: write rd xfer fail\n");
   return -VAR_0;
  }
 } while (VAR_5 && (VAR_11++ < VAR_1));

 return 0;
}
