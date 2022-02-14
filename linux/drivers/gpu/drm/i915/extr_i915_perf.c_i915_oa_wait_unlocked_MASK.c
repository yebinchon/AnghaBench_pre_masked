
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_perf_stream {int poll_wq; int periodic; } ;


 int VAR_0 ;
 int FUNC_0 (struct i915_perf_stream*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i915_perf_stream *VAR_1)
{

 if (!VAR_1->periodic)
  return -VAR_0;

 return FUNC_1(VAR_1->poll_wq,
     FUNC_0(VAR_1));
}
