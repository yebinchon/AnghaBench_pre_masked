
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

void *
FUNC_3(void *VAR_1)
{
 FUNC_0("thread %p, &i = %p\n", FUNC_1(), &VAR_0);
 for (VAR_0 = 0; VAR_0 < 10; VAR_0++) {
  FUNC_0("thread %p, i = %d\n", FUNC_1(), VAR_0);
  FUNC_2(1);
 }
 return (((void*)0));
}
