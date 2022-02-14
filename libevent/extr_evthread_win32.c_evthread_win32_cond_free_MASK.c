
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evthread_win32_cond {int event; int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct evthread_win32_cond*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct evthread_win32_cond *VAR_1 = VAR_0;
 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1->event);
 FUNC_2(VAR_1);
}
