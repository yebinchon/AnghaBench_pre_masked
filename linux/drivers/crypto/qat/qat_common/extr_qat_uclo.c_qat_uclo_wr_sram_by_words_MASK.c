
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(struct icp_qat_fw_loader_handle *VAR_0,
          unsigned int VAR_1, unsigned int *VAR_2,
          unsigned int VAR_3)
{
 unsigned int VAR_4;
 unsigned char *VAR_5 = (unsigned char *)VAR_2;

 while (VAR_3) {
  FUNC_1(&VAR_4, VAR_5, 4);
  FUNC_0(VAR_0, VAR_1, VAR_4);
  VAR_3 -= 4;
  VAR_5 += 4;
  VAR_1 += 4;
 }
}
