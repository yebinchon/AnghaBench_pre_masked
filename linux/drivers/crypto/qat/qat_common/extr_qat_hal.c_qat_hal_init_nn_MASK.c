
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,unsigned short,unsigned int) ;
 int FUNC_2 (unsigned char,unsigned long*) ;

int FUNC_3(struct icp_qat_fw_loader_handle *VAR_2,
      unsigned char VAR_3, unsigned char VAR_4,
      unsigned short VAR_5, unsigned int VAR_6)
{
 int VAR_7 = 0;
 unsigned char VAR_8;

 if (VAR_4 == 0)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (!FUNC_2(VAR_8, (unsigned long *)&VAR_4))
   continue;
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_8, VAR_5, VAR_6);
  if (VAR_7) {
   FUNC_0("QAT: write neigh error\n");
   return -VAR_0;
  }
 }

 return 0;
}
