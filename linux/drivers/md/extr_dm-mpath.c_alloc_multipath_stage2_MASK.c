
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {scalar_t__ queue_mode; int pg_init_wait; int pg_init_delay_msecs; int pg_init_count; int pg_init_in_progress; int flags; int process_queued_bios; } ;
struct dm_target {int table; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct dm_target *VAR_7, struct multipath *VAR_8)
{
 if (VAR_8->queue_mode == VAR_2) {
  VAR_8->queue_mode = VAR_3;
 } else if (VAR_8->queue_mode == VAR_1) {
  FUNC_0(&VAR_8->process_queued_bios, VAR_6);




  FUNC_4(VAR_5, &VAR_8->flags);
 }

 FUNC_2(VAR_7->table, VAR_8->queue_mode);





 FUNC_4(VAR_4, &VAR_8->flags);
 FUNC_1(&VAR_8->pg_init_in_progress, 0);
 FUNC_1(&VAR_8->pg_init_count, 0);
 VAR_8->pg_init_delay_msecs = VAR_0;
 FUNC_3(&VAR_8->pg_init_wait);

 return 0;
}
