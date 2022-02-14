
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idx; unsigned long config_base; } ;
struct perf_event {TYPE_1__ hw; } ;
struct TYPE_4__ {int idx; unsigned long config; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static int FUNC_1(struct perf_event **VAR_8,
    unsigned long *VAR_9, int VAR_10)
{
 int VAR_11;
 unsigned long VAR_12;

 VAR_11 = VAR_7[VAR_9[0]-1].idx;
 VAR_12 = VAR_7[VAR_9[0]-1].config;
 if (VAR_10 == 1)
  goto success;

 FUNC_0(VAR_10 != 2);

 if (VAR_9[0] == VAR_3 || VAR_9[1] == VAR_3) {

  VAR_11 = (VAR_9[0] == VAR_3) ? 1 : 0;

  if (VAR_9[VAR_11] == VAR_1) {
   VAR_12 = VAR_4;
   goto success;
  }
 }

 if (VAR_9[0] == VAR_0 || VAR_9[1] == VAR_0) {

  VAR_11 = (VAR_9[0] == VAR_0) ? 1 : 0;

  if (VAR_9[VAR_11] == VAR_2) {
   VAR_12 = VAR_5;
   goto success;
  }
 }

 if (VAR_9[0] == VAR_2 || VAR_9[1] == VAR_2) {

  VAR_11 = (VAR_9[0] == VAR_2) ? 0 : 1;

  if (VAR_9[VAR_11^1] == VAR_1) {
   VAR_12 = VAR_6;
   goto success;
  }
 }


 return -1;

success:
 VAR_8[0]->hw.idx = VAR_11;
 VAR_8[0]->hw.config_base = VAR_12;
 if (VAR_10 == 2) {
  VAR_8[1]->hw.idx = VAR_11 ^ 1;
  VAR_8[1]->hw.config_base = VAR_12;
 }
 return 0;
}
