
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {int used_mask; } ;
struct hw_perf_event {unsigned long config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct pmu_hw_events *VAR_7,
       struct perf_event *VAR_8)
{
 int VAR_9;
 struct hw_perf_event *VAR_10 = &VAR_8->hw;
 unsigned long VAR_11 = VAR_10->config_base & VAR_4;

 VAR_9 = FUNC_0(VAR_11);



 if (VAR_11 == VAR_5) {
  if (!FUNC_1(VAR_9, VAR_7->used_mask))
   return VAR_9;
  if (!FUNC_1(VAR_1, VAR_7->used_mask))
   return VAR_1;
  if (!FUNC_1(VAR_2, VAR_7->used_mask))
   return VAR_2;
 } else if (VAR_11 == VAR_6) {
  if (!FUNC_1(VAR_9, VAR_7->used_mask))
   return VAR_9;
  else if (!FUNC_1(VAR_2, VAR_7->used_mask))
   return VAR_2;
  else if (!FUNC_1
    (VAR_3, VAR_7->used_mask))
   return VAR_3;
 } else {
  if (!FUNC_1(VAR_9, VAR_7->used_mask))
   return VAR_9;
 }
 return -VAR_0;
}
