
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct cpu_hw_events {unsigned long pebs_enabled; int pebs_record_size; } ;
struct TYPE_3__ {int pebs_format; } ;
struct TYPE_4__ {TYPE_1__ intel_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int,unsigned long*) ;
 struct cpu_hw_events* FUNC_2 (int *) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static inline void *
FUNC_3(void *VAR_3, void *VAR_4, int VAR_5)
{
 struct cpu_hw_events *VAR_6 = FUNC_2(&VAR_1);
 void *VAR_7;
 u64 VAR_8;





 if (VAR_2.intel_cap.pebs_format < 1)
  return VAR_3;

 if (VAR_3 == ((void*)0))
  return ((void*)0);

 for (VAR_7 = VAR_3; VAR_7 < VAR_4; VAR_7 += VAR_6->pebs_record_size) {
  unsigned long VAR_9 = FUNC_0(VAR_7);

  if (FUNC_1(VAR_5, (unsigned long *)&VAR_9)) {

   if (VAR_2.intel_cap.pebs_format >= 3)
    return VAR_7;

   if (VAR_9 == (1 << VAR_5))
    return VAR_7;


   VAR_8 = VAR_9 & VAR_6->pebs_enabled;
   VAR_8 &= VAR_0;
   if (VAR_8 == (1 << VAR_5))
    return VAR_7;
  }
 }
 return ((void*)0);
}
