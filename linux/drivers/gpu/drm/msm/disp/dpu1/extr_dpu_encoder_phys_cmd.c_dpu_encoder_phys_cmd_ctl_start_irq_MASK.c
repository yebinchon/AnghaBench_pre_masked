
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_phys_cmd {int dummy; } ;
struct dpu_encoder_phys {int pending_kickoff_wq; int pending_ctlstart_cnt; int hw_ctl; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int ) ;
 struct dpu_encoder_phys_cmd* FUNC_3 (struct dpu_encoder_phys*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, int VAR_1)
{
 struct dpu_encoder_phys *VAR_2 = VAR_0;
 struct dpu_encoder_phys_cmd *VAR_3;

 if (!VAR_2 || !VAR_2->hw_ctl)
  return;

 FUNC_0("ctl_start_irq");
 VAR_3 = FUNC_3(VAR_2);

 FUNC_2(&VAR_2->pending_ctlstart_cnt, -1, 0);


 FUNC_4(&VAR_2->pending_kickoff_wq);
 FUNC_1("ctl_start_irq");
}
