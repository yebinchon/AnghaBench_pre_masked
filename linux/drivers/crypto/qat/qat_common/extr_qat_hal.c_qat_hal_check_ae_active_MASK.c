
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned int,int ) ;

int FUNC_1(struct icp_qat_fw_loader_handle *VAR_4,
       unsigned int VAR_5)
{
 unsigned int VAR_6 = 0, VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_3);
 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_1);
 if ((VAR_6 & (0xff << VAR_2)) ||
     (VAR_7 & (1 << VAR_0)))
  return 1;
 else
  return 0;
}
