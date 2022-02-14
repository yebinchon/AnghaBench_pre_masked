
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct TYPE_2__ {void (* read ) (struct perf_event*) ;} ;


 void FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct perf_event *VAR_1)
{
 if (VAR_0.read)
  return VAR_0.read(VAR_1);
 FUNC_1(VAR_1);
}
