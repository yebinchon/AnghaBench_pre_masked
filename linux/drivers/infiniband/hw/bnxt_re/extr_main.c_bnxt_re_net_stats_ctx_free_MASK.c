
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hwrm_stat_ctx_free_input {int stat_ctx_id; int member_0; } ;
struct bnxt_re_dev {struct bnxt_en_dev* en_dev; } ;
struct bnxt_fw_msg {int dummy; } ;
struct bnxt_en_dev {TYPE_1__* en_ops; } ;
typedef int req ;
typedef int fw_msg ;
struct TYPE_2__ {int (* bnxt_send_fw_msg ) (struct bnxt_en_dev*,int ,struct bnxt_fw_msg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnxt_fw_msg*,void*,int,void*,int,int ) ;
 int FUNC_1 (struct bnxt_re_dev*,void*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct bnxt_fw_msg*,int ,int) ;
 int FUNC_5 (struct bnxt_re_dev*) ;
 int FUNC_6 (struct bnxt_en_dev*,int ,struct bnxt_fw_msg*) ;

__attribute__((used)) static int FUNC_7(struct bnxt_re_dev *VAR_4,
          u32 VAR_5)
{
 struct bnxt_en_dev *VAR_6 = VAR_4->en_dev;
 struct hwrm_stat_ctx_free_input VAR_7 = {0};
 struct bnxt_fw_msg VAR_8;
 int VAR_9 = -VAR_2;

 if (!VAR_6)
  return VAR_9;

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 FUNC_1(VAR_4, (void *)&VAR_7, VAR_3, -1, -1);
 VAR_7.stat_ctx_id = FUNC_2(VAR_5);
 FUNC_0(&VAR_8, (void *)&VAR_7, sizeof(VAR_7), (void *)&VAR_7,
       sizeof(VAR_7), VAR_1);
 VAR_9 = VAR_6->en_ops->bnxt_send_fw_msg(VAR_6, VAR_0, &VAR_8);
 if (VAR_9)
  FUNC_3(FUNC_5(VAR_4),
   "Failed to free HW stats context %#x", VAR_9);

 return VAR_9;
}
