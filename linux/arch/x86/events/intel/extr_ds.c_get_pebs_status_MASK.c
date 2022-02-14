
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pebs_record_nhm {int status; } ;
struct pebs_basic {int applicable_counters; } ;
struct TYPE_3__ {int pebs_format; } ;
struct TYPE_4__ {TYPE_1__ intel_cap; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static inline u64 FUNC_0(void *VAR_1)
{
 if (VAR_0.intel_cap.pebs_format < 4)
  return ((struct pebs_record_nhm *)VAR_1)->status;
 return ((struct pebs_basic *)VAR_1)->applicable_counters;
}
