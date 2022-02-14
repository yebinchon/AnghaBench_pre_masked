
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ag_work_lock; TYPE_2__* ports_guid; } ;
struct TYPE_8__ {TYPE_3__ alias_guid; } ;
struct mlx4_ib_dev {TYPE_4__ sriov; int dev; } ;
typedef scalar_t__ __be64 ;
struct TYPE_6__ {int state_flags; TYPE_1__* all_rec_per_port; } ;
struct TYPE_5__ {scalar_t__* guids_retry_schedule; scalar_t__ time_to_run; int status; int guid_indexes; int * all_recs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mlx4_ib_dev*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct mlx4_ib_dev *VAR_4, int VAR_5,
        int VAR_6, int VAR_7)
{
 __be64 VAR_8, VAR_9;
 int VAR_10 = VAR_5 / 8;
 int VAR_11 = VAR_5 % 8;
 int VAR_12 = VAR_6 - 1;
 unsigned long VAR_13;
 int VAR_14 = 0;

 FUNC_4(&VAR_4->sriov.alias_guid.ag_work_lock, VAR_13);
 if (VAR_4->sriov.alias_guid.ports_guid[VAR_12].state_flags &
     VAR_1)
  goto unlock;
 if (!VAR_7) {
  VAR_8 = *(__be64 *)&VAR_4->sriov.
   alias_guid.ports_guid[VAR_12].
   all_rec_per_port[VAR_10].
   all_recs[VAR_0 * VAR_11];
  if (VAR_8 == FUNC_0(VAR_2) ||
      !VAR_8)
   goto unlock;
  VAR_9 = FUNC_0(VAR_2);
 } else {
  VAR_9 = FUNC_1(VAR_4->dev, VAR_5, VAR_6);
  if (VAR_9 == FUNC_0(VAR_2))
   goto unlock;
 }
 *(__be64 *)&VAR_4->sriov.alias_guid.ports_guid[VAR_12].
  all_rec_per_port[VAR_10].
  all_recs[VAR_0 * VAR_11] = VAR_9;
 VAR_4->sriov.alias_guid.ports_guid[VAR_12].
  all_rec_per_port[VAR_10].guid_indexes
  |= FUNC_2(VAR_11);
 VAR_4->sriov.alias_guid.ports_guid[VAR_12].
  all_rec_per_port[VAR_10].status
  = VAR_3;

 VAR_4->sriov.alias_guid.ports_guid[VAR_12].
  all_rec_per_port[VAR_10].time_to_run = 0;
 VAR_4->sriov.alias_guid.ports_guid[VAR_12].
  all_rec_per_port[VAR_10].
  guids_retry_schedule[VAR_11] = 0;
 VAR_14 = 1;
unlock:
 FUNC_5(&VAR_4->sriov.alias_guid.ag_work_lock, VAR_13);

 if (VAR_14)
  FUNC_3(VAR_4, VAR_12);
}
