
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prev_count; } ;
struct perf_event {int count; TYPE_1__ hw; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;






 scalar_t__ VAR_0 ;
 int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 s64 VAR_4, VAR_5 = 0, VAR_6 = 0;

 if (VAR_3 < 0)
  return;

 do {
  VAR_4 = FUNC_5(&VAR_2->hw.prev_count);
  switch (VAR_3) {
  case 131:
   VAR_5 = FUNC_2();
   VAR_6 = 16 * (VAR_5 - VAR_4);
   break;
  case 129:
   VAR_5 = FUNC_1();
   VAR_6 = VAR_4 - VAR_5;
   if (VAR_6 < 0)
    VAR_6 += 0x1000000000000LL;
   break;
  case 128:
   VAR_5 = VAR_1;
   VAR_6 = (s64)((s32)VAR_5 - (s32)VAR_4);
   break;
  case 130:
   VAR_5 = VAR_0;
   VAR_6 = (s64)((s32)VAR_5 - (s32)VAR_4);
   break;
  }
 } while (FUNC_4(&VAR_2->hw.prev_count, VAR_4, VAR_5) != VAR_4);

 FUNC_3(VAR_6, &VAR_2->count);
}
