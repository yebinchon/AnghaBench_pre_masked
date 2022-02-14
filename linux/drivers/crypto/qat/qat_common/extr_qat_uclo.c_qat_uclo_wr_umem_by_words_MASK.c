
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 int FUNC_0 (unsigned int*,unsigned char*,int) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,int ,int,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct icp_qat_fw_loader_handle *VAR_0,
          unsigned char VAR_1, unsigned int VAR_2,
          unsigned int *VAR_3,
          unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned char *VAR_6 = (unsigned char *)VAR_3;

 VAR_2 >>= 0x2;

 while (VAR_4) {
  FUNC_0(&VAR_5, VAR_6, 4);
  FUNC_1(VAR_0, VAR_1, VAR_2++, 1, &VAR_5);
  VAR_4 -= 4;
  VAR_6 += 4;
 }
}
