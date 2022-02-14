
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_3__ {int in_hook; } ;
typedef TYPE_1__ tcache_t ;


 int * FUNC_0 () ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static bool *
FUNC_2() {
 static bool VAR_0 = 1;
 tsdn_t *VAR_1 = FUNC_0();
 tcache_t *VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != ((void*)0)) {
  return &VAR_2->in_hook;
 }
 return &VAR_0;
}
