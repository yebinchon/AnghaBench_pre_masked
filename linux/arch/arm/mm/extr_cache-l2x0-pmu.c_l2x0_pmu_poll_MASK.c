
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct hrtimer {int dummy; } ;
typedef enum hrtimer_restart { ____Placeholder_hrtimer_restart } hrtimer_restart ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct perf_event** VAR_2 ;
 int FUNC_2 (struct hrtimer*,int ) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;
 int VAR_3 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static enum hrtimer_restart FUNC_7(struct hrtimer *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_6(VAR_5);
 FUNC_0();

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct perf_event *VAR_7 = VAR_2[VAR_6];

  if (!VAR_7)
   continue;

  FUNC_4(VAR_7);
  FUNC_3(VAR_7);
 }

 FUNC_1();
 FUNC_5(VAR_5);

 FUNC_2(VAR_4, VAR_3);
 return VAR_0;
}
