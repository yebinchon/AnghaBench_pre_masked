
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_ipc {void* in; void* out; int work; scalar_t__ value; int started; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(void *VAR_3)
{
 struct task_ipc VAR_4;
 int VAR_5 = 0;


 VAR_4.in = FUNC_2();
 if (!VAR_4.in)
  return -VAR_1;
 VAR_4.out = FUNC_2();
 if (!VAR_4.out) {
  VAR_5 = -VAR_1;
  goto err_in;
 }


 FUNC_8(&VAR_4.started);

 VAR_4.value = 0;
 FUNC_0(&VAR_4.work, VAR_2);
 FUNC_10(&VAR_4.work);

 FUNC_12(&VAR_4.started);

 FUNC_11(1000, 2000);
 if (FUNC_1(VAR_4.value)) {
  FUNC_9("worker updated value before i915_sw_fence was signaled\n");
  VAR_5 = -VAR_0;
 }

 FUNC_6(VAR_4.in);
 FUNC_7(VAR_4.out);

 if (!FUNC_1(VAR_4.value)) {
  FUNC_9("worker signaled i915_sw_fence before value was posted\n");
  VAR_5 = -VAR_0;
 }

 FUNC_4(&VAR_4.work);
 FUNC_3(&VAR_4.work);
 FUNC_5(VAR_4.out);
err_in:
 FUNC_5(VAR_4.in);
 return VAR_5;
}
