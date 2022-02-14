
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int hw; } ;
struct cpu_hw_events {struct perf_event** events; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 struct cpu_hw_events* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,unsigned long const) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct cpu_hw_events *VAR_5 = FUNC_1(&VAR_4);
 static const unsigned long VAR_6[4] = {
  0x4300B5,
  0x4300D2,
  0x4300B1,
  0x4300B1
 };
 struct perf_event *VAR_7;
 int VAR_8;
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_7 = VAR_5->events[VAR_8];
  if (VAR_7)
   FUNC_4(VAR_7);
 }

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  FUNC_2(VAR_1 + VAR_8, VAR_6[VAR_8]);
  FUNC_2(VAR_2 + VAR_8, 0x0);
 }

 FUNC_2(VAR_3, 0xf);
 FUNC_2(VAR_3, 0x0);

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_7 = VAR_5->events[VAR_8];

  if (VAR_7) {
   FUNC_3(VAR_7);
   FUNC_0(&VAR_7->hw,
     VAR_0);
  } else
   FUNC_2(VAR_1 + VAR_8, 0x0);
 }
}
