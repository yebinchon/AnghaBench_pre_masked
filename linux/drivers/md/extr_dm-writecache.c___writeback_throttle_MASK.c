
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_list {scalar_t__ size; } ;
struct dm_writecache {scalar_t__ max_writeback_jobs; scalar_t__ writeback_size; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct dm_writecache*) ;
 int FUNC_4 (struct dm_writecache*) ;
 int FUNC_5 (struct dm_writecache*) ;

__attribute__((used)) static void FUNC_6(struct dm_writecache *VAR_0, struct writeback_list *VAR_1)
{
 if (FUNC_2(VAR_0->max_writeback_jobs)) {
  if (FUNC_0(VAR_0->writeback_size) - VAR_1->size >= VAR_0->max_writeback_jobs) {
   FUNC_3(VAR_0);
   while (VAR_0->writeback_size - VAR_1->size >= VAR_0->max_writeback_jobs)
    FUNC_5(VAR_0);
   FUNC_4(VAR_0);
  }
 }
 FUNC_1();
}
