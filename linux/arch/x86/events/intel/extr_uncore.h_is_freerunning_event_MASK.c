
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int config; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct perf_event *VAR_2)
{
 u64 VAR_3 = VAR_2->attr.config;

 return ((VAR_3 & VAR_0) == VAR_0) &&
        (((VAR_3 >> 8) & 0xff) >= VAR_1);
}
