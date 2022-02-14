
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int flags; int gc_wait; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_set*) ;
 scalar_t__ FUNC_1 (struct cache_set*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct cache_set*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void *VAR_1)
{
 struct cache_set *VAR_2 = VAR_1;

 while (1) {
  FUNC_5(VAR_2->gc_wait,
      FUNC_2() ||
      FUNC_4(VAR_0, &VAR_2->flags) ||
      FUNC_1(VAR_2));

  if (FUNC_2() ||
      FUNC_4(VAR_0, &VAR_2->flags))
   break;

  FUNC_3(VAR_2);
  FUNC_0(VAR_2);
 }

 FUNC_6();
 return 0;
}
