
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
struct perf_event {int dummy; } ;
struct arch_hw_breakpoint {int len; unsigned int mask; unsigned int address; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;




 int FUNC_1 (struct perf_event*,struct perf_event_attr const*,struct arch_hw_breakpoint*) ;

int FUNC_2(struct perf_event *VAR_1,
        const struct perf_event_attr *VAR_2,
        struct arch_hw_breakpoint *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 switch (VAR_3->len) {
 case 131:
  VAR_4 = 0;
  if (VAR_3->mask)
   VAR_4 = VAR_3->mask;
  break;
 case 130:
  VAR_4 = 1;
  break;
 case 129:
  VAR_4 = 3;
  break;





 default:
  FUNC_0(1);
  return -VAR_0;
 }





 if (VAR_3->address & VAR_4)
  return -VAR_0;

 return 0;
}
