
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct time_stats {int last; int average_duration; int average_frequency; int lock; int max_duration; } ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int) ;

void FUNC_6(struct time_stats *VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2, VAR_3, VAR_4;

 FUNC_3(&VAR_0->lock);

 VAR_2 = FUNC_1();
 VAR_3 = FUNC_5(VAR_2, VAR_1)
  ? VAR_2 - VAR_1 : 0;
 VAR_4 = FUNC_5(VAR_2, VAR_0->last)
  ? VAR_2 - VAR_0->last : 0;

 VAR_0->max_duration = FUNC_2(VAR_0->max_duration, VAR_3);

 if (VAR_0->last) {
  FUNC_0(VAR_0->average_duration, VAR_3, 8, 8);

  if (VAR_0->average_frequency)
   FUNC_0(VAR_0->average_frequency, VAR_4, 8, 8);
  else
   VAR_0->average_frequency = VAR_4 << 8;
 } else {
  VAR_0->average_duration = VAR_3 << 8;
 }

 VAR_0->last = VAR_2 ?: 1;

 FUNC_4(&VAR_0->lock);
}
