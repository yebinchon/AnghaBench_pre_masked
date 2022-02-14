
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; } ;
struct TYPE_2__ {unsigned int ae_mask; unsigned int slice_mask; unsigned char ae_max_num; int upc_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct icp_qat_fw_loader_handle*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,int ,unsigned int) ;
 int VAR_16 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct icp_qat_fw_loader_handle*) ;
 scalar_t__ FUNC_4 (struct icp_qat_fw_loader_handle*) ;
 int FUNC_5 (struct icp_qat_fw_loader_handle*,unsigned char,int ,int ) ;
 int FUNC_6 (struct icp_qat_fw_loader_handle*,unsigned char,int ,int ) ;
 int FUNC_7 (struct icp_qat_fw_loader_handle*) ;
 scalar_t__ FUNC_8 (struct icp_qat_fw_loader_handle*,int ,int ,int ) ;
 int FUNC_9 (struct icp_qat_fw_loader_handle*,unsigned char,int ,int ) ;
 int FUNC_10 (struct icp_qat_fw_loader_handle*,unsigned char,int ,int ,int) ;

int FUNC_11(struct icp_qat_fw_loader_handle *VAR_17)
{
 unsigned int VAR_18;
 unsigned char VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21 = 100;
 unsigned int VAR_22;


 VAR_18 = FUNC_0(VAR_17, VAR_7);
 VAR_18 &= ~(VAR_17->hal_handle->ae_mask << VAR_14);
 VAR_18 &= ~(VAR_17->hal_handle->slice_mask << VAR_15);
 do {
  FUNC_1(VAR_17, VAR_7, VAR_18);
  if (!(VAR_21--))
   goto out_err;
  VAR_22 = FUNC_0(VAR_17, VAR_7);
 } while ((VAR_17->hal_handle->ae_mask |
   (VAR_17->hal_handle->slice_mask << VAR_15)) & VAR_22);

 VAR_20 = FUNC_0(VAR_17, VAR_5);
 VAR_20 |= VAR_17->hal_handle->ae_mask << 0;
 VAR_20 |= VAR_17->hal_handle->slice_mask << 20;
 FUNC_1(VAR_17, VAR_5, VAR_20);
 if (FUNC_3(VAR_17))
  goto out_err;


 for (VAR_19 = 0; VAR_19 < VAR_17->hal_handle->ae_max_num; VAR_19++) {
  FUNC_9(VAR_17, VAR_19, VAR_2,
      VAR_10);
  FUNC_10(VAR_17, VAR_19, VAR_6,
        VAR_3,
        VAR_17->hal_handle->upc_mask &
        VAR_11);
  FUNC_9(VAR_17, VAR_19, VAR_1, VAR_9);
  FUNC_9(VAR_17, VAR_19, VAR_0, VAR_8);
  FUNC_6(VAR_17, VAR_19,
      VAR_6,
      VAR_13);
  FUNC_5(VAR_17, VAR_19,
          VAR_6,
          VAR_12);
 }
 if (FUNC_4(VAR_17))
  goto out_err;
 if (FUNC_8(VAR_17, 0, VAR_16, 0))
  goto out_err;
 FUNC_7(VAR_17);

 return 0;
out_err:
 FUNC_2("QAT: failed to get device out of reset\n");
 return -VAR_4;
}
