
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_request {struct i915_capture_list* capture_list; } ;
struct i915_capture_list {struct i915_capture_list* next; } ;


 int FUNC_0 (struct i915_capture_list*) ;

__attribute__((used)) static void FUNC_1(struct i915_request *VAR_0)
{
 struct i915_capture_list *VAR_1;

 VAR_1 = VAR_0->capture_list;
 while (VAR_1) {
  struct i915_capture_list *VAR_2 = VAR_1->next;

  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
