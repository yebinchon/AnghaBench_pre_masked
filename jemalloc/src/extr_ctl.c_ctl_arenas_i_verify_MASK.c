
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** arenas; } ;
struct TYPE_3__ {int initialized; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t,int,int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static bool
FUNC_1(size_t VAR_2) {
 size_t VAR_3 = FUNC_0(VAR_2, 1, 1);
 if (VAR_3 == VAR_0 || !VAR_1->arenas[VAR_3]->initialized) {
  return 1;
 }

 return 0;
}
