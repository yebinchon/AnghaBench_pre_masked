
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_tracker {scalar_t__ idle_time; scalar_t__ in_flight; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct io_tracker *VAR_1, unsigned long VAR_2)
{
 if (VAR_1->in_flight)
  return 0;

 return FUNC_0(VAR_0, VAR_1->idle_time + VAR_2);
}
