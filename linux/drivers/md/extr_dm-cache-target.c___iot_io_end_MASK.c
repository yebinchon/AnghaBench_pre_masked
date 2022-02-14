
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_tracker {int idle_time; scalar_t__ in_flight; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct io_tracker *VAR_1, sector_t VAR_2)
{
 if (!VAR_2)
  return;

 VAR_1->in_flight -= VAR_2;
 if (!VAR_1->in_flight)
  VAR_1->idle_time = VAR_0;
}
