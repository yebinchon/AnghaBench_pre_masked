
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disabled; } ;
struct perf_event {TYPE_1__ attr; } ;
struct arch_hw_breakpoint {int type; int len; } ;


 int VAR_0 ;
 struct arch_hw_breakpoint* FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct perf_event *VAR_1[])
{
 int VAR_2;
 int VAR_3 = 0;
 struct arch_hw_breakpoint *VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2] && !VAR_1[VAR_2]->attr.disabled) {
   VAR_4 = FUNC_0(VAR_1[VAR_2]);
   VAR_3 |= FUNC_1(VAR_2, VAR_4->len, VAR_4->type);
  }
 }

 return VAR_3;
}
