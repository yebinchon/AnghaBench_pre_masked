
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct icp_qat_fw_loader_handle {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int) ;

void FUNC_3(struct icp_qat_fw_loader_handle *VAR_4,
         unsigned char VAR_5, unsigned int VAR_6,
         unsigned int VAR_7, uint64_t *VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_1);
 VAR_6 |= VAR_0;
 FUNC_2(VAR_4, VAR_5, VAR_1, VAR_6);
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  unsigned int VAR_11, VAR_12;
  uint64_t VAR_13;

  VAR_13 = FUNC_1(VAR_8[VAR_10]);
  VAR_11 = (unsigned int)(VAR_13 & 0xffffffff);
  VAR_12 = (unsigned int)(VAR_13 >> 0x20);
  FUNC_2(VAR_4, VAR_5, VAR_2, VAR_11);
  FUNC_2(VAR_4, VAR_5, VAR_3, VAR_12);
 }
 FUNC_2(VAR_4, VAR_5, VAR_1, VAR_9);
}
