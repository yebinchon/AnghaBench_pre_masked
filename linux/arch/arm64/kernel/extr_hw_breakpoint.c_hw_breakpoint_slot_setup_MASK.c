
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
typedef enum hw_breakpoint_ops { ____Placeholder_hw_breakpoint_ops } hw_breakpoint_ops ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct perf_event **VAR_2, int VAR_3,
        struct perf_event *VAR_4,
        enum hw_breakpoint_ops VAR_5)
{
 int VAR_6;
 struct perf_event **VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  VAR_7 = &VAR_2[VAR_6];
  switch (VAR_5) {
  case 130:
   if (!*VAR_7) {
    *VAR_7 = VAR_4;
    return VAR_6;
   }
   break;
  case 128:
   if (*VAR_7 == VAR_4) {
    *VAR_7 = ((void*)0);
    return VAR_6;
   }
   break;
  case 129:
   if (*VAR_7 == VAR_4)
    return VAR_6;
   break;
  default:
   FUNC_0("Unhandled hw breakpoint ops %d\n", VAR_5);
   return -VAR_0;
  }
 }
 return -VAR_1;
}
