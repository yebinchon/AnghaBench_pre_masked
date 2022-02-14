
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpu_encoder_phys_cmd {int dummy; } ;
struct dpu_encoder_phys {int pending_kickoff_cnt; TYPE_1__* hw_pp; int parent; } ;
struct TYPE_2__ {scalar_t__ idx; } ;


 int FUNC_0 (struct dpu_encoder_phys_cmd*,char*,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,scalar_t__,int ) ;
 int FUNC_4 (char*,int ,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (struct dpu_encoder_phys*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 struct dpu_encoder_phys_cmd* FUNC_8 (struct dpu_encoder_phys*) ;

__attribute__((used)) static void FUNC_9(
  struct dpu_encoder_phys *VAR_1)
{
 struct dpu_encoder_phys_cmd *VAR_2 =
   FUNC_8(VAR_1);
 int VAR_3;

 if (!VAR_1 || !VAR_1->hw_pp) {
  FUNC_1("invalid encoder\n");
  return;
 }
 FUNC_3("id:%u pp:%d pending_cnt:%d\n", FUNC_2(VAR_1->parent),
        VAR_1->hw_pp->idx - VAR_0,
        FUNC_6(&VAR_1->pending_kickoff_cnt));





 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3) {

  FUNC_7(&VAR_1->pending_kickoff_cnt, 0);
  FUNC_4("failed wait_for_idle: id:%u ret:%d pp:%d\n",
     FUNC_2(VAR_1->parent), VAR_3,
     VAR_1->hw_pp->idx - VAR_0);
 }

 FUNC_0(VAR_2, "pp:%d pending_cnt %d\n",
   VAR_1->hw_pp->idx - VAR_0,
   FUNC_6(&VAR_1->pending_kickoff_cnt));
}
