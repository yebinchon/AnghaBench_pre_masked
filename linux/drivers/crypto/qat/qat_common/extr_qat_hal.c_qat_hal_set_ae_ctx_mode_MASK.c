
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,unsigned char) ;
 unsigned int FUNC_3 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 int FUNC_4 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int) ;

int FUNC_5(struct icp_qat_fw_loader_handle *VAR_4,
       unsigned char VAR_5, unsigned char VAR_6)
{
 unsigned int VAR_7, VAR_8;

 if ((VAR_6 != 4) && (VAR_6 != 8)) {
  FUNC_2("QAT: bad ctx mode=%d\n", VAR_6);
  return -VAR_2;
 }


 VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_1);
 VAR_7 = VAR_3 & VAR_7;
 VAR_8 = (VAR_6 == 4) ?
  FUNC_1(VAR_7, VAR_0) :
  FUNC_0(VAR_7, VAR_0);
 FUNC_4(VAR_4, VAR_5, VAR_1, VAR_8);
 return 0;
}
