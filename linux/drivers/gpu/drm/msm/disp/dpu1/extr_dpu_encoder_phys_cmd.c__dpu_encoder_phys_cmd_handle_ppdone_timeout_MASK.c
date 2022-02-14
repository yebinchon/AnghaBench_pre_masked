
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct dpu_encoder_phys_cmd {int pp_timeout_report_cnt; } ;
struct dpu_encoder_phys {int parent; TYPE_3__* parent_ops; int enable_state; int pending_kickoff_cnt; TYPE_2__* hw_ctl; TYPE_1__* hw_pp; } ;
struct TYPE_6__ {int (* handle_frame_done ) (int ,struct dpu_encoder_phys*,int ) ;} ;
struct TYPE_5__ {scalar_t__ idx; } ;
struct TYPE_4__ {scalar_t__ idx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dpu_encoder_phys*,int ) ;
 int FUNC_5 (int ,struct dpu_encoder_phys*,int ) ;
 struct dpu_encoder_phys_cmd* FUNC_6 (struct dpu_encoder_phys*) ;
 int FUNC_7 (int ,scalar_t__,int,int ,int ) ;

__attribute__((used)) static int FUNC_8(
  struct dpu_encoder_phys *VAR_9)
{
 struct dpu_encoder_phys_cmd *VAR_10 =
   FUNC_6(VAR_9);
 u32 VAR_11 = VAR_1;
 bool VAR_12 = 0;

 if (!VAR_9 || !VAR_9->hw_pp || !VAR_9->hw_ctl)
  return -VAR_4;

 VAR_10->pp_timeout_report_cnt++;
 if (VAR_10->pp_timeout_report_cnt == VAR_8) {
  VAR_11 |= VAR_2;
  VAR_12 = 1;
 } else if (VAR_10->pp_timeout_report_cnt == 1) {
  VAR_12 = 1;
 }

 FUNC_7(FUNC_0(VAR_9->parent),
       VAR_9->hw_pp->idx - VAR_7,
       VAR_10->pp_timeout_report_cnt,
       FUNC_3(&VAR_9->pending_kickoff_cnt),
       VAR_11);


 if (VAR_12) {
  FUNC_1("id:%d pp:%d kickoff timeout %d cnt %d koff_cnt %d\n",
     FUNC_0(VAR_9->parent),
     VAR_9->hw_pp->idx - VAR_7,
     VAR_9->hw_ctl->idx - VAR_0,
     VAR_10->pp_timeout_report_cnt,
     FUNC_3(&VAR_9->pending_kickoff_cnt));

  FUNC_4(VAR_9, VAR_6);
 }

 FUNC_2(&VAR_9->pending_kickoff_cnt, -1, 0);


 VAR_9->enable_state = VAR_3;

 if (VAR_9->parent_ops->handle_frame_done)
  VAR_9->parent_ops->handle_frame_done(
    VAR_9->parent, VAR_9, VAR_11);

 return -VAR_5;
}
