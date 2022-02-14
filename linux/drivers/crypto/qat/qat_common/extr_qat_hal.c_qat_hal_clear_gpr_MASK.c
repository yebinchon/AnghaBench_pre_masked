
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; } ;
struct TYPE_2__ {unsigned char ae_max_num; int upc_mask; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (char*,unsigned char) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int) ;
 int FUNC_3 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int) ;
 int FUNC_4 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,int ) ;
 int FUNC_5 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,int ) ;
 unsigned int FUNC_6 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 int FUNC_7 (struct icp_qat_fw_loader_handle*,unsigned char,int,int) ;
 int FUNC_8 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int) ;
 int FUNC_9 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,int ,int) ;
 int FUNC_10 (struct icp_qat_fw_loader_handle*,unsigned char,int ,int ,int *) ;

__attribute__((used)) static int FUNC_11(struct icp_qat_fw_loader_handle *VAR_23)
{
 unsigned char VAR_24;
 unsigned int VAR_25 = VAR_11;
 int VAR_26 = VAR_19;
 unsigned int VAR_27 = 0;
 unsigned int VAR_28 = 0;
 int VAR_29 = 0;

 for (VAR_24 = 0; VAR_24 < VAR_23->hal_handle->ae_max_num; VAR_24++) {
  VAR_27 = FUNC_6(VAR_23, VAR_24, VAR_2);
  VAR_27 &= ~(1 << VAR_20);
  FUNC_8(VAR_23, VAR_24, VAR_2, VAR_27);
  VAR_27 = FUNC_6(VAR_23, VAR_24, VAR_6);
  VAR_27 &= VAR_12;
  VAR_27 |= VAR_4;
  FUNC_8(VAR_23, VAR_24, VAR_6, VAR_27);
  FUNC_10(VAR_23, VAR_24, 0, FUNC_0(VAR_22),
      (uint64_t *)VAR_22);
  FUNC_9(VAR_23, VAR_24, VAR_25, VAR_9,
        VAR_23->hal_handle->upc_mask &
        VAR_16);
  VAR_28 = FUNC_6(VAR_23, VAR_24, VAR_1);
  FUNC_8(VAR_23, VAR_24, VAR_1, 0);
  FUNC_5(VAR_23, VAR_24, VAR_25, VAR_21);
  FUNC_9(VAR_23, VAR_24, VAR_25,
        VAR_8, 0);
  FUNC_8(VAR_23, VAR_24, VAR_7, 0);
  FUNC_3(VAR_23, VAR_24, VAR_25);
 }
 for (VAR_24 = 0; VAR_24 < VAR_23->hal_handle->ae_max_num; VAR_24++) {

  do {
   VAR_29 = FUNC_7(VAR_23, VAR_24, 20, 1);
  } while (VAR_29 && VAR_26--);

  if (VAR_26 < 0) {
   FUNC_1("QAT: clear GPR of AE %d failed", VAR_24);
   return -VAR_10;
  }
  FUNC_2(VAR_23, VAR_24, VAR_25);
  FUNC_8(VAR_23, VAR_24, VAR_1,
      VAR_28 & VAR_0);
  FUNC_8(VAR_23, VAR_24, VAR_6,
      VAR_15);
  FUNC_9(VAR_23, VAR_24, VAR_25, VAR_9,
        VAR_23->hal_handle->upc_mask &
        VAR_16);
  FUNC_8(VAR_23, VAR_24, VAR_5, VAR_14);
  FUNC_8(VAR_23, VAR_24, VAR_3, VAR_13);
  FUNC_5(VAR_23, VAR_24, VAR_25,
      VAR_18);
  FUNC_4(VAR_23, VAR_24, VAR_25,
          VAR_17);
 }
 return 0;
}
