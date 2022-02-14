
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {struct thread_info* real_thread; } ;
struct TYPE_2__ {struct thread_info* stack; } ;


 TYPE_1__* VAR_0 ;
 struct thread_info* FUNC_0 () ;
 int VAR_1 ;
 unsigned long FUNC_1 (int*,int ) ;

unsigned long FUNC_2(int VAR_2)
{
 struct thread_info *VAR_3, *VAR_4;
 unsigned long VAR_5;

 VAR_3 = FUNC_0();

 VAR_1 = 1;

 VAR_4 = VAR_3->real_thread;
 VAR_0->stack = VAR_4;
 VAR_3->real_thread = ((void*)0);
 *VAR_4 = *VAR_3;

 VAR_5 = FUNC_1(&VAR_1, 0);
 return VAR_5 & ~1;
}
