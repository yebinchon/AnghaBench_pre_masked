
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct spin_multi_state {int loops; int exit_wait; int enter_wait; int start_wait; int lock; } ;
struct spin_multi_per_thread {int start; struct spin_multi_state* state; } ;
typedef int ktime_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int (*) (struct spin_multi_per_thread*),struct spin_multi_per_thread*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct spin_multi_per_thread*) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, u64 *VAR_1)
{
 ktime_t VAR_2;
 struct spin_multi_state VAR_3;
 struct spin_multi_per_thread VAR_4, VAR_5;

 VAR_3.lock = FUNC_0("multi_get");
 VAR_3.loops = 1000000;

 FUNC_1(&VAR_3.start_wait, 2);
 FUNC_1(&VAR_3.enter_wait, 2);
 FUNC_1(&VAR_3.exit_wait, 2);
 VAR_4 = &VAR_3;
 VAR_5 = &VAR_3;

 FUNC_2(FUNC_5, &VAR_5, "multi_get");

 FUNC_5(&VAR_4);

 VAR_2 = FUNC_3();

 *VAR_1 = FUNC_4(VAR_2, VAR_4);

 return 0;
}
