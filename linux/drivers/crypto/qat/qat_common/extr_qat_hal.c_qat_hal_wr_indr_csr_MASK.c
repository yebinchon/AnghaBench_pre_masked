
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct icp_qat_fw_loader_handle *VAR_2,
    unsigned char VAR_3, unsigned int VAR_4,
    unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (!(VAR_4 & (1 << VAR_7)))
   continue;
  FUNC_1(VAR_2, VAR_3, VAR_0, VAR_7);
  FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6);
 }

 FUNC_1(VAR_2, VAR_3, VAR_0, VAR_8);
}
