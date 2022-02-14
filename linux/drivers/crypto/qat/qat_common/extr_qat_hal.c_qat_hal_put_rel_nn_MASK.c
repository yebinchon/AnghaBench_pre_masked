
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int ,unsigned short,unsigned int) ;
 unsigned int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct icp_qat_fw_loader_handle *VAR_4,
         unsigned char VAR_5, unsigned char VAR_6,
         unsigned short VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_1);
 VAR_9 &= VAR_3;
 FUNC_2(VAR_4, VAR_5, VAR_1, VAR_9 | VAR_0);

 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_2, VAR_7, VAR_8);
 FUNC_2(VAR_4, VAR_5, VAR_1, VAR_9);
 return VAR_10;
}
