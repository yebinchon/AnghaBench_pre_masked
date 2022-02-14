
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; } ;
struct event_base {scalar_t__ last_updated_clock_diff; int tv_clock_diff; int monotonic_timer; struct timeval tv_cache; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct event_base*) ;
 int FUNC_1 (int *,struct timeval*) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (struct timeval*,struct timeval*,int *) ;

__attribute__((used)) static int
FUNC_4(struct event_base *VAR_1, struct timeval *VAR_2)
{
 FUNC_0(VAR_1);

 if (VAR_1->tv_cache.tv_sec) {
  *VAR_2 = VAR_1->tv_cache;
  return (0);
 }

 if (FUNC_1(&VAR_1->monotonic_timer, VAR_2) == -1) {
  return -1;
 }

 if (VAR_1->last_updated_clock_diff + VAR_0
     < VAR_2->tv_sec) {
  struct timeval VAR_3;
  FUNC_2(&VAR_3,((void*)0));
  FUNC_3(&VAR_3, VAR_2, &VAR_1->tv_clock_diff);
  VAR_1->last_updated_clock_diff = VAR_2->tv_sec;
 }

 return 0;
}
