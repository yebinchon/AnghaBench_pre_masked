
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct hwrm_ver_get_output {int hwrm_intf_patch; scalar_t__ hwrm_intf_build; scalar_t__ hwrm_intf_minor; scalar_t__ hwrm_intf_major; int member_0; } ;
struct hwrm_ver_get_input {int hwrm_intf_upd; int hwrm_intf_min; int hwrm_intf_maj; int member_0; } ;
struct TYPE_4__ {int hwrm_intf_ver; } ;
struct bnxt_re_dev {TYPE_2__ qplib_ctx; struct bnxt_en_dev* en_dev; } ;
struct bnxt_fw_msg {int dummy; } ;
struct bnxt_en_dev {TYPE_1__* en_ops; } ;
typedef int resp ;
typedef int req ;
typedef int fw_msg ;
struct TYPE_3__ {int (* bnxt_send_fw_msg ) (struct bnxt_en_dev*,int ,struct bnxt_fw_msg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnxt_fw_msg*,void*,int,void*,int,int ) ;
 int FUNC_1 (struct bnxt_re_dev*,void*,int ,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct bnxt_fw_msg*,int ,int) ;
 int FUNC_4 (struct bnxt_re_dev*) ;
 int FUNC_5 (struct bnxt_en_dev*,int ,struct bnxt_fw_msg*) ;

__attribute__((used)) static void FUNC_6(struct bnxt_re_dev *VAR_6)
{
 struct bnxt_en_dev *VAR_7 = VAR_6->en_dev;
 struct hwrm_ver_get_output VAR_8 = {0};
 struct hwrm_ver_get_input VAR_9 = {0};
 struct bnxt_fw_msg VAR_10;
 int VAR_11 = 0;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 FUNC_1(VAR_6, (void *)&VAR_9,
         VAR_5, -1, -1);
 VAR_9.hwrm_intf_maj = VAR_2;
 VAR_9.hwrm_intf_min = VAR_3;
 VAR_9.hwrm_intf_upd = VAR_4;
 FUNC_0(&VAR_10, (void *)&VAR_9, sizeof(VAR_9), (void *)&VAR_8,
       sizeof(VAR_8), VAR_1);
 VAR_11 = VAR_7->en_ops->bnxt_send_fw_msg(VAR_7, VAR_0, &VAR_10);
 if (VAR_11) {
  FUNC_2(FUNC_4(VAR_6),
   "Failed to query HW version, rc = 0x%x", VAR_11);
  return;
 }
 VAR_6->qplib_ctx.hwrm_intf_ver =
  (u64)VAR_8.hwrm_intf_major << 48 |
  (u64)VAR_8.hwrm_intf_minor << 32 |
  (u64)VAR_8.hwrm_intf_build << 16 |
  VAR_8.hwrm_intf_patch;
}
