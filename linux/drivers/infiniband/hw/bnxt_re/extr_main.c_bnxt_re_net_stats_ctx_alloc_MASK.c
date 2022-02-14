
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hwrm_stat_ctx_alloc_output {int stat_ctx_id; int member_0; } ;
struct hwrm_stat_ctx_alloc_input {int stat_ctx_flags; int stats_dma_addr; int update_period_ms; int member_0; } ;
struct bnxt_re_dev {struct bnxt_en_dev* en_dev; } ;
struct bnxt_fw_msg {int dummy; } ;
struct bnxt_en_dev {TYPE_1__* en_ops; } ;
typedef int resp ;
typedef int req ;
typedef int fw_msg ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* bnxt_send_fw_msg ) (struct bnxt_en_dev*,int ,struct bnxt_fw_msg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnxt_fw_msg*,void*,int,void*,int,int ) ;
 int FUNC_1 (struct bnxt_re_dev*,void*,int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bnxt_fw_msg*,int ,int) ;
 int FUNC_6 (struct bnxt_en_dev*,int ,struct bnxt_fw_msg*) ;

__attribute__((used)) static int FUNC_7(struct bnxt_re_dev *VAR_6,
           dma_addr_t VAR_7,
           u32 *VAR_8)
{
 struct hwrm_stat_ctx_alloc_output VAR_9 = {0};
 struct hwrm_stat_ctx_alloc_input VAR_10 = {0};
 struct bnxt_en_dev *VAR_11 = VAR_6->en_dev;
 struct bnxt_fw_msg VAR_12;
 int VAR_13 = -VAR_2;

 *VAR_8 = VAR_4;

 if (!VAR_11)
  return VAR_13;

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));

 FUNC_1(VAR_6, (void *)&VAR_10, VAR_3, -1, -1);
 VAR_10.update_period_ms = FUNC_2(1000);
 VAR_10.stats_dma_addr = FUNC_3(VAR_7);
 VAR_10.stat_ctx_flags = VAR_5;
 FUNC_0(&VAR_12, (void *)&VAR_10, sizeof(VAR_10), (void *)&VAR_9,
       sizeof(VAR_9), VAR_1);
 VAR_13 = VAR_11->en_ops->bnxt_send_fw_msg(VAR_11, VAR_0, &VAR_12);
 if (!VAR_13)
  *VAR_8 = FUNC_4(VAR_9.stat_ctx_id);

 return VAR_13;
}
