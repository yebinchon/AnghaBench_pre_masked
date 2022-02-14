
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct icp_qat_fw_loader_handle *VAR_4,
          unsigned char VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_2);
 VAR_7 &= VAR_3;
 VAR_6 &= (VAR_7 & VAR_1) ? 0x55 : 0xFF;
 VAR_7 |= (VAR_6 << VAR_0);
 FUNC_1(VAR_4, VAR_5, VAR_2, VAR_7);
}
