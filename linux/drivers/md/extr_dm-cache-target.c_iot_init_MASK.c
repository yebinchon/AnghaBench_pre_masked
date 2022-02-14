
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_tracker {unsigned long in_flight; unsigned long idle_time; int last_update_time; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct io_tracker *VAR_1)
{
 FUNC_0(&VAR_1->lock);
 VAR_1->in_flight = 0ul;
 VAR_1->idle_time = 0ul;
 VAR_1->last_update_time = VAR_0;
}
