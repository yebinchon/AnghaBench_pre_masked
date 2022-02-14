
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct TYPE_2__ {int num_pmcs; int (* check_constraints ) (struct perf_event**,unsigned long*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct perf_event**,unsigned long*,int) ;

__attribute__((used)) static int FUNC_1(struct perf_event **VAR_1,
       unsigned long *VAR_2, int VAR_3)
{


 if (VAR_3 == 0)
  return 0;

 if (VAR_3 > VAR_0->num_pmcs)
  return -1;

 return VAR_0->check_constraints(VAR_1, VAR_2, VAR_3);
}
