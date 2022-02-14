
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_stats {int dummy; } ;
struct core_stats {struct core_stats* events; struct core_stats* time; } ;


 struct core_stats* FUNC_0 (struct mod_stats*) ;
 int FUNC_1 (struct core_stats*) ;

void FUNC_2(struct mod_stats *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  struct core_stats *VAR_1 = FUNC_0(VAR_0);

  FUNC_1(VAR_1->time);
  FUNC_1(VAR_1->events);
  FUNC_1(VAR_1);
 }
}
