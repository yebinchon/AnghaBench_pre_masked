
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct background_tracker {scalar_t__ max_work; int pending_demotes; int pending_writebacks; int pending_promotes; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct background_tracker *VAR_0)
{
 return FUNC_0(&VAR_0->pending_promotes) +
  FUNC_0(&VAR_0->pending_writebacks) +
  FUNC_0(&VAR_0->pending_demotes) >= VAR_0->max_work;
}
