
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_wait_info {int timeout_ms; int * atomic_cnt; int * wq; } ;
struct dpu_encoder_phys_cmd {scalar_t__ pp_timeout_report_cnt; } ;
struct dpu_encoder_phys {int pending_kickoff_cnt; int pending_kickoff_wq; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dpu_encoder_phys*) ;
 int FUNC_2 (struct dpu_encoder_phys*,int ,struct dpu_encoder_wait_info*) ;
 struct dpu_encoder_phys_cmd* FUNC_3 (struct dpu_encoder_phys*) ;

__attribute__((used)) static int FUNC_4(
  struct dpu_encoder_phys *VAR_4)
{
 struct dpu_encoder_phys_cmd *VAR_5 =
   FUNC_3(VAR_4);
 struct dpu_encoder_wait_info VAR_6;
 int VAR_7;

 if (!VAR_4) {
  FUNC_0("invalid encoder\n");
  return -VAR_0;
 }

 VAR_6.wq = &VAR_4->pending_kickoff_wq;
 VAR_6.atomic_cnt = &VAR_4->pending_kickoff_cnt;
 VAR_6.timeout_ms = VAR_3;

 VAR_7 = FUNC_2(VAR_4, VAR_2,
   &VAR_6);
 if (VAR_7 == -VAR_1)
  FUNC_1(VAR_4);
 else if (!VAR_7)
  VAR_5->pp_timeout_report_cnt = 0;

 return VAR_7;
}
