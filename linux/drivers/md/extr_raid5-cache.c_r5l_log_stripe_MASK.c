
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int disks; int pd_idx; int qd_idx; int r5c; int log_start; struct r5l_io_unit* log_io; int log_list; TYPE_1__* dev; int sector; int state; } ;
struct r5l_payload_data_parity {int dummy; } ;
struct r5l_log {scalar_t__ r5c_journal_mode; int stripe_in_journal_count; int stripe_in_journal_lock; int stripe_in_journal_list; struct r5l_io_unit* current_io; } ;
struct r5l_io_unit {int has_flush; int has_fua; int log_start; int pending_stripe; int stripe_list; } ;
typedef int __le32 ;
struct TYPE_2__ {int page; int log_checksum; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct r5l_log*,int ,int ,int ,int ,int) ;
 int FUNC_5 (struct r5l_log*,int ) ;
 int FUNC_6 (struct r5l_log*,int) ;
 int FUNC_7 (struct stripe_head*,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct r5l_log *VAR_9, struct stripe_head *VAR_10,
      int VAR_11, int VAR_12)
{
 int VAR_13;
 int VAR_14;
 int VAR_15;
 struct r5l_io_unit *VAR_16;

 VAR_14 =
  ((sizeof(struct r5l_payload_data_parity) + sizeof(__le32))
   * VAR_11) +
  sizeof(struct r5l_payload_data_parity) +
  sizeof(__le32) * VAR_12;

 VAR_15 = FUNC_6(VAR_9, VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_16 = VAR_9->current_io;

 if (FUNC_10(VAR_8, &VAR_10->state))
  VAR_16->has_flush = 1;

 for (VAR_13 = 0; VAR_13 < VAR_10->disks; VAR_13++) {
  if (!FUNC_11(VAR_7, &VAR_10->dev[VAR_13].flags) ||
      FUNC_11(VAR_5, &VAR_10->dev[VAR_13].flags))
   continue;
  if (VAR_13 == VAR_10->pd_idx || VAR_13 == VAR_10->qd_idx)
   continue;
  if (FUNC_11(VAR_6, &VAR_10->dev[VAR_13].flags) &&
      VAR_9->r5c_journal_mode == VAR_1) {
   VAR_16->has_fua = 1;




   VAR_16->has_flush = 1;
  }
  FUNC_4(VAR_9, VAR_3,
     FUNC_7(VAR_10, VAR_13, 0),
     VAR_10->dev[VAR_13].log_checksum, 0, 0);
  FUNC_5(VAR_9, VAR_10->dev[VAR_13].page);
 }

 if (VAR_12 == 2) {
  FUNC_4(VAR_9, VAR_4,
     VAR_10->sector, VAR_10->dev[VAR_10->pd_idx].log_checksum,
     VAR_10->dev[VAR_10->qd_idx].log_checksum, 1);
  FUNC_5(VAR_9, VAR_10->dev[VAR_10->pd_idx].page);
  FUNC_5(VAR_9, VAR_10->dev[VAR_10->qd_idx].page);
 } else if (VAR_12 == 1) {
  FUNC_4(VAR_9, VAR_4,
     VAR_10->sector, VAR_10->dev[VAR_10->pd_idx].log_checksum,
     0, 0);
  FUNC_5(VAR_9, VAR_10->dev[VAR_10->pd_idx].page);
 } else
  FUNC_0(VAR_12 != 0);

 FUNC_2(&VAR_10->log_list, &VAR_16->stripe_list);
 FUNC_1(&VAR_16->pending_stripe);
 VAR_10->log_io = VAR_16;

 if (VAR_9->r5c_journal_mode == VAR_2)
  return 0;

 if (VAR_10->log_start == VAR_0) {
  FUNC_0(!FUNC_3(&VAR_10->r5c));
  VAR_10->log_start = VAR_16->log_start;
  FUNC_8(&VAR_9->stripe_in_journal_lock);
  FUNC_2(&VAR_10->r5c,
         &VAR_9->stripe_in_journal_list);
  FUNC_9(&VAR_9->stripe_in_journal_lock);
  FUNC_1(&VAR_9->stripe_in_journal_count);
 }
 return 0;
}
