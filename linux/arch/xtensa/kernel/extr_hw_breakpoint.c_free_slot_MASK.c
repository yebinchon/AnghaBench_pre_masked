
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct perf_event **VAR_1, size_t VAR_2,
       struct perf_event *VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  if (VAR_1[VAR_4] == VAR_3) {
   VAR_1[VAR_4] = ((void*)0);
   return VAR_4;
  }
 }
 return -VAR_0;
}
