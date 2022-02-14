
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,unsigned int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct icp_qat_fw_loader_handle *VAR_4,
        unsigned char VAR_5, unsigned int VAR_6,
        unsigned int VAR_7)
{
 unsigned int VAR_8 = VAR_0;

 do {
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
  if (!(FUNC_0(VAR_4, VAR_5, VAR_3) & VAR_2))
   return 0;
 } while (VAR_8--);

 FUNC_2("QAT: Write CSR Timeout\n");
 return -VAR_1;
}
