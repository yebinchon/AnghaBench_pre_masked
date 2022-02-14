
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_wait_info {int timeout_ms; int * atomic_cnt; int * wq; } ;
struct dpu_encoder_phys_cmd {int dummy; } ;
struct dpu_encoder_phys {int pending_ctlstart_cnt; int pending_kickoff_wq; int hw_ctl; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_encoder_phys_cmd*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dpu_encoder_phys*,int ,struct dpu_encoder_wait_info*) ;
 struct dpu_encoder_phys_cmd* FUNC_3 (struct dpu_encoder_phys*) ;

__attribute__((used)) static int FUNC_4(
  struct dpu_encoder_phys *VAR_4)
{
 struct dpu_encoder_phys_cmd *VAR_5 =
   FUNC_3(VAR_4);
 struct dpu_encoder_wait_info VAR_6;
 int VAR_7;

 if (!VAR_4 || !VAR_4->hw_ctl) {
  FUNC_0("invalid argument(s)\n");
  return -VAR_0;
 }

 VAR_6.wq = &VAR_4->pending_kickoff_wq;
 VAR_6.atomic_cnt = &VAR_4->pending_ctlstart_cnt;
 VAR_6.timeout_ms = VAR_3;

 VAR_7 = FUNC_2(VAR_4, VAR_2,
   &VAR_6);
 if (VAR_7 == -VAR_1) {
  FUNC_1(VAR_5, "ctl start interrupt wait failed\n");
  VAR_7 = -VAR_0;
 } else if (!VAR_7)
  VAR_7 = 0;

 return VAR_7;
}
