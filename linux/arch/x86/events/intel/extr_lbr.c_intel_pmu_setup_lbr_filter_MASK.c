
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct TYPE_2__ {scalar_t__ lbr_sel_map; int lbr_nr; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 TYPE_1__ VAR_1 ;

int FUNC_2(struct perf_event *VAR_2)
{
 int VAR_3 = 0;




 if (!VAR_1.lbr_nr)
  return -VAR_0;




 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;




 if (VAR_1.lbr_sel_map)
  VAR_3 = FUNC_0(VAR_2);

 return VAR_3;
}
