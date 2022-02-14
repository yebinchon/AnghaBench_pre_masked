
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ mperf; scalar_t__ tsc; scalar_t__ aperf; scalar_t__ time; } ;
struct cpudata {scalar_t__ prev_mperf; scalar_t__ prev_tsc; scalar_t__ last_sample_time; scalar_t__ prev_aperf; TYPE_1__ sample; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpudata*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static inline bool FUNC_5(struct cpudata *VAR_2, u64 VAR_3)
{
 u64 VAR_4, VAR_5;
 unsigned long VAR_6;
 u64 VAR_7;

 FUNC_2(VAR_6);
 FUNC_3(VAR_0, VAR_4);
 FUNC_3(VAR_1, VAR_5);
 VAR_7 = FUNC_4();
 if (VAR_2->prev_mperf == VAR_5 || VAR_2->prev_tsc == VAR_7) {
  FUNC_1(VAR_6);
  return 0;
 }
 FUNC_1(VAR_6);

 VAR_2->last_sample_time = VAR_2->sample.time;
 VAR_2->sample.time = VAR_3;
 VAR_2->sample.aperf = VAR_4;
 VAR_2->sample.mperf = VAR_5;
 VAR_2->sample.tsc = VAR_7;
 VAR_2->sample.aperf -= VAR_2->prev_aperf;
 VAR_2->sample.mperf -= VAR_2->prev_mperf;
 VAR_2->sample.tsc -= VAR_2->prev_tsc;

 VAR_2->prev_aperf = VAR_4;
 VAR_2->prev_mperf = VAR_5;
 VAR_2->prev_tsc = VAR_7;







 if (VAR_2->last_sample_time) {
  FUNC_0(VAR_2);
  return 1;
 }
 return 0;
}
