
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct dm_writecache {int flush_work; int writeback_wq; } ;


 int VAR_0 ;
 struct dm_writecache* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ,int *) ;
 struct dm_writecache* VAR_1 ;
 int FUNC_2 (struct dm_writecache*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct dm_writecache *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 if (!FUNC_2(VAR_3))
  FUNC_1(VAR_3->writeback_wq, &VAR_3->flush_work);
}
