
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_depth {scalar_t__ scaled_max; int scale_step; } ;


 scalar_t__ FUNC_0 (struct rq_depth*) ;

bool FUNC_1(struct rq_depth *VAR_0)
{



 if (VAR_0->scaled_max)
  return 0;

 VAR_0->scale_step--;

 VAR_0->scaled_max = FUNC_0(VAR_0);
 return 1;
}
