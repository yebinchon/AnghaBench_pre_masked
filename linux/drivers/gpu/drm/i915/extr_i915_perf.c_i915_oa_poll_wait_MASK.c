
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_perf_stream {int poll_wq; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct i915_perf_stream *VAR_0,
         struct file *VAR_1,
         poll_table *VAR_2)
{
 FUNC_0(VAR_1, &VAR_0->poll_wq, VAR_2);
}
