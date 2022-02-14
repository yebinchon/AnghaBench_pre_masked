
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct icp_qat_fw_loader_handle *VAR_3,
        unsigned char VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_0;
 int VAR_7;

 do {
  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5);
  if (!(FUNC_0(VAR_3, VAR_4, VAR_2) & VAR_1))
   return VAR_7;
 } while (VAR_6--);

 FUNC_1("QAT: Read CSR timeout\n");
 return 0;
}
