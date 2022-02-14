
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 int FUNC_3 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int) ;

int FUNC_4(struct icp_qat_fw_loader_handle *VAR_3,
      unsigned char VAR_4, unsigned char VAR_5)
{
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_1);
 VAR_6 &= VAR_2;

 VAR_7 = (VAR_5) ?
  FUNC_1(VAR_6, VAR_0) :
  FUNC_0(VAR_6, VAR_0);

 if (VAR_7 != VAR_6)
  FUNC_3(VAR_3, VAR_4, VAR_1, VAR_7);

 return 0;
}
