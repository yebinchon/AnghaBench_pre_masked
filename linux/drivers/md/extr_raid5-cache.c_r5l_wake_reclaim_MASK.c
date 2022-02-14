
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_log {unsigned long reclaim_target; int reclaim_thread; } ;
typedef scalar_t__ sector_t ;


 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct r5l_log *VAR_0, sector_t VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3 = (unsigned long)VAR_1;

 if (!VAR_0)
  return;
 do {
  VAR_2 = VAR_0->reclaim_target;
  if (VAR_3 < VAR_2)
   return;
 } while (FUNC_0(&VAR_0->reclaim_target, VAR_2, VAR_3) != VAR_2);
 FUNC_1(VAR_0->reclaim_thread);
}
