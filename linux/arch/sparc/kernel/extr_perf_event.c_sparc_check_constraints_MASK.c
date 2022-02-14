
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int idx; } ;
struct perf_event {TYPE_1__ hw; } ;
struct TYPE_4__ {int max_hw_events; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct perf_event **VAR_4,
       unsigned long *VAR_5, int VAR_6)
{
 u8 VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = 0;




 if (!VAR_6)
  return 0;

 if (VAR_6 > VAR_3->max_hw_events)
  return -1;

 if (!(VAR_3->flags & VAR_2)) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
   VAR_4[VAR_10]->hw.idx = VAR_10;
  return 0;
 }

 VAR_7 = FUNC_1(VAR_5[0]);
 if (VAR_6 == 1) {
  if (VAR_7 & VAR_0)
   VAR_9 = 1;
  goto success;
 }
 FUNC_0(VAR_6 != 2);
 VAR_8 = FUNC_1(VAR_5[1]);


 if (VAR_7 == (VAR_1 | VAR_0) &&
     VAR_8 == (VAR_1 | VAR_0))
  goto success;




 if ((VAR_7 == VAR_1 || VAR_7 == VAR_0) &&
     VAR_8 == (VAR_1 | VAR_0)) {
  if (VAR_7 & VAR_0)
   VAR_9 = 1;
  goto success;
 }

 if ((VAR_8 == VAR_1 || VAR_8 == VAR_0) &&
     VAR_7 == (VAR_1 | VAR_0)) {
  if (VAR_8 & VAR_1)
   VAR_9 = 1;
  goto success;
 }


 if ((VAR_7 == VAR_1 && VAR_8 == VAR_0) ||
     (VAR_7 == VAR_0 && VAR_8 == VAR_1)) {
  if (VAR_7 & VAR_0)
   VAR_9 = 1;
  goto success;
 }


 return -1;

success:
 VAR_4[0]->hw.idx = VAR_9;
 if (VAR_6 == 2)
  VAR_4[1]->hw.idx = VAR_9 ^ 1;
 return 0;
}
