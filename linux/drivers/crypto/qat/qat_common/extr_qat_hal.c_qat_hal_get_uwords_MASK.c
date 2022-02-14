
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct icp_qat_fw_loader_handle {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct icp_qat_fw_loader_handle *VAR_5,
          unsigned char VAR_6, unsigned int VAR_7,
          unsigned int VAR_8, uint64_t *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;

 VAR_14 = FUNC_0(VAR_5, VAR_6, VAR_0);
 FUNC_1(VAR_5, VAR_6, VAR_0,
     VAR_14 & 0xfffffffb);
 VAR_13 = FUNC_0(VAR_5, VAR_6, VAR_2);
 VAR_7 |= VAR_1;
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  FUNC_1(VAR_5, VAR_6, VAR_2, VAR_7);
  VAR_7++;
  VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_3);
  VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_4);
  VAR_9[VAR_10] = VAR_12;
  VAR_9[VAR_10] = (VAR_9[VAR_10] << 0x20) | VAR_11;
 }
 FUNC_1(VAR_5, VAR_6, VAR_0, VAR_14);
 FUNC_1(VAR_5, VAR_6, VAR_2, VAR_13);
}
