
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; } ;
struct icp_qat_fw_init_admin_resp {int init_admin_cmd_id; int init_cfg_sz; TYPE_2__ init_resp_hdr; int init_cfg_ptr; } ;
struct icp_qat_fw_init_admin_req {int init_admin_cmd_id; int init_cfg_sz; TYPE_2__ init_resp_hdr; int init_cfg_ptr; } ;
struct adf_hw_device_data {int (* get_num_aes ) (struct adf_hw_device_data*) ;} ;
struct adf_accel_dev {TYPE_1__* admin; struct adf_hw_device_data* hw_device; } ;
struct TYPE_3__ {int const_tbl_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct adf_accel_dev*,int,struct icp_qat_fw_init_admin_resp*,struct icp_qat_fw_init_admin_resp*) ;
 int FUNC_1 (struct icp_qat_fw_init_admin_resp*,int ,int) ;
 int FUNC_2 (struct adf_hw_device_data*) ;

__attribute__((used)) static int FUNC_3(struct adf_accel_dev *VAR_2, int VAR_3)
{
 struct adf_hw_device_data *VAR_4 = VAR_2->hw_device;
 struct icp_qat_fw_init_admin_req VAR_5;
 struct icp_qat_fw_init_admin_resp VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5, 0, sizeof(struct icp_qat_fw_init_admin_req));
 VAR_5.init_admin_cmd_id = VAR_3;

 if (VAR_3 == VAR_1) {
  VAR_5.init_cfg_sz = 1024;
  VAR_5.init_cfg_ptr = VAR_2->admin->const_tbl_addr;
 }
 for (VAR_7 = 0; VAR_7 < VAR_4->get_num_aes(VAR_4); VAR_7++) {
  FUNC_1(&VAR_6, 0, sizeof(struct icp_qat_fw_init_admin_resp));
  if (FUNC_0(VAR_2, VAR_7, &VAR_5, &VAR_6) ||
      VAR_6.init_resp_hdr.status)
   return -VAR_0;
 }
 return 0;
}
