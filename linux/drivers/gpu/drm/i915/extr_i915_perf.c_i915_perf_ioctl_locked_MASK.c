
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_perf_stream {int dummy; } ;


 long VAR_0 ;


 int FUNC_0 (struct i915_perf_stream*) ;
 int FUNC_1 (struct i915_perf_stream*) ;

__attribute__((used)) static long FUNC_2(struct i915_perf_stream *VAR_1,
       unsigned int VAR_2,
       unsigned long VAR_3)
{
 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_1);
  return 0;
 case 129:
  FUNC_0(VAR_1);
  return 0;
 }

 return -VAR_0;
}
