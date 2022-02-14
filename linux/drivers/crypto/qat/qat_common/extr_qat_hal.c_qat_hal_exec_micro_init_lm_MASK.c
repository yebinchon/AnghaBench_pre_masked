
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct icp_qat_fw_loader_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int *,unsigned int,int,unsigned int,int *) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int ,int,unsigned int*) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct icp_qat_fw_loader_handle *VAR_3,
          unsigned char VAR_4, unsigned char VAR_5,
          int *VAR_6, uint64_t *VAR_7,
          unsigned int VAR_8)
{
 int VAR_9 = 0;
 unsigned int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 unsigned int VAR_13 = 0, VAR_14 = 0;

 if (*VAR_6) {
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_1, 0, &VAR_10);
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_1, 0x1, &VAR_11);
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_1, 0x2, &VAR_12);
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2, 0, &VAR_13);
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2, 0x1, &VAR_14);
  *VAR_6 = 0;
 }
 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, 1,
           VAR_8 * 0x5, ((void*)0));
 if (VAR_9 != 0)
  return -VAR_0;
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_1, 0, VAR_10);
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_1, 0x1, VAR_11);
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_1, 0x2, VAR_12);
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_2, 0, VAR_13);
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_2, 0x1, VAR_14);

 return 0;
}
