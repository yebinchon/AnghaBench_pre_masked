
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_depth {int max_depth; scalar_t__ scale_step; int scaled_max; } ;


 int FUNC_0 (struct rq_depth*) ;

bool FUNC_1(struct rq_depth *VAR_0, bool VAR_1)
{





 if (VAR_0->max_depth == 1)
  return 0;

 if (VAR_0->scale_step < 0 && VAR_1)
  VAR_0->scale_step = 0;
 else
  VAR_0->scale_step++;

 VAR_0->scaled_max = 0;
 FUNC_0(VAR_0);
 return 1;
}
