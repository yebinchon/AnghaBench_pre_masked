
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; scalar_t__ exclude_idle; scalar_t__ exclude_hv; int config; } ;
struct perf_event {scalar_t__ cpu; int (* destroy ) (struct perf_event*) ;TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct perf_event *VAR_6)
{
 int VAR_7;


 if (FUNC_2(VAR_6))
  return -VAR_2;

 switch (VAR_6->attr.type) {
 case 128:
  if ((VAR_6->attr.config != VAR_4) &&
      (VAR_6->attr.config != VAR_5))
   return -VAR_1;
  break;
 case 129:





  if (VAR_6->attr.config != VAR_3)
   return -VAR_1;
  if (!FUNC_3(VAR_6))
   return -VAR_1;
  break;
 default:
  return -VAR_1;
 }


 if (VAR_6->cpu >= 0 && !FUNC_1(VAR_6->cpu))
  return -VAR_0;




 if (VAR_6->attr.exclude_hv)
  VAR_6->attr.exclude_hv = 0;
 if (VAR_6->attr.exclude_idle)
  VAR_6->attr.exclude_idle = 0;

 VAR_7 = FUNC_0(VAR_6);
 if (FUNC_5(VAR_7))
  if (VAR_6->destroy)
   VAR_6->destroy(VAR_6);
 return VAR_7;
}
