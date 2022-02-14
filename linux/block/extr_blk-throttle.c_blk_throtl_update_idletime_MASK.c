
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {unsigned long last_finish_time; unsigned long checked_last_finish_time; int avg_idletime; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct throtl_grp *VAR_0)
{
 unsigned long VAR_1 = FUNC_0() >> 10;
 unsigned long VAR_2 = VAR_0->last_finish_time;

 if (VAR_1 <= VAR_2 || VAR_2 == 0 ||
     VAR_2 == VAR_0->checked_last_finish_time)
  return;

 VAR_0->avg_idletime = (VAR_0->avg_idletime * 7 + VAR_1 - VAR_2) >> 3;
 VAR_0->checked_last_finish_time = VAR_2;
}
