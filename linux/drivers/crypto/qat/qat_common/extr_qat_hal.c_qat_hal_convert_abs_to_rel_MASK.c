
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_1(struct icp_qat_fw_loader_handle
          *VAR_2, unsigned char VAR_3,
          unsigned short VAR_4,
          unsigned short *VAR_5,
          unsigned char *VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_1);
 if (VAR_7 & VAR_0) {

  *VAR_5 = VAR_4 & 0x1F;
  *VAR_6 = (VAR_4 >> 0x4) & 0x6;
 } else {

  *VAR_5 = VAR_4 & 0x0F;
  *VAR_6 = (VAR_4 >> 0x4) & 0x7;
 }
 return 0;
}
