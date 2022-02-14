
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {struct log_c* usr_argv_str; int flush_entry_pool; scalar_t__ log_dev; int ti; int luid; int uuid; int dmlog_wq; int flush_log_work; int sched_flush; scalar_t__ integrated_flush; } ;
struct dm_dirty_log {struct log_c* context; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct log_c*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct dm_dirty_log *VAR_1)
{
 struct log_c *VAR_2 = VAR_1->context;

 if (VAR_2->integrated_flush) {

  if (FUNC_0(&VAR_2->sched_flush))
   FUNC_4(&VAR_2->flush_log_work);

  FUNC_1(VAR_2->dmlog_wq);
 }

 (void) FUNC_2(VAR_2->uuid, VAR_2->luid, VAR_0,
        ((void*)0), 0, ((void*)0), ((void*)0));

 if (VAR_2->log_dev)
  FUNC_3(VAR_2->ti, VAR_2->log_dev);

 FUNC_6(&VAR_2->flush_entry_pool);

 FUNC_5(VAR_2->usr_argv_str);
 FUNC_5(VAR_2);

 return;
}
