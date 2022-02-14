
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_wait_info {int timeout_ms; int * atomic_cnt; int * wq; } ;
struct dpu_encoder_phys {int pending_kickoff_cnt; int pending_kickoff_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dpu_encoder_phys*,int ) ;
 int FUNC_1 (struct dpu_encoder_phys*,int ,struct dpu_encoder_wait_info*) ;
 int FUNC_2 (struct dpu_encoder_phys*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(
  struct dpu_encoder_phys *VAR_4)
{
 struct dpu_encoder_wait_info VAR_5;
 int VAR_6;

 if (!VAR_4) {
  FUNC_3("invalid encoder\n");
  return -VAR_0;
 }

 VAR_5.wq = &VAR_4->pending_kickoff_wq;
 VAR_5.atomic_cnt = &VAR_4->pending_kickoff_cnt;
 VAR_5.timeout_ms = VAR_3;

 if (!FUNC_2(VAR_4)) {
  return 0;
 }


 VAR_6 = FUNC_1(VAR_4, VAR_2,
   &VAR_5);

 if (VAR_6 == -VAR_1) {
  FUNC_0(VAR_4, VAR_2);
 }

 return VAR_6;
}
