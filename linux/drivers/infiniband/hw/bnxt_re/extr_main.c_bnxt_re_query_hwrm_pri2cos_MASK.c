
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct hwrm_queue_pri2cos_qcfg_output {int pri0_cos_queue_id; scalar_t__ queue_cfg_info; } ;
struct hwrm_queue_pri2cos_qcfg_input {int port_id; int flags; int member_0; } ;
struct bnxt_re_dev {struct bnxt_en_dev* en_dev; int netdev; } ;
struct bnxt_fw_msg {int dummy; } ;
struct bnxt_en_dev {TYPE_2__* en_ops; } ;
struct TYPE_3__ {int port_id; } ;
struct bnxt {TYPE_1__ pf; } ;
typedef int resp ;
typedef int req ;
typedef int fw_msg ;
struct TYPE_4__ {int (* bnxt_send_fw_msg ) (struct bnxt_en_dev*,int ,struct bnxt_fw_msg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnxt_fw_msg*,void*,int,void*,int,int ) ;
 int FUNC_1 (struct bnxt_re_dev*,void*,int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct bnxt_fw_msg*,int ,int) ;
 struct bnxt* FUNC_5 (int ) ;
 int FUNC_6 (struct bnxt_re_dev*) ;
 int FUNC_7 (struct bnxt_en_dev*,int ,struct bnxt_fw_msg*) ;

__attribute__((used)) static int FUNC_8(struct bnxt_re_dev *VAR_6, u8 VAR_7,
          u64 *VAR_8)
{
 struct hwrm_queue_pri2cos_qcfg_input VAR_9 = {0};
 struct bnxt *VAR_10 = FUNC_5(VAR_6->netdev);
 struct hwrm_queue_pri2cos_qcfg_output VAR_11;
 struct bnxt_en_dev *VAR_12 = VAR_6->en_dev;
 struct bnxt_fw_msg VAR_13;
 u32 VAR_14 = 0;
 u8 *VAR_15, *VAR_16;
 int VAR_17 = 0, VAR_18;

 if (!VAR_8)
  return -VAR_2;

 FUNC_4(&VAR_13, 0, sizeof(VAR_13));
 FUNC_1(VAR_6, (void *)&VAR_9,
         VAR_3, -1, -1);
 VAR_14 |= (VAR_7 & 0x01);
 VAR_14 |= VAR_4;
 VAR_9.flags = FUNC_2(VAR_14);
 VAR_9.port_id = VAR_10->pf.port_id;

 FUNC_0(&VAR_13, (void *)&VAR_9, sizeof(VAR_9), (void *)&VAR_11,
       sizeof(VAR_11), VAR_1);
 VAR_17 = VAR_12->en_ops->bnxt_send_fw_msg(VAR_12, VAR_0, &VAR_13);
 if (VAR_17)
  return VAR_17;

 if (VAR_11.queue_cfg_info) {
  FUNC_3(FUNC_6(VAR_6),
    "Asymmetric cos queue configuration detected");
  FUNC_3(FUNC_6(VAR_6),
    " on device, QoS may not be fully functional\n");
 }
 VAR_15 = &VAR_11.pri0_cos_queue_id;
 VAR_16 = (u8 *)VAR_8;
 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++)
  VAR_16[VAR_18] = VAR_15[VAR_18];

 return VAR_17;
}
