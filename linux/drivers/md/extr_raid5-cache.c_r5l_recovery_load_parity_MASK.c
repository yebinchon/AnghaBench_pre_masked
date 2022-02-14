
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {size_t pd_idx; size_t qd_idx; int state; TYPE_2__* dev; } ;
struct r5l_recovery_ctx {int meta_total_blocks; } ;
struct r5l_payload_data_parity {int * checksum; } ;
struct r5l_log {TYPE_1__* rdev; } ;
struct r5conf {int max_degraded; } ;
struct mddev {struct r5conf* private; } ;
typedef int sector_t ;
struct TYPE_4__ {int flags; void* log_checksum; int page; } ;
struct TYPE_3__ {struct mddev* mddev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct r5l_log*,struct r5l_recovery_ctx*,int ,int ) ;
 int FUNC_3 (struct r5l_log*,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct r5l_log *VAR_3,
         struct stripe_head *VAR_4,
         struct r5l_recovery_ctx *VAR_5,
         struct r5l_payload_data_parity *VAR_6,
         sector_t VAR_7)
{
 struct mddev *VAR_8 = VAR_3->rdev->mddev;
 struct r5conf *VAR_9 = VAR_8->private;

 VAR_5->meta_total_blocks += VAR_0 * VAR_9->max_degraded;
 FUNC_2(VAR_3, VAR_5, VAR_4->dev[VAR_4->pd_idx].page, VAR_7);
 VAR_4->dev[VAR_4->pd_idx].log_checksum =
  FUNC_1(VAR_6->checksum[0]);
 FUNC_4(VAR_1, &VAR_4->dev[VAR_4->pd_idx].flags);

 if (VAR_4->qd_idx >= 0) {
  FUNC_2(
   VAR_3, VAR_5, VAR_4->dev[VAR_4->qd_idx].page,
   FUNC_3(VAR_3, VAR_7, VAR_0));
  VAR_4->dev[VAR_4->qd_idx].log_checksum =
   FUNC_1(VAR_6->checksum[1]);
  FUNC_4(VAR_1, &VAR_4->dev[VAR_4->qd_idx].flags);
 }
 FUNC_0(VAR_2, &VAR_4->state);
}
