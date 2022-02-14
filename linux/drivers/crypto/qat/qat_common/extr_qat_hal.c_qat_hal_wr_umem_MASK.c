
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int) ;

void FUNC_3(struct icp_qat_fw_loader_handle *VAR_4,
       unsigned char VAR_5, unsigned int VAR_6,
       unsigned int VAR_7, unsigned int *VAR_8)
{
 unsigned int VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_1);
 VAR_6 |= VAR_0;
 FUNC_2(VAR_4, VAR_5, VAR_1, VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  unsigned int VAR_11, VAR_12, VAR_13;

  VAR_11 = ((VAR_8[VAR_9] & 0xfff0000) << 4) | (0x3 << 18) |
     ((VAR_8[VAR_9] & 0xff00) << 2) |
     (0x3 << 8) | (VAR_8[VAR_9] & 0xff);
  VAR_12 = (0xf << 4) | ((VAR_8[VAR_9] & 0xf0000000) >> 28);
  VAR_12 |= (FUNC_0(VAR_8[VAR_9] & 0xffff) & 0x1) << 8;
  VAR_13 = ((VAR_8[VAR_9] >> 0x10) & 0xffff);
  VAR_12 |= (FUNC_0(VAR_13) & 0x1) << 9;
  FUNC_2(VAR_4, VAR_5, VAR_2, VAR_11);
  FUNC_2(VAR_4, VAR_5, VAR_3, VAR_12);
 }
 FUNC_2(VAR_4, VAR_5, VAR_1, VAR_10);
}
