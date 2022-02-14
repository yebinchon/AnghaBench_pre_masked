
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {int luid; int uuid; int flush_log_work; int sched_flush; scalar_t__ integrated_flush; } ;
struct dm_dirty_log {struct log_c* context; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dm_dirty_log *VAR_1)
{
 int VAR_2;
 struct log_c *VAR_3 = VAR_1->context;




 if (VAR_3->integrated_flush && FUNC_0(&VAR_3->sched_flush))
  FUNC_2(&VAR_3->flush_log_work);

 VAR_2 = FUNC_1(VAR_3->uuid, VAR_3->luid, VAR_0,
     ((void*)0), 0, ((void*)0), ((void*)0));

 return VAR_2;
}
